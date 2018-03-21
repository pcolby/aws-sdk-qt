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

#include "deleteplatformapplicationresponse.h"
#include "deleteplatformapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  DeletePlatformApplicationResponse
 *
 * @brief  Handles SNS DeletePlatformApplication responses.
 *
 * @see    SNSClient::deletePlatformApplication
 */

/**
 * @brief  Constructs a new DeletePlatformApplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePlatformApplicationResponse::DeletePlatformApplicationResponse(
        const DeletePlatformApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new DeletePlatformApplicationResponsePrivate(this), parent)
{
    setRequest(new DeletePlatformApplicationRequest(request));
    setReply(reply);
}

const DeletePlatformApplicationRequest * DeletePlatformApplicationResponse::request() const
{
    Q_D(const DeletePlatformApplicationResponse);
    return static_cast<const DeletePlatformApplicationRequest *>(d->request);
}

/**
 * @brief  Parse a SNS DeletePlatformApplication response.
 *
 * @param  response  Response to parse.
 */
void DeletePlatformApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeletePlatformApplicationResponsePrivate
 *
 * @brief  Private implementation for DeletePlatformApplicationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePlatformApplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeletePlatformApplicationResponse instance.
 */
DeletePlatformApplicationResponsePrivate::DeletePlatformApplicationResponsePrivate(
    DeletePlatformApplicationQueueResponse * const q) : DeletePlatformApplicationPrivate(q)
{

}

/**
 * @brief  Parse an SNS DeletePlatformApplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeletePlatformApplicationResponsePrivate::DeletePlatformApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePlatformApplicationResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS
