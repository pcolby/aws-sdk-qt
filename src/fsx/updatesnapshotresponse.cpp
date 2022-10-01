// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesnapshotresponse.h"
#include "updatesnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::UpdateSnapshotResponse
 * \brief The UpdateSnapshotResponse class provides an interace for FSx UpdateSnapshot responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::updateSnapshot
 */

/*!
 * Constructs a UpdateSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSnapshotResponse::UpdateSnapshotResponse(
        const UpdateSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new UpdateSnapshotResponsePrivate(this), parent)
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
 * Parses a successful FSx UpdateSnapshot \a response.
 */
void UpdateSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::UpdateSnapshotResponsePrivate
 * \brief The UpdateSnapshotResponsePrivate class provides private implementation for UpdateSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a UpdateSnapshotResponsePrivate object with public implementation \a q.
 */
UpdateSnapshotResponsePrivate::UpdateSnapshotResponsePrivate(
    UpdateSnapshotResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx UpdateSnapshot response element from \a xml.
 */
void UpdateSnapshotResponsePrivate::parseUpdateSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
