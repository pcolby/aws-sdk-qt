// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetdevendpointsresponse.h"
#include "batchgetdevendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetDevEndpointsResponse
 * \brief The BatchGetDevEndpointsResponse class provides an interace for Glue BatchGetDevEndpoints responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchGetDevEndpoints
 */

/*!
 * Constructs a BatchGetDevEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetDevEndpointsResponse::BatchGetDevEndpointsResponse(
        const BatchGetDevEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchGetDevEndpointsResponsePrivate(this), parent)
{
    setRequest(new BatchGetDevEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetDevEndpointsRequest * BatchGetDevEndpointsResponse::request() const
{
    Q_D(const BatchGetDevEndpointsResponse);
    return static_cast<const BatchGetDevEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchGetDevEndpoints \a response.
 */
void BatchGetDevEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetDevEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchGetDevEndpointsResponsePrivate
 * \brief The BatchGetDevEndpointsResponsePrivate class provides private implementation for BatchGetDevEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetDevEndpointsResponsePrivate object with public implementation \a q.
 */
BatchGetDevEndpointsResponsePrivate::BatchGetDevEndpointsResponsePrivate(
    BatchGetDevEndpointsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchGetDevEndpoints response element from \a xml.
 */
void BatchGetDevEndpointsResponsePrivate::parseBatchGetDevEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetDevEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
