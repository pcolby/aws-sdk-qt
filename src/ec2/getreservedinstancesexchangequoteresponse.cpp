/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getreservedinstancesexchangequoteresponse.h"
#include "getreservedinstancesexchangequoteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::GetReservedInstancesExchangeQuoteResponse
 * \brief The GetReservedInstancesExchangeQuoteResponse class provides an interace for EC2 GetReservedInstancesExchangeQuote responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 * 
 *  faster>
 * 
 *  To learn more about Amazon EC2, Amazon EBS, and Amazon VPC, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 *
 * \sa Ec2Client::getReservedInstancesExchangeQuote
 */

/*!
 * Constructs a GetReservedInstancesExchangeQuoteResponse object for \a reply to \a request, with parent \a parent.
 */
GetReservedInstancesExchangeQuoteResponse::GetReservedInstancesExchangeQuoteResponse(
        const GetReservedInstancesExchangeQuoteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new GetReservedInstancesExchangeQuoteResponsePrivate(this), parent)
{
    setRequest(new GetReservedInstancesExchangeQuoteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReservedInstancesExchangeQuoteRequest * GetReservedInstancesExchangeQuoteResponse::request() const
{
    Q_D(const GetReservedInstancesExchangeQuoteResponse);
    return static_cast<const GetReservedInstancesExchangeQuoteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 GetReservedInstancesExchangeQuote \a response.
 */
void GetReservedInstancesExchangeQuoteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReservedInstancesExchangeQuoteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::GetReservedInstancesExchangeQuoteResponsePrivate
 * \brief The GetReservedInstancesExchangeQuoteResponsePrivate class provides private implementation for GetReservedInstancesExchangeQuoteResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a GetReservedInstancesExchangeQuoteResponsePrivate object with public implementation \a q.
 */
GetReservedInstancesExchangeQuoteResponsePrivate::GetReservedInstancesExchangeQuoteResponsePrivate(
    GetReservedInstancesExchangeQuoteResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 GetReservedInstancesExchangeQuote response element from \a xml.
 */
void GetReservedInstancesExchangeQuoteResponsePrivate::parseGetReservedInstancesExchangeQuoteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReservedInstancesExchangeQuoteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
