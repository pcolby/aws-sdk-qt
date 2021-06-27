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

#include "deleteschemaversionsresponse.h"
#include "deleteschemaversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteSchemaVersionsResponse
 * \brief The DeleteSchemaVersionsResponse class provides an interace for Glue DeleteSchemaVersions responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteSchemaVersions
 */

/*!
 * Constructs a DeleteSchemaVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSchemaVersionsResponse::DeleteSchemaVersionsResponse(
        const DeleteSchemaVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteSchemaVersionsResponsePrivate(this), parent)
{
    setRequest(new DeleteSchemaVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSchemaVersionsRequest * DeleteSchemaVersionsResponse::request() const
{
    return static_cast<const DeleteSchemaVersionsRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue DeleteSchemaVersions \a response.
 */
void DeleteSchemaVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSchemaVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteSchemaVersionsResponsePrivate
 * \brief The DeleteSchemaVersionsResponsePrivate class provides private implementation for DeleteSchemaVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteSchemaVersionsResponsePrivate object with public implementation \a q.
 */
DeleteSchemaVersionsResponsePrivate::DeleteSchemaVersionsResponsePrivate(
    DeleteSchemaVersionsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteSchemaVersions response element from \a xml.
 */
void DeleteSchemaVersionsResponsePrivate::parseDeleteSchemaVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSchemaVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
