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

#include "getinstanceprofileresponse.h"
#include "getinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  GetInstanceProfileResponse
 *
 * @brief  Handles IAM GetInstanceProfile responses.
 *
 * @see    IAMClient::getInstanceProfile
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstanceProfileResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new GetInstanceProfileRequest(request));
    setReply(reply);
}

const GetInstanceProfileRequest * GetInstanceProfileResponse::request() const
{
    Q_D(const GetInstanceProfileResponse);
    return static_cast<const GetInstanceProfileRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetInstanceProfile response.
 *
 * @param  response  Response to parse.
 */
void GetInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetInstanceProfileResponsePrivate
 *
 * @brief  Private implementation for GetInstanceProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInstanceProfileResponse instance.
 */
GetInstanceProfileResponsePrivate::GetInstanceProfileResponsePrivate(
    GetInstanceProfileQueueResponse * const q) : GetInstanceProfilePrivate(q)
{

}

/**
 * @brief  Parse an IAM GetInstanceProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInstanceProfileResponsePrivate::GetInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstanceProfileResponse"));
    /// @todo
}
