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

#include "createaccountaliasresponse.h"
#include "createaccountaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  CreateAccountAliasResponse
 *
 * @brief  Handles IAM CreateAccountAlias responses.
 *
 * @see    IAMClient::createAccountAlias
 */

/**
 * @brief  Constructs a new CreateAccountAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAccountAliasResponse::CreateAccountAliasResponse(
        const CreateAccountAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new CreateAccountAliasResponsePrivate(this), parent)
{
    setRequest(new CreateAccountAliasRequest(request));
    setReply(reply);
}

const CreateAccountAliasRequest * CreateAccountAliasResponse::request() const
{
    Q_D(const CreateAccountAliasResponse);
    return static_cast<const CreateAccountAliasRequest *>(d->request);
}

/**
 * @brief  Parse a IAM CreateAccountAlias response.
 *
 * @param  response  Response to parse.
 */
void CreateAccountAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAccountAliasResponsePrivate
 *
 * @brief  Private implementation for CreateAccountAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAccountAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAccountAliasResponse instance.
 */
CreateAccountAliasResponsePrivate::CreateAccountAliasResponsePrivate(
    CreateAccountAliasQueueResponse * const q) : CreateAccountAliasPrivate(q)
{

}

/**
 * @brief  Parse an IAM CreateAccountAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAccountAliasResponsePrivate::CreateAccountAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccountAliasResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
