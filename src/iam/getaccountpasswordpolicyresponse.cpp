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

#include "getaccountpasswordpolicyresponse.h"
#include "getaccountpasswordpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  GetAccountPasswordPolicyResponse
 *
 * @brief  Handles IAM GetAccountPasswordPolicy responses.
 *
 * @see    IAMClient::getAccountPasswordPolicy
 */

/**
 * @brief  Constructs a new GetAccountPasswordPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAccountPasswordPolicyResponse::GetAccountPasswordPolicyResponse(
        const GetAccountPasswordPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetAccountPasswordPolicyResponsePrivate(this), parent)
{
    setRequest(new GetAccountPasswordPolicyRequest(request));
    setReply(reply);
}

const GetAccountPasswordPolicyRequest * GetAccountPasswordPolicyResponse::request() const
{
    Q_D(const GetAccountPasswordPolicyResponse);
    return static_cast<const GetAccountPasswordPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetAccountPasswordPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetAccountPasswordPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAccountPasswordPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAccountPasswordPolicyResponsePrivate
 *
 * @brief  Private implementation for GetAccountPasswordPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountPasswordPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAccountPasswordPolicyResponse instance.
 */
GetAccountPasswordPolicyResponsePrivate::GetAccountPasswordPolicyResponsePrivate(
    GetAccountPasswordPolicyResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM GetAccountPasswordPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAccountPasswordPolicyResponsePrivate::GetAccountPasswordPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountPasswordPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
