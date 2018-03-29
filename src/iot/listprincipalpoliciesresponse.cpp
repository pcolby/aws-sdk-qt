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

#include "listprincipalpoliciesresponse.h"
#include "listprincipalpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  ListPrincipalPoliciesResponse
 *
 * @brief  Handles IoT ListPrincipalPolicies responses.
 *
 * @see    IoTClient::listPrincipalPolicies
 */

/**
 * @brief  Constructs a new ListPrincipalPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPrincipalPoliciesResponse::ListPrincipalPoliciesResponse(
        const ListPrincipalPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListPrincipalPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListPrincipalPoliciesRequest(request));
    setReply(reply);
}

const ListPrincipalPoliciesRequest * ListPrincipalPoliciesResponse::request() const
{
    Q_D(const ListPrincipalPoliciesResponse);
    return static_cast<const ListPrincipalPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListPrincipalPolicies response.
 *
 * @param  response  Response to parse.
 */
void ListPrincipalPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListPrincipalPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPrincipalPoliciesResponsePrivate
 *
 * @brief  Private implementation for ListPrincipalPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPrincipalPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPrincipalPoliciesResponse instance.
 */
ListPrincipalPoliciesResponsePrivate::ListPrincipalPoliciesResponsePrivate(
    ListPrincipalPoliciesResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT ListPrincipalPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPrincipalPoliciesResponsePrivate::ListPrincipalPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPrincipalPoliciesResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
