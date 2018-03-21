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

#include "getpassworddataresponse.h"
#include "getpassworddataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  GetPasswordDataResponse
 *
 * @brief  Handles EC2 GetPasswordData responses.
 *
 * @see    EC2Client::getPasswordData
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPasswordDataResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new GetPasswordDataResponsePrivate(this), parent)
{
    setRequest(new GetPasswordDataRequest(request));
    setReply(reply);
}

const GetPasswordDataRequest * GetPasswordDataResponse::request() const
{
    Q_D(const GetPasswordDataResponse);
    return static_cast<const GetPasswordDataRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 GetPasswordData response.
 *
 * @param  response  Response to parse.
 */
void GetPasswordDataResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPasswordDataResponsePrivate
 *
 * @brief  Private implementation for GetPasswordDataResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPasswordDataResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPasswordDataResponse instance.
 */
GetPasswordDataResponsePrivate::GetPasswordDataResponsePrivate(
    GetPasswordDataQueueResponse * const q) : GetPasswordDataPrivate(q)
{

}

/**
 * @brief  Parse an EC2 GetPasswordDataResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPasswordDataResponsePrivate::GetPasswordDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPasswordDataResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
