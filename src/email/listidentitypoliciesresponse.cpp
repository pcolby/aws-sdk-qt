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

#include "listidentitypoliciesresponse.h"
#include "listidentitypoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  ListIdentityPoliciesResponse
 *
 * @brief  Handles SES ListIdentityPolicies responses.
 *
 * @see    SESClient::listIdentityPolicies
 */

/**
 * @brief  Constructs a new ListIdentityPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIdentityPoliciesResponse::ListIdentityPoliciesResponse(
        const ListIdentityPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new ListIdentityPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListIdentityPoliciesRequest(request));
    setReply(reply);
}

const ListIdentityPoliciesRequest * ListIdentityPoliciesResponse::request() const
{
    Q_D(const ListIdentityPoliciesResponse);
    return static_cast<const ListIdentityPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a SES ListIdentityPolicies response.
 *
 * @param  response  Response to parse.
 */
void ListIdentityPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListIdentityPoliciesResponsePrivate
 *
 * @brief  Private implementation for ListIdentityPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIdentityPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListIdentityPoliciesResponse instance.
 */
ListIdentityPoliciesResponsePrivate::ListIdentityPoliciesResponsePrivate(
    ListIdentityPoliciesQueueResponse * const q) : ListIdentityPoliciesPrivate(q)
{

}

/**
 * @brief  Parse an SES ListIdentityPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListIdentityPoliciesResponsePrivate::ListIdentityPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIdentityPoliciesResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
