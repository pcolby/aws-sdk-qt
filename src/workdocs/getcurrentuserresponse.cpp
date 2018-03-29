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

#include "getcurrentuserresponse.h"
#include "getcurrentuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  GetCurrentUserResponse
 *
 * @brief  Handles WorkDocs GetCurrentUser responses.
 *
 * @see    WorkDocsClient::getCurrentUser
 */

/**
 * @brief  Constructs a new GetCurrentUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCurrentUserResponse::GetCurrentUserResponse(
        const GetCurrentUserRequest &request,
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
    Q_D(GetCurrentUserResponse);
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
    GetCurrentUserResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs GetCurrentUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCurrentUserResponsePrivate::parseGetCurrentUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCurrentUserResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
