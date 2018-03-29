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

#include "createprofileresponse.h"
#include "createprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  CreateProfileResponse
 *
 * @brief  Handles AlexaForBusiness CreateProfile responses.
 *
 * @see    AlexaForBusinessClient::createProfile
 */

/**
 * @brief  Constructs a new CreateProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateProfileResponse::CreateProfileResponse(
        const CreateProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new CreateProfileResponsePrivate(this), parent)
{
    setRequest(new CreateProfileRequest(request));
    setReply(reply);
}

const CreateProfileRequest * CreateProfileResponse::request() const
{
    Q_D(const CreateProfileResponse);
    return static_cast<const CreateProfileRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness CreateProfile response.
 *
 * @param  response  Response to parse.
 */
void CreateProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateProfileResponsePrivate
 *
 * @brief  Private implementation for CreateProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateProfileResponse instance.
 */
CreateProfileResponsePrivate::CreateProfileResponsePrivate(
    CreateProfileQueueResponse * const q) : CreateProfilePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness CreateProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateProfileResponsePrivate::CreateProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProfileResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace AWS
