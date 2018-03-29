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

#include "listattachedpoliciesresponse.h"
#include "listattachedpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  ListAttachedPoliciesResponse
 *
 * @brief  Handles IoT ListAttachedPolicies responses.
 *
 * @see    IoTClient::listAttachedPolicies
 */

/**
 * @brief  Constructs a new ListAttachedPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAttachedPoliciesResponse::ListAttachedPoliciesResponse(
        const ListAttachedPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListAttachedPoliciesResponse(new ListAttachedPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListAttachedPoliciesRequest(request));
    setReply(reply);
}

const ListAttachedPoliciesRequest * ListAttachedPoliciesResponse::request() const
{
    Q_D(const ListAttachedPoliciesResponse);
    return static_cast<const ListAttachedPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListAttachedPolicies response.
 *
 * @param  response  Response to parse.
 */
void ListAttachedPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAttachedPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAttachedPoliciesResponsePrivate
 *
 * @brief  Private implementation for ListAttachedPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAttachedPoliciesResponse instance.
 */
ListAttachedPoliciesResponsePrivate::ListAttachedPoliciesResponsePrivate(
    ListAttachedPoliciesResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT ListAttachedPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAttachedPoliciesResponsePrivate::parseListAttachedPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttachedPoliciesResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
