// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchunksresponse.h"
#include "listchunksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::ListChunksResponse
 * \brief The ListChunksResponse class provides an interace for BackupStorage ListChunks responses.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::listChunks
 */

/*!
 * Constructs a ListChunksResponse object for \a reply to \a request, with parent \a parent.
 */
ListChunksResponse::ListChunksResponse(
        const ListChunksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupStorageResponse(new ListChunksResponsePrivate(this), parent)
{
    setRequest(new ListChunksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListChunksRequest * ListChunksResponse::request() const
{
    Q_D(const ListChunksResponse);
    return static_cast<const ListChunksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful BackupStorage ListChunks \a response.
 */
void ListChunksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListChunksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::BackupStorage::ListChunksResponsePrivate
 * \brief The ListChunksResponsePrivate class provides private implementation for ListChunksResponse.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a ListChunksResponsePrivate object with public implementation \a q.
 */
ListChunksResponsePrivate::ListChunksResponsePrivate(
    ListChunksResponse * const q) : BackupStorageResponsePrivate(q)
{

}

/*!
 * Parses a BackupStorage ListChunks response element from \a xml.
 */
void ListChunksResponsePrivate::parseListChunksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChunksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace BackupStorage
} // namespace QtAws
