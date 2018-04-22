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

#include "acceptreservedinstancesexchangequoteresponse.h"
#include "acceptreservedinstancesexchangequoteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AcceptReservedInstancesExchangeQuoteResponse
 * \brief The AcceptReservedInstancesExchangeQuoteResponse class provides an interace for EC2 AcceptReservedInstancesExchangeQuote responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::acceptReservedInstancesExchangeQuote
 */

/*!
 * Constructs a AcceptReservedInstancesExchangeQuoteResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptReservedInstancesExchangeQuoteResponse::AcceptReservedInstancesExchangeQuoteResponse(
        const AcceptReservedInstancesExchangeQuoteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new AcceptReservedInstancesExchangeQuoteResponsePrivate(this), parent)
{
    setRequest(new AcceptReservedInstancesExchangeQuoteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptReservedInstancesExchangeQuoteRequest * AcceptReservedInstancesExchangeQuoteResponse::request() const
{
    Q_D(const AcceptReservedInstancesExchangeQuoteResponse);
    return static_cast<const AcceptReservedInstancesExchangeQuoteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 AcceptReservedInstancesExchangeQuote \a response.
 */
void AcceptReservedInstancesExchangeQuoteResponse::parseSuccess(QIODevice &response)
{
    Q_D(AcceptReservedInstancesExchangeQuoteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::AcceptReservedInstancesExchangeQuoteResponsePrivate
 * \brief The AcceptReservedInstancesExchangeQuoteResponsePrivate class provides private implementation for AcceptReservedInstancesExchangeQuoteResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AcceptReservedInstancesExchangeQuoteResponsePrivate object with public implementation \a q.
 */
AcceptReservedInstancesExchangeQuoteResponsePrivate::AcceptReservedInstancesExchangeQuoteResponsePrivate(
    AcceptReservedInstancesExchangeQuoteResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 AcceptReservedInstancesExchangeQuote response element from \a xml.
 */
void AcceptReservedInstancesExchangeQuoteResponsePrivate::parseAcceptReservedInstancesExchangeQuoteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptReservedInstancesExchangeQuoteResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
