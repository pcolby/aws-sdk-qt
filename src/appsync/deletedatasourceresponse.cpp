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

#include "deletedatasourceresponse.h"
#include "deletedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/**
 * @class  DeleteDataSourceResponse
 *
 * @brief  Handles AppSync DeleteDataSource responses.
 *
 * @see    AppSyncClient::deleteDataSource
 */

/**
 * @brief  Constructs a new DeleteDataSourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDataSourceResponse::DeleteDataSourceResponse(
        const DeleteDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteDataSourceResponsePrivate(this), parent)
{
    setRequest(new DeleteDataSourceRequest(request));
    setReply(reply);
}

const DeleteDataSourceRequest * DeleteDataSourceResponse::request() const
{
    Q_D(const DeleteDataSourceResponse);
    return static_cast<const DeleteDataSourceRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync DeleteDataSource response.
 *
 * @param  response  Response to parse.
 */
void DeleteDataSourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDataSourceResponsePrivate
 *
 * @brief  Private implementation for DeleteDataSourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDataSourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDataSourceResponse instance.
 */
DeleteDataSourceResponsePrivate::DeleteDataSourceResponsePrivate(
    DeleteDataSourceQueueResponse * const q) : DeleteDataSourcePrivate(q)
{

}

/**
 * @brief  Parse an AppSync DeleteDataSourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDataSourceResponsePrivate::DeleteDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataSourceResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
