// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
