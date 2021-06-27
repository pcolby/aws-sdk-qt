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

#include "listschemaversionsresponse.h"
#include "listschemaversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListSchemaVersionsResponse
 * \brief The ListSchemaVersionsResponse class provides an interace for Glue ListSchemaVersions responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::listSchemaVersions
 */

/*!
 * Constructs a ListSchemaVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSchemaVersionsResponse::ListSchemaVersionsResponse(
        const ListSchemaVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListSchemaVersionsResponsePrivate(this), parent)
{
    setRequest(new ListSchemaVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSchemaVersionsRequest * ListSchemaVersionsResponse::request() const
{
    return static_cast<const ListSchemaVersionsRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue ListSchemaVersions \a response.
 */
void ListSchemaVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSchemaVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListSchemaVersionsResponsePrivate
 * \brief The ListSchemaVersionsResponsePrivate class provides private implementation for ListSchemaVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListSchemaVersionsResponsePrivate object with public implementation \a q.
 */
ListSchemaVersionsResponsePrivate::ListSchemaVersionsResponsePrivate(
    ListSchemaVersionsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListSchemaVersions response element from \a xml.
 */
void ListSchemaVersionsResponsePrivate::parseListSchemaVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSchemaVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
