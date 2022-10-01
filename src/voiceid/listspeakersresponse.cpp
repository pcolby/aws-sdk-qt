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

#include "listspeakersresponse.h"
#include "listspeakersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::ListSpeakersResponse
 * \brief The ListSpeakersResponse class provides an interace for VoiceId ListSpeakers responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::listSpeakers
 */

/*!
 * Constructs a ListSpeakersResponse object for \a reply to \a request, with parent \a parent.
 */
ListSpeakersResponse::ListSpeakersResponse(
        const ListSpeakersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new ListSpeakersResponsePrivate(this), parent)
{
    setRequest(new ListSpeakersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSpeakersRequest * ListSpeakersResponse::request() const
{
    Q_D(const ListSpeakersResponse);
    return static_cast<const ListSpeakersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId ListSpeakers \a response.
 */
void ListSpeakersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSpeakersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::ListSpeakersResponsePrivate
 * \brief The ListSpeakersResponsePrivate class provides private implementation for ListSpeakersResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a ListSpeakersResponsePrivate object with public implementation \a q.
 */
ListSpeakersResponsePrivate::ListSpeakersResponsePrivate(
    ListSpeakersResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId ListSpeakers response element from \a xml.
 */
void ListSpeakersResponsePrivate::parseListSpeakersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSpeakersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
