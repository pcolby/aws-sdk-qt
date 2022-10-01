// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsnapshotsresponse.h"
#include "listsnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListSnapshotsResponse
 * \brief The ListSnapshotsResponse class provides an interace for GameSparks ListSnapshots responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listSnapshots
 */

/*!
 * Constructs a ListSnapshotsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSnapshotsResponse::ListSnapshotsResponse(
        const ListSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ListSnapshotsResponsePrivate(this), parent)
{
    setRequest(new ListSnapshotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSnapshotsRequest * ListSnapshotsResponse::request() const
{
    Q_D(const ListSnapshotsResponse);
    return static_cast<const ListSnapshotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ListSnapshots \a response.
 */
void ListSnapshotsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSnapshotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ListSnapshotsResponsePrivate
 * \brief The ListSnapshotsResponsePrivate class provides private implementation for ListSnapshotsResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListSnapshotsResponsePrivate object with public implementation \a q.
 */
ListSnapshotsResponsePrivate::ListSnapshotsResponsePrivate(
    ListSnapshotsResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ListSnapshots response element from \a xml.
 */
void ListSnapshotsResponsePrivate::parseListSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSnapshotsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
