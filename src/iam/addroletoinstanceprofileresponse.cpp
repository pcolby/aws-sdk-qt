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

#include "addroletoinstanceprofileresponse.h"
#include "addroletoinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  AddRoleToInstanceProfileResponse
 *
 * @brief  Handles IAM AddRoleToInstanceProfile responses.
 *
 * @see    IAMClient::addRoleToInstanceProfile
 */

/**
 * @brief  Constructs a new AddRoleToInstanceProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddRoleToInstanceProfileResponse::AddRoleToInstanceProfileResponse(
        const AddRoleToInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new AddRoleToInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new AddRoleToInstanceProfileRequest(request));
    setReply(reply);
}

const AddRoleToInstanceProfileRequest * AddRoleToInstanceProfileResponse::request() const
{
    Q_D(const AddRoleToInstanceProfileResponse);
    return static_cast<const AddRoleToInstanceProfileRequest *>(d->request);
}

/**
 * @brief  Parse a IAM AddRoleToInstanceProfile response.
 *
 * @param  response  Response to parse.
 */
void AddRoleToInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddRoleToInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddRoleToInstanceProfileResponsePrivate
 *
 * @brief  Private implementation for AddRoleToInstanceProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddRoleToInstanceProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddRoleToInstanceProfileResponse instance.
 */
AddRoleToInstanceProfileResponsePrivate::AddRoleToInstanceProfileResponsePrivate(
    AddRoleToInstanceProfileResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM AddRoleToInstanceProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddRoleToInstanceProfileResponsePrivate::parseAddRoleToInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddRoleToInstanceProfileResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
