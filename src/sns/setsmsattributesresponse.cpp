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

#include "setsmsattributesresponse.h"
#include "setsmsattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  SetSMSAttributesResponse
 *
 * @brief  Handles SNS SetSMSAttributes responses.
 *
 * @see    SNSClient::setSMSAttributes
 */

/**
 * @brief  Constructs a new SetSMSAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetSMSAttributesResponse::SetSMSAttributesResponse(
        const SetSMSAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new SetSMSAttributesResponsePrivate(this), parent)
{
    setRequest(new SetSMSAttributesRequest(request));
    setReply(reply);
}

const SetSMSAttributesRequest * SetSMSAttributesResponse::request() const
{
    Q_D(const SetSMSAttributesResponse);
    return static_cast<const SetSMSAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SNS SetSMSAttributes response.
 *
 * @param  response  Response to parse.
 */
void SetSMSAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetSMSAttributesResponsePrivate
 *
 * @brief  Private implementation for SetSMSAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetSMSAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetSMSAttributesResponse instance.
 */
SetSMSAttributesResponsePrivate::SetSMSAttributesResponsePrivate(
    SetSMSAttributesQueueResponse * const q) : SetSMSAttributesPrivate(q)
{

}

/**
 * @brief  Parse an SNS SetSMSAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetSMSAttributesResponsePrivate::SetSMSAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetSMSAttributesResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS
