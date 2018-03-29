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

#include "deleteaccountpasswordpolicyresponse.h"
#include "deleteaccountpasswordpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteAccountPasswordPolicyResponse
 *
 * @brief  Handles IAM DeleteAccountPasswordPolicy responses.
 *
 * @see    IAMClient::deleteAccountPasswordPolicy
 */

/**
 * @brief  Constructs a new DeleteAccountPasswordPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAccountPasswordPolicyResponse::DeleteAccountPasswordPolicyResponse(
        const DeleteAccountPasswordPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteAccountPasswordPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteAccountPasswordPolicyRequest(request));
    setReply(reply);
}

const DeleteAccountPasswordPolicyRequest * DeleteAccountPasswordPolicyResponse::request() const
{
    Q_D(const DeleteAccountPasswordPolicyResponse);
    return static_cast<const DeleteAccountPasswordPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteAccountPasswordPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteAccountPasswordPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAccountPasswordPolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteAccountPasswordPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAccountPasswordPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAccountPasswordPolicyResponse instance.
 */
DeleteAccountPasswordPolicyResponsePrivate::DeleteAccountPasswordPolicyResponsePrivate(
    DeleteAccountPasswordPolicyResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteAccountPasswordPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAccountPasswordPolicyResponsePrivate::DeleteAccountPasswordPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccountPasswordPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
