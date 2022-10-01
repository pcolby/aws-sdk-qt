// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listobjectsresponse.h"
#include "listobjectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::ListObjectsResponse
 * \brief The ListObjectsResponse class provides an interace for BackupStorage ListObjects responses.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::listObjects
 */

/*!
 * Constructs a ListObjectsResponse object for \a reply to \a request, with parent \a parent.
 */
ListObjectsResponse::ListObjectsResponse(
        const ListObjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupStorageResponse(new ListObjectsResponsePrivate(this), parent)
{
    setRequest(new ListObjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListObjectsRequest * ListObjectsResponse::request() const
{
    Q_D(const ListObjectsResponse);
    return static_cast<const ListObjectsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupStorage ListObjects \a response.
 */
void ListObjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListObjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupStorage::ListObjectsResponsePrivate
 * \brief The ListObjectsResponsePrivate class provides private implementation for ListObjectsResponse.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a ListObjectsResponsePrivate object with public implementation \a q.
 */
ListObjectsResponsePrivate::ListObjectsResponsePrivate(
    ListObjectsResponse * const q) : BackupStorageResponsePrivate(q)
{

}

/*!
 * Parses a BackupStorage ListObjects response element from \a xml.
 */
void ListObjectsResponsePrivate::parseListObjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupStorage
} // namespace QtAws
