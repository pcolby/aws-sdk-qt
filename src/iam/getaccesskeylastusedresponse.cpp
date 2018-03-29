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

#include "getaccesskeylastusedresponse.h"
#include "getaccesskeylastusedresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  GetAccessKeyLastUsedResponse
 *
 * @brief  Handles IAM GetAccessKeyLastUsed responses.
 *
 * @see    IAMClient::getAccessKeyLastUsed
 */

/**
 * @brief  Constructs a new GetAccessKeyLastUsedResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAccessKeyLastUsedResponse::GetAccessKeyLastUsedResponse(
        const GetAccessKeyLastUsedRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetAccessKeyLastUsedResponsePrivate(this), parent)
{
    setRequest(new GetAccessKeyLastUsedRequest(request));
    setReply(reply);
}

const GetAccessKeyLastUsedRequest * GetAccessKeyLastUsedResponse::request() const
{
    Q_D(const GetAccessKeyLastUsedResponse);
    return static_cast<const GetAccessKeyLastUsedRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetAccessKeyLastUsed response.
 *
 * @param  response  Response to parse.
 */
void GetAccessKeyLastUsedResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAccessKeyLastUsedResponsePrivate
 *
 * @brief  Private implementation for GetAccessKeyLastUsedResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccessKeyLastUsedResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAccessKeyLastUsedResponse instance.
 */
GetAccessKeyLastUsedResponsePrivate::GetAccessKeyLastUsedResponsePrivate(
    GetAccessKeyLastUsedQueueResponse * const q) : GetAccessKeyLastUsedPrivate(q)
{

}

/**
 * @brief  Parse an IAM GetAccessKeyLastUsedResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAccessKeyLastUsedResponsePrivate::GetAccessKeyLastUsedResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessKeyLastUsedResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
