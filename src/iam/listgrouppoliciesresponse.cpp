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

#include "listgrouppoliciesresponse.h"
#include "listgrouppoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  ListGroupPoliciesResponse
 *
 * @brief  Handles IAM ListGroupPolicies responses.
 *
 * @see    IAMClient::listGroupPolicies
 */

/**
 * @brief  Constructs a new ListGroupPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGroupPoliciesResponse::ListGroupPoliciesResponse(
        const ListGroupPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListGroupPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListGroupPoliciesRequest(request));
    setReply(reply);
}

const ListGroupPoliciesRequest * ListGroupPoliciesResponse::request() const
{
    Q_D(const ListGroupPoliciesResponse);
    return static_cast<const ListGroupPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListGroupPolicies response.
 *
 * @param  response  Response to parse.
 */
void ListGroupPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGroupPoliciesResponsePrivate
 *
 * @brief  Private implementation for ListGroupPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGroupPoliciesResponse instance.
 */
ListGroupPoliciesResponsePrivate::ListGroupPoliciesResponsePrivate(
    ListGroupPoliciesQueueResponse * const q) : ListGroupPoliciesPrivate(q)
{

}

/**
 * @brief  Parse an IAM ListGroupPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGroupPoliciesResponsePrivate::ListGroupPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupPoliciesResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
