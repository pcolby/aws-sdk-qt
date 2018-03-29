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

#include "updatewebaclresponse.h"
#include "updatewebaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  UpdateWebACLResponse
 *
 * @brief  Handles WAF UpdateWebACL responses.
 *
 * @see    WAFClient::updateWebACL
 */

/**
 * @brief  Constructs a new UpdateWebACLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateWebACLResponse::UpdateWebACLResponse(
        const UpdateWebACLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new UpdateWebACLResponsePrivate(this), parent)
{
    setRequest(new UpdateWebACLRequest(request));
    setReply(reply);
}

const UpdateWebACLRequest * UpdateWebACLResponse::request() const
{
    Q_D(const UpdateWebACLResponse);
    return static_cast<const UpdateWebACLRequest *>(d->request);
}

/**
 * @brief  Parse a WAF UpdateWebACL response.
 *
 * @param  response  Response to parse.
 */
void UpdateWebACLResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateWebACLResponsePrivate
 *
 * @brief  Private implementation for UpdateWebACLResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateWebACLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateWebACLResponse instance.
 */
UpdateWebACLResponsePrivate::UpdateWebACLResponsePrivate(
    UpdateWebACLQueueResponse * const q) : UpdateWebACLPrivate(q)
{

}

/**
 * @brief  Parse an WAF UpdateWebACLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateWebACLResponsePrivate::UpdateWebACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWebACLResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
