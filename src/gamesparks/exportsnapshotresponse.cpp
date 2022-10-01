// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportsnapshotresponse.h"
#include "exportsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ExportSnapshotResponse
 * \brief The ExportSnapshotResponse class provides an interace for GameSparks ExportSnapshot responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::exportSnapshot
 */

/*!
 * Constructs a ExportSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
ExportSnapshotResponse::ExportSnapshotResponse(
        const ExportSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ExportSnapshotResponsePrivate(this), parent)
{
    setRequest(new ExportSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportSnapshotRequest * ExportSnapshotResponse::request() const
{
    Q_D(const ExportSnapshotResponse);
    return static_cast<const ExportSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ExportSnapshot \a response.
 */
void ExportSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ExportSnapshotResponsePrivate
 * \brief The ExportSnapshotResponsePrivate class provides private implementation for ExportSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ExportSnapshotResponsePrivate object with public implementation \a q.
 */
ExportSnapshotResponsePrivate::ExportSnapshotResponsePrivate(
    ExportSnapshotResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ExportSnapshot response element from \a xml.
 */
void ExportSnapshotResponsePrivate::parseExportSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
