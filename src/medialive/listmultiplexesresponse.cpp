// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmultiplexesresponse.h"
#include "listmultiplexesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListMultiplexesResponse
 * \brief The ListMultiplexesResponse class provides an interace for MediaLive ListMultiplexes responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listMultiplexes
 */

/*!
 * Constructs a ListMultiplexesResponse object for \a reply to \a request, with parent \a parent.
 */
ListMultiplexesResponse::ListMultiplexesResponse(
        const ListMultiplexesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListMultiplexesResponsePrivate(this), parent)
{
    setRequest(new ListMultiplexesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMultiplexesRequest * ListMultiplexesResponse::request() const
{
    Q_D(const ListMultiplexesResponse);
    return static_cast<const ListMultiplexesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ListMultiplexes \a response.
 */
void ListMultiplexesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMultiplexesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ListMultiplexesResponsePrivate
 * \brief The ListMultiplexesResponsePrivate class provides private implementation for ListMultiplexesResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListMultiplexesResponsePrivate object with public implementation \a q.
 */
ListMultiplexesResponsePrivate::ListMultiplexesResponsePrivate(
    ListMultiplexesResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ListMultiplexes response element from \a xml.
 */
void ListMultiplexesResponsePrivate::parseListMultiplexesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMultiplexesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
