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

#include "listuserpoliciesresponse.h"
#include "listuserpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  ListUserPoliciesResponse
 *
 * @brief  Handles IAM ListUserPolicies responses.
 *
 * @see    IAMClient::listUserPolicies
 */

/**
 * @brief  Constructs a new ListUserPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUserPoliciesResponse::ListUserPoliciesResponse(
        const ListUserPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListUserPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListUserPoliciesRequest(request));
    setReply(reply);
}

const ListUserPoliciesRequest * ListUserPoliciesResponse::request() const
{
    Q_D(const ListUserPoliciesResponse);
    return static_cast<const ListUserPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListUserPolicies response.
 *
 * @param  response  Response to parse.
 */
void ListUserPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListUserPoliciesResponsePrivate
 *
 * @brief  Private implementation for ListUserPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUserPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListUserPoliciesResponse instance.
 */
ListUserPoliciesResponsePrivate::ListUserPoliciesResponsePrivate(
    ListUserPoliciesQueueResponse * const q) : ListUserPoliciesPrivate(q)
{

}

/**
 * @brief  Parse an IAM ListUserPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListUserPoliciesResponsePrivate::ListUserPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserPoliciesResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
