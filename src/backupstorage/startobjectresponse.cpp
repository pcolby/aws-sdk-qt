// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startobjectresponse.h"
#include "startobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::StartObjectResponse
 * \brief The StartObjectResponse class provides an interace for BackupStorage StartObject responses.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::startObject
 */

/*!
 * Constructs a StartObjectResponse object for \a reply to \a request, with parent \a parent.
 */
StartObjectResponse::StartObjectResponse(
        const StartObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupStorageResponse(new StartObjectResponsePrivate(this), parent)
{
    setRequest(new StartObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartObjectRequest * StartObjectResponse::request() const
{
    Q_D(const StartObjectResponse);
    return static_cast<const StartObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupStorage StartObject \a response.
 */
void StartObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupStorage::StartObjectResponsePrivate
 * \brief The StartObjectResponsePrivate class provides private implementation for StartObjectResponse.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a StartObjectResponsePrivate object with public implementation \a q.
 */
StartObjectResponsePrivate::StartObjectResponsePrivate(
    StartObjectResponse * const q) : BackupStorageResponsePrivate(q)
{

}

/*!
 * Parses a BackupStorage StartObject response element from \a xml.
 */
void StartObjectResponsePrivate::parseStartObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupStorage
} // namespace QtAws
