// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetcustomentitytypesresponse.h"
#include "batchgetcustomentitytypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetCustomEntityTypesResponse
 * \brief The BatchGetCustomEntityTypesResponse class provides an interace for Glue BatchGetCustomEntityTypes responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchGetCustomEntityTypes
 */

/*!
 * Constructs a BatchGetCustomEntityTypesResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetCustomEntityTypesResponse::BatchGetCustomEntityTypesResponse(
        const BatchGetCustomEntityTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchGetCustomEntityTypesResponsePrivate(this), parent)
{
    setRequest(new BatchGetCustomEntityTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetCustomEntityTypesRequest * BatchGetCustomEntityTypesResponse::request() const
{
    Q_D(const BatchGetCustomEntityTypesResponse);
    return static_cast<const BatchGetCustomEntityTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchGetCustomEntityTypes \a response.
 */
void BatchGetCustomEntityTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetCustomEntityTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchGetCustomEntityTypesResponsePrivate
 * \brief The BatchGetCustomEntityTypesResponsePrivate class provides private implementation for BatchGetCustomEntityTypesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetCustomEntityTypesResponsePrivate object with public implementation \a q.
 */
BatchGetCustomEntityTypesResponsePrivate::BatchGetCustomEntityTypesResponsePrivate(
    BatchGetCustomEntityTypesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchGetCustomEntityTypes response element from \a xml.
 */
void BatchGetCustomEntityTypesResponsePrivate::parseBatchGetCustomEntityTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetCustomEntityTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
