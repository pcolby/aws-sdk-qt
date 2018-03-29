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

#include "deletewebaclresponse.h"
#include "deletewebaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  DeleteWebACLResponse
 *
 * @brief  Handles WAF DeleteWebACL responses.
 *
 * @see    WAFClient::deleteWebACL
 */

/**
 * @brief  Constructs a new DeleteWebACLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteWebACLResponse::DeleteWebACLResponse(
        const DeleteWebACLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new DeleteWebACLResponsePrivate(this), parent)
{
    setRequest(new DeleteWebACLRequest(request));
    setReply(reply);
}

const DeleteWebACLRequest * DeleteWebACLResponse::request() const
{
    Q_D(const DeleteWebACLResponse);
    return static_cast<const DeleteWebACLRequest *>(d->request);
}

/**
 * @brief  Parse a WAF DeleteWebACL response.
 *
 * @param  response  Response to parse.
 */
void DeleteWebACLResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteWebACLResponsePrivate
 *
 * @brief  Private implementation for DeleteWebACLResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteWebACLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteWebACLResponse instance.
 */
DeleteWebACLResponsePrivate::DeleteWebACLResponsePrivate(
    DeleteWebACLQueueResponse * const q) : DeleteWebACLPrivate(q)
{

}

/**
 * @brief  Parse an WAF DeleteWebACLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteWebACLResponsePrivate::DeleteWebACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWebACLResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
