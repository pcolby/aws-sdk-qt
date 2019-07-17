/*
    Copyright 2013-2019 Paul Colby

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

#include "removeattributesresponse.h"
#include "removeattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::RemoveAttributesResponse
 * \brief The RemoveAttributesResponse class provides an interace for Pinpoint RemoveAttributes responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::removeAttributes
 */

/*!
 * Constructs a RemoveAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveAttributesResponse::RemoveAttributesResponse(
        const RemoveAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new RemoveAttributesResponsePrivate(this), parent)
{
    setRequest(new RemoveAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveAttributesRequest * RemoveAttributesResponse::request() const
{
    Q_D(const RemoveAttributesResponse);
    return static_cast<const RemoveAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint RemoveAttributes \a response.
 */
void RemoveAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::RemoveAttributesResponsePrivate
 * \brief The RemoveAttributesResponsePrivate class provides private implementation for RemoveAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a RemoveAttributesResponsePrivate object with public implementation \a q.
 */
RemoveAttributesResponsePrivate::RemoveAttributesResponsePrivate(
    RemoveAttributesResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint RemoveAttributes response element from \a xml.
 */
void RemoveAttributesResponsePrivate::parseRemoveAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
