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

#include "createloginprofileresponse.h"
#include "createloginprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  CreateLoginProfileResponse
 *
 * @brief  Handles IAM CreateLoginProfile responses.
 *
 * @see    IAMClient::createLoginProfile
 */

/**
 * @brief  Constructs a new CreateLoginProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLoginProfileResponse::CreateLoginProfileResponse(
        const CreateLoginProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new CreateLoginProfileResponsePrivate(this), parent)
{
    setRequest(new CreateLoginProfileRequest(request));
    setReply(reply);
}

const CreateLoginProfileRequest * CreateLoginProfileResponse::request() const
{
    Q_D(const CreateLoginProfileResponse);
    return static_cast<const CreateLoginProfileRequest *>(d->request);
}

/**
 * @brief  Parse a IAM CreateLoginProfile response.
 *
 * @param  response  Response to parse.
 */
void CreateLoginProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLoginProfileResponsePrivate
 *
 * @brief  Private implementation for CreateLoginProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoginProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLoginProfileResponse instance.
 */
CreateLoginProfileResponsePrivate::CreateLoginProfileResponsePrivate(
    CreateLoginProfileQueueResponse * const q) : CreateLoginProfilePrivate(q)
{

}

/**
 * @brief  Parse an IAM CreateLoginProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLoginProfileResponsePrivate::CreateLoginProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLoginProfileResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
