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

#include "setendpointattributesresponse.h"
#include "setendpointattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/**
 * @class  SetEndpointAttributesResponse
 *
 * @brief  Handles SNS SetEndpointAttributes responses.
 *
 * @see    SNSClient::setEndpointAttributes
 */

/**
 * @brief  Constructs a new SetEndpointAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetEndpointAttributesResponse::SetEndpointAttributesResponse(
        const SetEndpointAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new SetEndpointAttributesResponsePrivate(this), parent)
{
    setRequest(new SetEndpointAttributesRequest(request));
    setReply(reply);
}

const SetEndpointAttributesRequest * SetEndpointAttributesResponse::request() const
{
    Q_D(const SetEndpointAttributesResponse);
    return static_cast<const SetEndpointAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SNS SetEndpointAttributes response.
 *
 * @param  response  Response to parse.
 */
void SetEndpointAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetEndpointAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetEndpointAttributesResponsePrivate
 *
 * @brief  Private implementation for SetEndpointAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetEndpointAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetEndpointAttributesResponse instance.
 */
SetEndpointAttributesResponsePrivate::SetEndpointAttributesResponsePrivate(
    SetEndpointAttributesResponse * const q) : SNSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SNS SetEndpointAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetEndpointAttributesResponsePrivate::SetEndpointAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetEndpointAttributesResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
