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

#include "assumeroleresponse.h"
#include "assumeroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace STS {

/**
 * @class  AssumeRoleResponse
 *
 * @brief  Handles STS AssumeRole responses.
 *
 * @see    STSClient::assumeRole
 */

/**
 * @brief  Constructs a new AssumeRoleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssumeRoleResponse::AssumeRoleResponse(
        const AssumeRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : STSResponse(new AssumeRoleResponsePrivate(this), parent)
{
    setRequest(new AssumeRoleRequest(request));
    setReply(reply);
}

const AssumeRoleRequest * AssumeRoleResponse::request() const
{
    Q_D(const AssumeRoleResponse);
    return static_cast<const AssumeRoleRequest *>(d->request);
}

/**
 * @brief  Parse a STS AssumeRole response.
 *
 * @param  response  Response to parse.
 */
void AssumeRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssumeRoleResponsePrivate
 *
 * @brief  Private implementation for AssumeRoleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssumeRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssumeRoleResponse instance.
 */
AssumeRoleResponsePrivate::AssumeRoleResponsePrivate(
    AssumeRoleQueueResponse * const q) : AssumeRolePrivate(q)
{

}

/**
 * @brief  Parse an STS AssumeRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssumeRoleResponsePrivate::AssumeRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssumeRoleResponse"));
    /// @todo
}

} // namespace STS
} // namespace AWS
