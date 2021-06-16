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

#include "listtemplateversionsresponse.h"
#include "listtemplateversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::ListTemplateVersionsResponse
 * \brief The ListTemplateVersionsResponse class provides an interace for Pinpoint ListTemplateVersions responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::listTemplateVersions
 */

/*!
 * Constructs a ListTemplateVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTemplateVersionsResponse::ListTemplateVersionsResponse(
        const ListTemplateVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new ListTemplateVersionsResponsePrivate(this), parent)
{
    setRequest(new ListTemplateVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTemplateVersionsRequest * ListTemplateVersionsResponse::request() const
{
    Q_D(const ListTemplateVersionsResponse);
    return static_cast<const ListTemplateVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint ListTemplateVersions \a response.
 */
void ListTemplateVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTemplateVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::ListTemplateVersionsResponsePrivate
 * \brief The ListTemplateVersionsResponsePrivate class provides private implementation for ListTemplateVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a ListTemplateVersionsResponsePrivate object with public implementation \a q.
 */
ListTemplateVersionsResponsePrivate::ListTemplateVersionsResponsePrivate(
    ListTemplateVersionsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint ListTemplateVersions response element from \a xml.
 */
void ListTemplateVersionsResponsePrivate::parseListTemplateVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTemplateVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
