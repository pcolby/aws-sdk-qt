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

#include "listofferingtransactionsresponse.h"
#include "listofferingtransactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListOfferingTransactionsResponse
 *
 * \brief The ListOfferingTransactionsResponse class encapsulates DeviceFarm ListOfferingTransactions responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listOfferingTransactions
 */

/*!
 * @brief  Constructs a new ListOfferingTransactionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOfferingTransactionsResponse::ListOfferingTransactionsResponse(
        const ListOfferingTransactionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListOfferingTransactionsResponsePrivate(this), parent)
{
    setRequest(new ListOfferingTransactionsRequest(request));
    setReply(reply);
}

const ListOfferingTransactionsRequest * ListOfferingTransactionsResponse::request() const
{
    Q_D(const ListOfferingTransactionsResponse);
    return static_cast<const ListOfferingTransactionsRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm ListOfferingTransactions response.
 *
 * @param  response  Response to parse.
 */
void ListOfferingTransactionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListOfferingTransactionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListOfferingTransactionsResponsePrivate
 *
 * \brief Private implementation for ListOfferingTransactionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListOfferingTransactionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListOfferingTransactionsResponse instance.
 */
ListOfferingTransactionsResponsePrivate::ListOfferingTransactionsResponsePrivate(
    ListOfferingTransactionsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm ListOfferingTransactionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListOfferingTransactionsResponsePrivate::parseListOfferingTransactionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOfferingTransactionsResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
