// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsnapshotresponse.h"
#include "getsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetSnapshotResponse
 * \brief The GetSnapshotResponse class provides an interace for GameSparks GetSnapshot responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getSnapshot
 */

/*!
 * Constructs a GetSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
GetSnapshotResponse::GetSnapshotResponse(
        const GetSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetSnapshotResponsePrivate(this), parent)
{
    setRequest(new GetSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSnapshotRequest * GetSnapshotResponse::request() const
{
    Q_D(const GetSnapshotResponse);
    return static_cast<const GetSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetSnapshot \a response.
 */
void GetSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetSnapshotResponsePrivate
 * \brief The GetSnapshotResponsePrivate class provides private implementation for GetSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetSnapshotResponsePrivate object with public implementation \a q.
 */
GetSnapshotResponsePrivate::GetSnapshotResponsePrivate(
    GetSnapshotResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetSnapshot response element from \a xml.
 */
void GetSnapshotResponsePrivate::parseGetSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
