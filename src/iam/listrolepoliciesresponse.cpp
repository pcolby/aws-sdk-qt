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

#include "listrolepoliciesresponse.h"
#include "listrolepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  ListRolePoliciesResponse
 *
 * @brief  Handles IAM ListRolePolicies responses.
 *
 * @see    IAMClient::listRolePolicies
 */

/**
 * @brief  Constructs a new ListRolePoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRolePoliciesResponse::ListRolePoliciesResponse(
        const ListRolePoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListRolePoliciesResponsePrivate(this), parent)
{
    setRequest(new ListRolePoliciesRequest(request));
    setReply(reply);
}

const ListRolePoliciesRequest * ListRolePoliciesResponse::request() const
{
    Q_D(const ListRolePoliciesResponse);
    return static_cast<const ListRolePoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListRolePolicies response.
 *
 * @param  response  Response to parse.
 */
void ListRolePoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListRolePoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRolePoliciesResponsePrivate
 *
 * @brief  Private implementation for ListRolePoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRolePoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRolePoliciesResponse instance.
 */
ListRolePoliciesResponsePrivate::ListRolePoliciesResponsePrivate(
    ListRolePoliciesResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM ListRolePoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRolePoliciesResponsePrivate::ListRolePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRolePoliciesResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
