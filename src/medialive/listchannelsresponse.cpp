// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelsresponse.h"
#include "listchannelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListChannelsResponse
 * \brief The ListChannelsResponse class provides an interace for MediaLive ListChannels responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listChannels
 */

/*!
 * Constructs a ListChannelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListChannelsResponse::ListChannelsResponse(
        const ListChannelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListChannelsResponsePrivate(this), parent)
{
    setRequest(new ListChannelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListChannelsRequest * ListChannelsResponse::request() const
{
    Q_D(const ListChannelsResponse);
    return static_cast<const ListChannelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ListChannels \a response.
 */
void ListChannelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListChannelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ListChannelsResponsePrivate
 * \brief The ListChannelsResponsePrivate class provides private implementation for ListChannelsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListChannelsResponsePrivate object with public implementation \a q.
 */
ListChannelsResponsePrivate::ListChannelsResponsePrivate(
    ListChannelsResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ListChannels response element from \a xml.
 */
void ListChannelsResponsePrivate::parseListChannelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChannelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
