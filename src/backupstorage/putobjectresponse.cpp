// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putobjectresponse.h"
#include "putobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::PutObjectResponse
 * \brief The PutObjectResponse class provides an interace for BackupStorage PutObject responses.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::putObject
 */

/*!
 * Constructs a PutObjectResponse object for \a reply to \a request, with parent \a parent.
 */
PutObjectResponse::PutObjectResponse(
        const PutObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupStorageResponse(new PutObjectResponsePrivate(this), parent)
{
    setRequest(new PutObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutObjectRequest * PutObjectResponse::request() const
{
    Q_D(const PutObjectResponse);
    return static_cast<const PutObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupStorage PutObject \a response.
 */
void PutObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupStorage::PutObjectResponsePrivate
 * \brief The PutObjectResponsePrivate class provides private implementation for PutObjectResponse.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a PutObjectResponsePrivate object with public implementation \a q.
 */
PutObjectResponsePrivate::PutObjectResponsePrivate(
    PutObjectResponse * const q) : BackupStorageResponsePrivate(q)
{

}

/*!
 * Parses a BackupStorage PutObject response element from \a xml.
 */
void PutObjectResponsePrivate::parsePutObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupStorage
} // namespace QtAws
