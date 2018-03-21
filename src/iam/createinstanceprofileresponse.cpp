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

#include "createinstanceprofileresponse.h"
#include "createinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  CreateInstanceProfileResponse
 *
 * @brief  Handles IAM CreateInstanceProfile responses.
 *
 * @see    IAMClient::createInstanceProfile
 */

/**
 * @brief  Constructs a new CreateInstanceProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInstanceProfileResponse::CreateInstanceProfileResponse(
        const CreateInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new CreateInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new CreateInstanceProfileRequest(request));
    setReply(reply);
}

const CreateInstanceProfileRequest * CreateInstanceProfileResponse::request() const
{
    Q_D(const CreateInstanceProfileResponse);
    return static_cast<const CreateInstanceProfileRequest *>(d->request);
}

/**
 * @brief  Parse a IAM CreateInstanceProfile response.
 *
 * @param  response  Response to parse.
 */
void CreateInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateInstanceProfileResponsePrivate
 *
 * @brief  Private implementation for CreateInstanceProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInstanceProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateInstanceProfileResponse instance.
 */
CreateInstanceProfileResponsePrivate::CreateInstanceProfileResponsePrivate(
    CreateInstanceProfileQueueResponse * const q) : CreateInstanceProfilePrivate(q)
{

}

/**
 * @brief  Parse an IAM CreateInstanceProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateInstanceProfileResponsePrivate::CreateInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInstanceProfileResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
