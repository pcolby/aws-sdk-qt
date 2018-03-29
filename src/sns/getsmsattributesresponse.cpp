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

#include "getsmsattributesresponse.h"
#include "getsmsattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/**
 * @class  GetSMSAttributesResponse
 *
 * @brief  Handles SNS GetSMSAttributes responses.
 *
 * @see    SNSClient::getSMSAttributes
 */

/**
 * @brief  Constructs a new GetSMSAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSMSAttributesResponse::GetSMSAttributesResponse(
        const GetSMSAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new GetSMSAttributesResponsePrivate(this), parent)
{
    setRequest(new GetSMSAttributesRequest(request));
    setReply(reply);
}

const GetSMSAttributesRequest * GetSMSAttributesResponse::request() const
{
    Q_D(const GetSMSAttributesResponse);
    return static_cast<const GetSMSAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SNS GetSMSAttributes response.
 *
 * @param  response  Response to parse.
 */
void GetSMSAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSMSAttributesResponsePrivate
 *
 * @brief  Private implementation for GetSMSAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSMSAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSMSAttributesResponse instance.
 */
GetSMSAttributesResponsePrivate::GetSMSAttributesResponsePrivate(
    GetSMSAttributesResponse * const q) : SNSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SNS GetSMSAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSMSAttributesResponsePrivate::GetSMSAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSMSAttributesResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
