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

#include "getcurrentuserresponse.h"
#include "getcurrentuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  GetCurrentUserResponse
 *
 * @brief  Handles WorkDocs GetCurrentUser responses.
 *
 * @see    WorkDocsClient::getCurrentUser
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCurrentUserResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new GetCurrentUserResponsePrivate(this), parent)
{
    setRequest(new GetCurrentUserRequest(request));
    setReply(reply);
}

const GetCurrentUserRequest * GetCurrentUserResponse::request() const
{
    Q_D(const GetCurrentUserResponse);
    return static_cast<const GetCurrentUserRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs GetCurrentUser response.
 *
 * @param  response  Response to parse.
 */
void GetCurrentUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCurrentUserResponsePrivate
 *
 * @brief  Private implementation for GetCurrentUserResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCurrentUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCurrentUserResponse instance.
 */
GetCurrentUserResponsePrivate::GetCurrentUserResponsePrivate(
    GetCurrentUserQueueResponse * const q) : GetCurrentUserPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs GetCurrentUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCurrentUserResponsePrivate::GetCurrentUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCurrentUserResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace AWS
