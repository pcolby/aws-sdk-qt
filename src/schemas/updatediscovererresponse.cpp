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

#include "updatediscovererresponse.h"
#include "updatediscovererresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::UpdateDiscovererResponse
 * \brief The UpdateDiscovererResponse class provides an interace for Schemas UpdateDiscoverer responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::updateDiscoverer
 */

/*!
 * Constructs a UpdateDiscovererResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDiscovererResponse::UpdateDiscovererResponse(
        const UpdateDiscovererRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new UpdateDiscovererResponsePrivate(this), parent)
{
    setRequest(new UpdateDiscovererRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDiscovererRequest * UpdateDiscovererResponse::request() const
{
    return static_cast<const UpdateDiscovererRequest *>(SchemasResponse::request());
}

/*!
 * \reimp
 * Parses a successful Schemas UpdateDiscoverer \a response.
 */
void UpdateDiscovererResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDiscovererResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::UpdateDiscovererResponsePrivate
 * \brief The UpdateDiscovererResponsePrivate class provides private implementation for UpdateDiscovererResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a UpdateDiscovererResponsePrivate object with public implementation \a q.
 */
UpdateDiscovererResponsePrivate::UpdateDiscovererResponsePrivate(
    UpdateDiscovererResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas UpdateDiscoverer response element from \a xml.
 */
void UpdateDiscovererResponsePrivate::parseUpdateDiscovererResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDiscovererResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
