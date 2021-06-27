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

#include "deleteschemaversionresponse.h"
#include "deleteschemaversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DeleteSchemaVersionResponse
 * \brief The DeleteSchemaVersionResponse class provides an interace for Schemas DeleteSchemaVersion responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::deleteSchemaVersion
 */

/*!
 * Constructs a DeleteSchemaVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSchemaVersionResponse::DeleteSchemaVersionResponse(
        const DeleteSchemaVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new DeleteSchemaVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteSchemaVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSchemaVersionRequest * DeleteSchemaVersionResponse::request() const
{
    return static_cast<const DeleteSchemaVersionRequest *>(SchemasResponse::request());
}

/*!
 * \reimp
 * Parses a successful Schemas DeleteSchemaVersion \a response.
 */
void DeleteSchemaVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSchemaVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::DeleteSchemaVersionResponsePrivate
 * \brief The DeleteSchemaVersionResponsePrivate class provides private implementation for DeleteSchemaVersionResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DeleteSchemaVersionResponsePrivate object with public implementation \a q.
 */
DeleteSchemaVersionResponsePrivate::DeleteSchemaVersionResponsePrivate(
    DeleteSchemaVersionResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas DeleteSchemaVersion response element from \a xml.
 */
void DeleteSchemaVersionResponsePrivate::parseDeleteSchemaVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSchemaVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
