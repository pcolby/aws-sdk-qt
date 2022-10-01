// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchunkresponse.h"
#include "getchunkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::GetChunkResponse
 * \brief The GetChunkResponse class provides an interace for BackupStorage GetChunk responses.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::getChunk
 */

/*!
 * Constructs a GetChunkResponse object for \a reply to \a request, with parent \a parent.
 */
GetChunkResponse::GetChunkResponse(
        const GetChunkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupStorageResponse(new GetChunkResponsePrivate(this), parent)
{
    setRequest(new GetChunkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetChunkRequest * GetChunkResponse::request() const
{
    Q_D(const GetChunkResponse);
    return static_cast<const GetChunkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupStorage GetChunk \a response.
 */
void GetChunkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetChunkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupStorage::GetChunkResponsePrivate
 * \brief The GetChunkResponsePrivate class provides private implementation for GetChunkResponse.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a GetChunkResponsePrivate object with public implementation \a q.
 */
GetChunkResponsePrivate::GetChunkResponsePrivate(
    GetChunkResponse * const q) : BackupStorageResponsePrivate(q)
{

}

/*!
 * Parses a BackupStorage GetChunk response element from \a xml.
 */
void GetChunkResponsePrivate::parseGetChunkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChunkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupStorage
} // namespace QtAws
