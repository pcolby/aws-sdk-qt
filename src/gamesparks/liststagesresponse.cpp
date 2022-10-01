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

#include "liststagesresponse.h"
#include "liststagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListStagesResponse
 * \brief The ListStagesResponse class provides an interace for GameSparks ListStages responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listStages
 */

/*!
 * Constructs a ListStagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListStagesResponse::ListStagesResponse(
        const ListStagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ListStagesResponsePrivate(this), parent)
{
    setRequest(new ListStagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStagesRequest * ListStagesResponse::request() const
{
    Q_D(const ListStagesResponse);
    return static_cast<const ListStagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ListStages \a response.
 */
void ListStagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ListStagesResponsePrivate
 * \brief The ListStagesResponsePrivate class provides private implementation for ListStagesResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListStagesResponsePrivate object with public implementation \a q.
 */
ListStagesResponsePrivate::ListStagesResponsePrivate(
    ListStagesResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ListStages response element from \a xml.
 */
void ListStagesResponsePrivate::parseListStagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
