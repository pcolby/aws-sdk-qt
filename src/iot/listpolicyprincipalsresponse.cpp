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

#include "listpolicyprincipalsresponse.h"
#include "listpolicyprincipalsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListPolicyPrincipalsResponse
 *
 * @brief  Handles IoT ListPolicyPrincipals responses.
 *
 * @see    IoTClient::listPolicyPrincipals
 */

/**
 * @brief  Constructs a new ListPolicyPrincipalsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPolicyPrincipalsResponse::ListPolicyPrincipalsResponse(
        const ListPolicyPrincipalsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListPolicyPrincipalsResponsePrivate(this), parent)
{
    setRequest(new ListPolicyPrincipalsRequest(request));
    setReply(reply);
}

const ListPolicyPrincipalsRequest * ListPolicyPrincipalsResponse::request() const
{
    Q_D(const ListPolicyPrincipalsResponse);
    return static_cast<const ListPolicyPrincipalsRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListPolicyPrincipals response.
 *
 * @param  response  Response to parse.
 */
void ListPolicyPrincipalsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPolicyPrincipalsResponsePrivate
 *
 * @brief  Private implementation for ListPolicyPrincipalsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPolicyPrincipalsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPolicyPrincipalsResponse instance.
 */
ListPolicyPrincipalsResponsePrivate::ListPolicyPrincipalsResponsePrivate(
    ListPolicyPrincipalsQueueResponse * const q) : ListPolicyPrincipalsPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListPolicyPrincipalsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPolicyPrincipalsResponsePrivate::ListPolicyPrincipalsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPolicyPrincipalsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
