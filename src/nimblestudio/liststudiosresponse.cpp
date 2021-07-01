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

#include "liststudiosresponse.h"
#include "liststudiosresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListStudiosResponse
 * \brief The ListStudiosResponse class provides an interace for NimbleStudio ListStudios responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listStudios
 */

/*!
 * Constructs a ListStudiosResponse object for \a reply to \a request, with parent \a parent.
 */
ListStudiosResponse::ListStudiosResponse(
        const ListStudiosRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new ListStudiosResponsePrivate(this), parent)
{
    setRequest(new ListStudiosRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStudiosRequest * ListStudiosResponse::request() const
{
    Q_D(const ListStudiosResponse);
    return static_cast<const ListStudiosRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio ListStudios \a response.
 */
void ListStudiosResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStudiosResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::ListStudiosResponsePrivate
 * \brief The ListStudiosResponsePrivate class provides private implementation for ListStudiosResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListStudiosResponsePrivate object with public implementation \a q.
 */
ListStudiosResponsePrivate::ListStudiosResponsePrivate(
    ListStudiosResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio ListStudios response element from \a xml.
 */
void ListStudiosResponsePrivate::parseListStudiosResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStudiosResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
