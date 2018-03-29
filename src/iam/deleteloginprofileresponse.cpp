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

#include "deleteloginprofileresponse.h"
#include "deleteloginprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteLoginProfileResponse
 *
 * @brief  Handles IAM DeleteLoginProfile responses.
 *
 * @see    IAMClient::deleteLoginProfile
 */

/**
 * @brief  Constructs a new DeleteLoginProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLoginProfileResponse::DeleteLoginProfileResponse(
        const DeleteLoginProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteLoginProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteLoginProfileRequest(request));
    setReply(reply);
}

const DeleteLoginProfileRequest * DeleteLoginProfileResponse::request() const
{
    Q_D(const DeleteLoginProfileResponse);
    return static_cast<const DeleteLoginProfileRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteLoginProfile response.
 *
 * @param  response  Response to parse.
 */
void DeleteLoginProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteLoginProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLoginProfileResponsePrivate
 *
 * @brief  Private implementation for DeleteLoginProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoginProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLoginProfileResponse instance.
 */
DeleteLoginProfileResponsePrivate::DeleteLoginProfileResponsePrivate(
    DeleteLoginProfileResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteLoginProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLoginProfileResponsePrivate::parseDeleteLoginProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLoginProfileResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
