/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
