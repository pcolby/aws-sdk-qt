// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
