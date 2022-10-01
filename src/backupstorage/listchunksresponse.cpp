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
