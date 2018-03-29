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

#include "listphonenumbersoptedoutresponse.h"
#include "listphonenumbersoptedoutresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  ListPhoneNumbersOptedOutResponse
 *
 * @brief  Handles SNS ListPhoneNumbersOptedOut responses.
 *
 * @see    SNSClient::listPhoneNumbersOptedOut
 */

/**
 * @brief  Constructs a new ListPhoneNumbersOptedOutResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPhoneNumbersOptedOutResponse::ListPhoneNumbersOptedOutResponse(
        const ListPhoneNumbersOptedOutRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new ListPhoneNumbersOptedOutResponsePrivate(this), parent)
{
    setRequest(new ListPhoneNumbersOptedOutRequest(request));
    setReply(reply);
}

const ListPhoneNumbersOptedOutRequest * ListPhoneNumbersOptedOutResponse::request() const
{
    Q_D(const ListPhoneNumbersOptedOutResponse);
    return static_cast<const ListPhoneNumbersOptedOutRequest *>(d->request);
}

/**
 * @brief  Parse a SNS ListPhoneNumbersOptedOut response.
 *
 * @param  response  Response to parse.
 */
void ListPhoneNumbersOptedOutResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPhoneNumbersOptedOutResponsePrivate
 *
 * @brief  Private implementation for ListPhoneNumbersOptedOutResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPhoneNumbersOptedOutResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPhoneNumbersOptedOutResponse instance.
 */
ListPhoneNumbersOptedOutResponsePrivate::ListPhoneNumbersOptedOutResponsePrivate(
    ListPhoneNumbersOptedOutQueueResponse * const q) : ListPhoneNumbersOptedOutPrivate(q)
{

}

/**
 * @brief  Parse an SNS ListPhoneNumbersOptedOutResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPhoneNumbersOptedOutResponsePrivate::ListPhoneNumbersOptedOutResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPhoneNumbersOptedOutResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS
