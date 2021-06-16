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

#include "deletediscovererresponse.h"
#include "deletediscovererresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DeleteDiscovererResponse
 * \brief The DeleteDiscovererResponse class provides an interace for Schemas DeleteDiscoverer responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::deleteDiscoverer
 */

/*!
 * Constructs a DeleteDiscovererResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDiscovererResponse::DeleteDiscovererResponse(
        const DeleteDiscovererRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new DeleteDiscovererResponsePrivate(this), parent)
{
    setRequest(new DeleteDiscovererRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDiscovererRequest * DeleteDiscovererResponse::request() const
{
    Q_D(const DeleteDiscovererResponse);
    return static_cast<const DeleteDiscovererRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas DeleteDiscoverer \a response.
 */
void DeleteDiscovererResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDiscovererResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::DeleteDiscovererResponsePrivate
 * \brief The DeleteDiscovererResponsePrivate class provides private implementation for DeleteDiscovererResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DeleteDiscovererResponsePrivate object with public implementation \a q.
 */
DeleteDiscovererResponsePrivate::DeleteDiscovererResponsePrivate(
    DeleteDiscovererResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas DeleteDiscoverer response element from \a xml.
 */
void DeleteDiscovererResponsePrivate::parseDeleteDiscovererResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDiscovererResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
