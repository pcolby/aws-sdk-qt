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

#include "createaccountresponse.h"
#include "createaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  CreateAccountResponse
 *
 * @brief  Handles Organizations CreateAccount responses.
 *
 * @see    OrganizationsClient::createAccount
 */

/**
 * @brief  Constructs a new CreateAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAccountResponse::CreateAccountResponse(
        const CreateAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new CreateAccountResponsePrivate(this), parent)
{
    setRequest(new CreateAccountRequest(request));
    setReply(reply);
}

const CreateAccountRequest * CreateAccountResponse::request() const
{
    Q_D(const CreateAccountResponse);
    return static_cast<const CreateAccountRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations CreateAccount response.
 *
 * @param  response  Response to parse.
 */
void CreateAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAccountResponsePrivate
 *
 * @brief  Private implementation for CreateAccountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAccountResponse instance.
 */
CreateAccountResponsePrivate::CreateAccountResponsePrivate(
    CreateAccountQueueResponse * const q) : CreateAccountPrivate(q)
{

}

/**
 * @brief  Parse an Organizations CreateAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAccountResponsePrivate::CreateAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccountResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
