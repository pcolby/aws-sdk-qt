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

#include "createservicespecificcredentialresponse.h"
#include "createservicespecificcredentialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  CreateServiceSpecificCredentialResponse
 *
 * @brief  Handles IAM CreateServiceSpecificCredential responses.
 *
 * @see    IAMClient::createServiceSpecificCredential
 */

/**
 * @brief  Constructs a new CreateServiceSpecificCredentialResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateServiceSpecificCredentialResponse::CreateServiceSpecificCredentialResponse(
        const CreateServiceSpecificCredentialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new CreateServiceSpecificCredentialResponsePrivate(this), parent)
{
    setRequest(new CreateServiceSpecificCredentialRequest(request));
    setReply(reply);
}

const CreateServiceSpecificCredentialRequest * CreateServiceSpecificCredentialResponse::request() const
{
    Q_D(const CreateServiceSpecificCredentialResponse);
    return static_cast<const CreateServiceSpecificCredentialRequest *>(d->request);
}

/**
 * @brief  Parse a IAM CreateServiceSpecificCredential response.
 *
 * @param  response  Response to parse.
 */
void CreateServiceSpecificCredentialResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateServiceSpecificCredentialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateServiceSpecificCredentialResponsePrivate
 *
 * @brief  Private implementation for CreateServiceSpecificCredentialResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateServiceSpecificCredentialResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateServiceSpecificCredentialResponse instance.
 */
CreateServiceSpecificCredentialResponsePrivate::CreateServiceSpecificCredentialResponsePrivate(
    CreateServiceSpecificCredentialResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM CreateServiceSpecificCredentialResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateServiceSpecificCredentialResponsePrivate::CreateServiceSpecificCredentialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateServiceSpecificCredentialResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
