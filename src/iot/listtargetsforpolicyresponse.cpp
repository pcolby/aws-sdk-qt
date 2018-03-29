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

#include "listtargetsforpolicyresponse.h"
#include "listtargetsforpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  ListTargetsForPolicyResponse
 *
 * @brief  Handles IoT ListTargetsForPolicy responses.
 *
 * @see    IoTClient::listTargetsForPolicy
 */

/**
 * @brief  Constructs a new ListTargetsForPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTargetsForPolicyResponse::ListTargetsForPolicyResponse(
        const ListTargetsForPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListTargetsForPolicyResponsePrivate(this), parent)
{
    setRequest(new ListTargetsForPolicyRequest(request));
    setReply(reply);
}

const ListTargetsForPolicyRequest * ListTargetsForPolicyResponse::request() const
{
    Q_D(const ListTargetsForPolicyResponse);
    return static_cast<const ListTargetsForPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListTargetsForPolicy response.
 *
 * @param  response  Response to parse.
 */
void ListTargetsForPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTargetsForPolicyResponsePrivate
 *
 * @brief  Private implementation for ListTargetsForPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTargetsForPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTargetsForPolicyResponse instance.
 */
ListTargetsForPolicyResponsePrivate::ListTargetsForPolicyResponsePrivate(
    ListTargetsForPolicyResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT ListTargetsForPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTargetsForPolicyResponsePrivate::ListTargetsForPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTargetsForPolicyResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
