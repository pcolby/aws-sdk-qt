// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putchunkresponse.h"
#include "putchunkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::PutChunkResponse
 * \brief The PutChunkResponse class provides an interace for BackupStorage PutChunk responses.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::putChunk
 */

/*!
 * Constructs a PutChunkResponse object for \a reply to \a request, with parent \a parent.
 */
PutChunkResponse::PutChunkResponse(
        const PutChunkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupStorageResponse(new PutChunkResponsePrivate(this), parent)
{
    setRequest(new PutChunkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutChunkRequest * PutChunkResponse::request() const
{
    Q_D(const PutChunkResponse);
    return static_cast<const PutChunkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupStorage PutChunk \a response.
 */
void PutChunkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutChunkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupStorage::PutChunkResponsePrivate
 * \brief The PutChunkResponsePrivate class provides private implementation for PutChunkResponse.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a PutChunkResponsePrivate object with public implementation \a q.
 */
PutChunkResponsePrivate::PutChunkResponsePrivate(
    PutChunkResponse * const q) : BackupStorageResponsePrivate(q)
{

}

/*!
 * Parses a BackupStorage PutChunk response element from \a xml.
 */
void PutChunkResponsePrivate::parsePutChunkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutChunkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupStorage
} // namespace QtAws
