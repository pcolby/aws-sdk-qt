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

#include "liststudiocomponentsresponse.h"
#include "liststudiocomponentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListStudioComponentsResponse
 * \brief The ListStudioComponentsResponse class provides an interace for NimbleStudio ListStudioComponents responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listStudioComponents
 */

/*!
 * Constructs a ListStudioComponentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStudioComponentsResponse::ListStudioComponentsResponse(
        const ListStudioComponentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new ListStudioComponentsResponsePrivate(this), parent)
{
    setRequest(new ListStudioComponentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStudioComponentsRequest * ListStudioComponentsResponse::request() const
{
    return static_cast<const ListStudioComponentsRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio ListStudioComponents \a response.
 */
void ListStudioComponentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStudioComponentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::ListStudioComponentsResponsePrivate
 * \brief The ListStudioComponentsResponsePrivate class provides private implementation for ListStudioComponentsResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListStudioComponentsResponsePrivate object with public implementation \a q.
 */
ListStudioComponentsResponsePrivate::ListStudioComponentsResponsePrivate(
    ListStudioComponentsResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio ListStudioComponents response element from \a xml.
 */
void ListStudioComponentsResponsePrivate::parseListStudioComponentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStudioComponentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
