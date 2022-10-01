// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletetableversionresponse.h"
#include "batchdeletetableversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchDeleteTableVersionResponse
 * \brief The BatchDeleteTableVersionResponse class provides an interace for Glue BatchDeleteTableVersion responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchDeleteTableVersion
 */

/*!
 * Constructs a BatchDeleteTableVersionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteTableVersionResponse::BatchDeleteTableVersionResponse(
        const BatchDeleteTableVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchDeleteTableVersionResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteTableVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteTableVersionRequest * BatchDeleteTableVersionResponse::request() const
{
    Q_D(const BatchDeleteTableVersionResponse);
    return static_cast<const BatchDeleteTableVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchDeleteTableVersion \a response.
 */
void BatchDeleteTableVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteTableVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchDeleteTableVersionResponsePrivate
 * \brief The BatchDeleteTableVersionResponsePrivate class provides private implementation for BatchDeleteTableVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchDeleteTableVersionResponsePrivate object with public implementation \a q.
 */
BatchDeleteTableVersionResponsePrivate::BatchDeleteTableVersionResponsePrivate(
    BatchDeleteTableVersionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchDeleteTableVersion response element from \a xml.
 */
void BatchDeleteTableVersionResponsePrivate::parseBatchDeleteTableVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteTableVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
