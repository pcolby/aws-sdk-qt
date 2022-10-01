// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "notifyobjectcompleteresponse.h"
#include "notifyobjectcompleteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::NotifyObjectCompleteResponse
 * \brief The NotifyObjectCompleteResponse class provides an interace for BackupStorage NotifyObjectComplete responses.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::notifyObjectComplete
 */

/*!
 * Constructs a NotifyObjectCompleteResponse object for \a reply to \a request, with parent \a parent.
 */
NotifyObjectCompleteResponse::NotifyObjectCompleteResponse(
        const NotifyObjectCompleteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupStorageResponse(new NotifyObjectCompleteResponsePrivate(this), parent)
{
    setRequest(new NotifyObjectCompleteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const NotifyObjectCompleteRequest * NotifyObjectCompleteResponse::request() const
{
    Q_D(const NotifyObjectCompleteResponse);
    return static_cast<const NotifyObjectCompleteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupStorage NotifyObjectComplete \a response.
 */
void NotifyObjectCompleteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(NotifyObjectCompleteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupStorage::NotifyObjectCompleteResponsePrivate
 * \brief The NotifyObjectCompleteResponsePrivate class provides private implementation for NotifyObjectCompleteResponse.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a NotifyObjectCompleteResponsePrivate object with public implementation \a q.
 */
NotifyObjectCompleteResponsePrivate::NotifyObjectCompleteResponsePrivate(
    NotifyObjectCompleteResponse * const q) : BackupStorageResponsePrivate(q)
{

}

/*!
 * Parses a BackupStorage NotifyObjectComplete response element from \a xml.
 */
void NotifyObjectCompleteResponsePrivate::parseNotifyObjectCompleteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("NotifyObjectCompleteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupStorage
} // namespace QtAws
