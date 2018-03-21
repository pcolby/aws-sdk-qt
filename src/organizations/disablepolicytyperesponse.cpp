/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disablepolicytyperesponse.h"
#include "disablepolicytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  DisablePolicyTypeResponse
 *
 * @brief  Handles Organizations DisablePolicyType responses.
 *
 * @see    OrganizationsClient::disablePolicyType
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisablePolicyTypeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new DisablePolicyTypeResponsePrivate(this), parent)
{
    setRequest(new DisablePolicyTypeRequest(request));
    setReply(reply);
}

const DisablePolicyTypeRequest * DisablePolicyTypeResponse::request() const
{
    Q_D(const DisablePolicyTypeResponse);
    return static_cast<const DisablePolicyTypeRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations DisablePolicyType response.
 *
 * @param  response  Response to parse.
 */
void DisablePolicyTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisablePolicyTypeResponsePrivate
 *
 * @brief  Private implementation for DisablePolicyTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisablePolicyTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisablePolicyTypeResponse instance.
 */
DisablePolicyTypeResponsePrivate::DisablePolicyTypeResponsePrivate(
    DisablePolicyTypeQueueResponse * const q) : DisablePolicyTypePrivate(q)
{

}

/**
 * @brief  Parse an Organizations DisablePolicyTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisablePolicyTypeResponsePrivate::DisablePolicyTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisablePolicyTypeResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
