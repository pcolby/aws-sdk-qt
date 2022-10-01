// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "queryschemaversionmetadataresponse.h"
#include "queryschemaversionmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::QuerySchemaVersionMetadataResponse
 * \brief The QuerySchemaVersionMetadataResponse class provides an interace for Glue QuerySchemaVersionMetadata responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::querySchemaVersionMetadata
 */

/*!
 * Constructs a QuerySchemaVersionMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
QuerySchemaVersionMetadataResponse::QuerySchemaVersionMetadataResponse(
        const QuerySchemaVersionMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new QuerySchemaVersionMetadataResponsePrivate(this), parent)
{
    setRequest(new QuerySchemaVersionMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const QuerySchemaVersionMetadataRequest * QuerySchemaVersionMetadataResponse::request() const
{
    Q_D(const QuerySchemaVersionMetadataResponse);
    return static_cast<const QuerySchemaVersionMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue QuerySchemaVersionMetadata \a response.
 */
void QuerySchemaVersionMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(QuerySchemaVersionMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::QuerySchemaVersionMetadataResponsePrivate
 * \brief The QuerySchemaVersionMetadataResponsePrivate class provides private implementation for QuerySchemaVersionMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a QuerySchemaVersionMetadataResponsePrivate object with public implementation \a q.
 */
QuerySchemaVersionMetadataResponsePrivate::QuerySchemaVersionMetadataResponsePrivate(
    QuerySchemaVersionMetadataResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue QuerySchemaVersionMetadata response element from \a xml.
 */
void QuerySchemaVersionMetadataResponsePrivate::parseQuerySchemaVersionMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("QuerySchemaVersionMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
