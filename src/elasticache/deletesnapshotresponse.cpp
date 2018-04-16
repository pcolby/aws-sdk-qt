/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletesnapshotresponse.h"
#include "deletesnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DeleteSnapshotResponse
 *
 * \brief The DeleteSnapshotResponse class provides an interace for ElastiCache DeleteSnapshot responses.
 *
 * \ingroup ElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::deleteSnapshot
 */

/*!
 * @brief  Constructs a new DeleteSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSnapshotResponse::DeleteSnapshotResponse(
        const DeleteSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DeleteSnapshotResponsePrivate(this), parent)
{
    setRequest(new DeleteSnapshotRequest(request));
    setReply(reply);
}

const DeleteSnapshotRequest * DeleteSnapshotResponse::request() const
{
    Q_D(const DeleteSnapshotResponse);
    return static_cast<const DeleteSnapshotRequest *>(d->request);
}

/*!
 * @brief  Parse a ElastiCache DeleteSnapshot response.
 *
 * @param  response  Response to parse.
 */
void DeleteSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteSnapshotResponsePrivate
 *
 * \brief Private implementation for DeleteSnapshotResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSnapshotResponse instance.
 */
DeleteSnapshotResponsePrivate::DeleteSnapshotResponsePrivate(
    DeleteSnapshotResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ElastiCache DeleteSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSnapshotResponsePrivate::parseDeleteSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSnapshotResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
