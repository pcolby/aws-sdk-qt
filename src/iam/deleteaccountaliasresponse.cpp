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

#include "deleteaccountaliasresponse.h"
#include "deleteaccountaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  DeleteAccountAliasResponse
 *
 * @brief  Handles IAM DeleteAccountAlias responses.
 *
 * @see    IAMClient::deleteAccountAlias
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAccountAliasResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteAccountAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteAccountAliasRequest(request));
    setReply(reply);
}

const DeleteAccountAliasRequest * DeleteAccountAliasResponse::request() const
{
    Q_D(const DeleteAccountAliasResponse);
    return static_cast<const DeleteAccountAliasRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteAccountAlias response.
 *
 * @param  response  Response to parse.
 */
void DeleteAccountAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAccountAliasResponsePrivate
 *
 * @brief  Private implementation for DeleteAccountAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAccountAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAccountAliasResponse instance.
 */
DeleteAccountAliasResponsePrivate::DeleteAccountAliasResponsePrivate(
    DeleteAccountAliasQueueResponse * const q) : DeleteAccountAliasPrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteAccountAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAccountAliasResponsePrivate::DeleteAccountAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccountAliasResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
