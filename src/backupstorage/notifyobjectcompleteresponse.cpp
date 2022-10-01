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
