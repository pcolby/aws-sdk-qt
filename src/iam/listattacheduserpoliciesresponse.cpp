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

#include "listattacheduserpoliciesresponse.h"
#include "listattacheduserpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  ListAttachedUserPoliciesResponse
 *
 * @brief  Handles IAM ListAttachedUserPolicies responses.
 *
 * @see    IAMClient::listAttachedUserPolicies
 */

/**
 * @brief  Constructs a new ListAttachedUserPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAttachedUserPoliciesResponse::ListAttachedUserPoliciesResponse(
        const ListAttachedUserPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListAttachedUserPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListAttachedUserPoliciesRequest(request));
    setReply(reply);
}

const ListAttachedUserPoliciesRequest * ListAttachedUserPoliciesResponse::request() const
{
    Q_D(const ListAttachedUserPoliciesResponse);
    return static_cast<const ListAttachedUserPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListAttachedUserPolicies response.
 *
 * @param  response  Response to parse.
 */
void ListAttachedUserPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAttachedUserPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAttachedUserPoliciesResponsePrivate
 *
 * @brief  Private implementation for ListAttachedUserPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedUserPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAttachedUserPoliciesResponse instance.
 */
ListAttachedUserPoliciesResponsePrivate::ListAttachedUserPoliciesResponsePrivate(
    ListAttachedUserPoliciesResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM ListAttachedUserPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAttachedUserPoliciesResponsePrivate::parseListAttachedUserPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttachedUserPoliciesResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
