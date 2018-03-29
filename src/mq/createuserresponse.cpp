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

#include "createuserresponse.h"
#include "createuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/**
 * @class  CreateUserResponse
 *
 * @brief  Handles MQ CreateUser responses.
 *
 * @see    MQClient::createUser
 */

/**
 * @brief  Constructs a new CreateUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUserResponse::CreateUserResponse(
        const CreateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MQResponse(new CreateUserResponsePrivate(this), parent)
{
    setRequest(new CreateUserRequest(request));
    setReply(reply);
}

const CreateUserRequest * CreateUserResponse::request() const
{
    Q_D(const CreateUserResponse);
    return static_cast<const CreateUserRequest *>(d->request);
}

/**
 * @brief  Parse a MQ CreateUser response.
 *
 * @param  response  Response to parse.
 */
void CreateUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateUserResponsePrivate
 *
 * @brief  Private implementation for CreateUserResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateUserResponse instance.
 */
CreateUserResponsePrivate::CreateUserResponsePrivate(
    CreateUserResponse * const q) : MQResponsePrivate(q)
{

}

/**
 * @brief  Parse an MQ CreateUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateUserResponsePrivate::CreateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
