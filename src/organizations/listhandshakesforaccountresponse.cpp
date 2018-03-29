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

#include "listhandshakesforaccountresponse.h"
#include "listhandshakesforaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  ListHandshakesForAccountResponse
 *
 * @brief  Handles Organizations ListHandshakesForAccount responses.
 *
 * @see    OrganizationsClient::listHandshakesForAccount
 */

/**
 * @brief  Constructs a new ListHandshakesForAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListHandshakesForAccountResponse::ListHandshakesForAccountResponse(
        const ListHandshakesForAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new ListHandshakesForAccountResponsePrivate(this), parent)
{
    setRequest(new ListHandshakesForAccountRequest(request));
    setReply(reply);
}

const ListHandshakesForAccountRequest * ListHandshakesForAccountResponse::request() const
{
    Q_D(const ListHandshakesForAccountResponse);
    return static_cast<const ListHandshakesForAccountRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations ListHandshakesForAccount response.
 *
 * @param  response  Response to parse.
 */
void ListHandshakesForAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListHandshakesForAccountResponsePrivate
 *
 * @brief  Private implementation for ListHandshakesForAccountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHandshakesForAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListHandshakesForAccountResponse instance.
 */
ListHandshakesForAccountResponsePrivate::ListHandshakesForAccountResponsePrivate(
    ListHandshakesForAccountQueueResponse * const q) : ListHandshakesForAccountPrivate(q)
{

}

/**
 * @brief  Parse an Organizations ListHandshakesForAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListHandshakesForAccountResponsePrivate::ListHandshakesForAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHandshakesForAccountResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
