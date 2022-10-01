// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteobjectresponse.h"
#include "deleteobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::DeleteObjectResponse
 * \brief The DeleteObjectResponse class provides an interace for BackupStorage DeleteObject responses.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::deleteObject
 */

/*!
 * Constructs a DeleteObjectResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteObjectResponse::DeleteObjectResponse(
        const DeleteObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupStorageResponse(new DeleteObjectResponsePrivate(this), parent)
{
    setRequest(new DeleteObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteObjectRequest * DeleteObjectResponse::request() const
{
    Q_D(const DeleteObjectResponse);
    return static_cast<const DeleteObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupStorage DeleteObject \a response.
 */
void DeleteObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupStorage::DeleteObjectResponsePrivate
 * \brief The DeleteObjectResponsePrivate class provides private implementation for DeleteObjectResponse.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a DeleteObjectResponsePrivate object with public implementation \a q.
 */
DeleteObjectResponsePrivate::DeleteObjectResponsePrivate(
    DeleteObjectResponse * const q) : BackupStorageResponsePrivate(q)
{

}

/*!
 * Parses a BackupStorage DeleteObject response element from \a xml.
 */
void DeleteObjectResponsePrivate::parseDeleteObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupStorage
} // namespace QtAws
