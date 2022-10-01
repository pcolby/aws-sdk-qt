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

#include "getobjectmetadataresponse.h"
#include "getobjectmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::GetObjectMetadataResponse
 * \brief The GetObjectMetadataResponse class provides an interace for BackupStorage GetObjectMetadata responses.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::getObjectMetadata
 */

/*!
 * Constructs a GetObjectMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
GetObjectMetadataResponse::GetObjectMetadataResponse(
        const GetObjectMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupStorageResponse(new GetObjectMetadataResponsePrivate(this), parent)
{
    setRequest(new GetObjectMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetObjectMetadataRequest * GetObjectMetadataResponse::request() const
{
    Q_D(const GetObjectMetadataResponse);
    return static_cast<const GetObjectMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupStorage GetObjectMetadata \a response.
 */
void GetObjectMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetObjectMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupStorage::GetObjectMetadataResponsePrivate
 * \brief The GetObjectMetadataResponsePrivate class provides private implementation for GetObjectMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a GetObjectMetadataResponsePrivate object with public implementation \a q.
 */
GetObjectMetadataResponsePrivate::GetObjectMetadataResponsePrivate(
    GetObjectMetadataResponse * const q) : BackupStorageResponsePrivate(q)
{

}

/*!
 * Parses a BackupStorage GetObjectMetadata response element from \a xml.
 */
void GetObjectMetadataResponsePrivate::parseGetObjectMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupStorage
} // namespace QtAws
