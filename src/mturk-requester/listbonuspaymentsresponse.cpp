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

#include "listbonuspaymentsresponse.h"
#include "listbonuspaymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/**
 * @class  ListBonusPaymentsResponse
 *
 * @brief  Handles MTurk ListBonusPayments responses.
 *
 * @see    MTurkClient::listBonusPayments
 */

/**
 * @brief  Constructs a new ListBonusPaymentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBonusPaymentsResponse::ListBonusPaymentsResponse(
        const ListBonusPaymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListBonusPaymentsResponsePrivate(this), parent)
{
    setRequest(new ListBonusPaymentsRequest(request));
    setReply(reply);
}

const ListBonusPaymentsRequest * ListBonusPaymentsResponse::request() const
{
    Q_D(const ListBonusPaymentsResponse);
    return static_cast<const ListBonusPaymentsRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk ListBonusPayments response.
 *
 * @param  response  Response to parse.
 */
void ListBonusPaymentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListBonusPaymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListBonusPaymentsResponsePrivate
 *
 * @brief  Private implementation for ListBonusPaymentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBonusPaymentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListBonusPaymentsResponse instance.
 */
ListBonusPaymentsResponsePrivate::ListBonusPaymentsResponsePrivate(
    ListBonusPaymentsResponse * const q) : MTurkResponsePrivate(q)
{

}

/**
 * @brief  Parse an MTurk ListBonusPaymentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListBonusPaymentsResponsePrivate::ListBonusPaymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBonusPaymentsResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
