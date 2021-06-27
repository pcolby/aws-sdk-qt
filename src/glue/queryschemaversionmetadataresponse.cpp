/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
    return static_cast<const QuerySchemaVersionMetadataRequest *>(GlueResponse::request());
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
