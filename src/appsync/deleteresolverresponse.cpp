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

#include "deleteresolverresponse.h"
#include "deleteresolverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/**
 * @class  DeleteResolverResponse
 *
 * @brief  Handles AppSync DeleteResolver responses.
 *
 * @see    AppSyncClient::deleteResolver
 */

/**
 * @brief  Constructs a new DeleteResolverResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteResolverResponse::DeleteResolverResponse(
        const DeleteResolverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteResolverResponsePrivate(this), parent)
{
    setRequest(new DeleteResolverRequest(request));
    setReply(reply);
}

const DeleteResolverRequest * DeleteResolverResponse::request() const
{
    Q_D(const DeleteResolverResponse);
    return static_cast<const DeleteResolverRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync DeleteResolver response.
 *
 * @param  response  Response to parse.
 */
void DeleteResolverResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteResolverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteResolverResponsePrivate
 *
 * @brief  Private implementation for DeleteResolverResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResolverResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteResolverResponse instance.
 */
DeleteResolverResponsePrivate::DeleteResolverResponsePrivate(
    DeleteResolverResponse * const q) : AppSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppSync DeleteResolverResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteResolverResponsePrivate::DeleteResolverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResolverResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
