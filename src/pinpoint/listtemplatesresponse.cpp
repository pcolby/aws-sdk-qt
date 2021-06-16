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

#include "listtemplatesresponse.h"
#include "listtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::ListTemplatesResponse
 * \brief The ListTemplatesResponse class provides an interace for Pinpoint ListTemplates responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::listTemplates
 */

/*!
 * Constructs a ListTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTemplatesResponse::ListTemplatesResponse(
        const ListTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new ListTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTemplatesRequest * ListTemplatesResponse::request() const
{
    Q_D(const ListTemplatesResponse);
    return static_cast<const ListTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint ListTemplates \a response.
 */
void ListTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::ListTemplatesResponsePrivate
 * \brief The ListTemplatesResponsePrivate class provides private implementation for ListTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a ListTemplatesResponsePrivate object with public implementation \a q.
 */
ListTemplatesResponsePrivate::ListTemplatesResponsePrivate(
    ListTemplatesResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint ListTemplates response element from \a xml.
 */
void ListTemplatesResponsePrivate::parseListTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
