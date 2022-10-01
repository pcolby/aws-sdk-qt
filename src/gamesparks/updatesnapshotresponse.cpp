// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesnapshotresponse.h"
#include "updatesnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::UpdateSnapshotResponse
 * \brief The UpdateSnapshotResponse class provides an interace for GameSparks UpdateSnapshot responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::updateSnapshot
 */

/*!
 * Constructs a UpdateSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSnapshotResponse::UpdateSnapshotResponse(
        const UpdateSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new UpdateSnapshotResponsePrivate(this), parent)
{
    setRequest(new UpdateSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSnapshotRequest * UpdateSnapshotResponse::request() const
{
    Q_D(const UpdateSnapshotResponse);
    return static_cast<const UpdateSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks UpdateSnapshot \a response.
 */
void UpdateSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::UpdateSnapshotResponsePrivate
 * \brief The UpdateSnapshotResponsePrivate class provides private implementation for UpdateSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a UpdateSnapshotResponsePrivate object with public implementation \a q.
 */
UpdateSnapshotResponsePrivate::UpdateSnapshotResponsePrivate(
    UpdateSnapshotResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks UpdateSnapshot response element from \a xml.
 */
void UpdateSnapshotResponsePrivate::parseUpdateSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
