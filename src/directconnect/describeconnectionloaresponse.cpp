/*
    Copyright 2013-2020 Paul Colby

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

#include "describeconnectionloaresponse.h"
#include "describeconnectionloaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeConnectionLoaResponse
 * \brief The DescribeConnectionLoaResponse class provides an interace for DirectConnect DescribeConnectionLoa responses.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard Ethernet fiber-optic
 *  cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router. With this connection
 *  in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon EC2 and Amazon S3) and to
 *  Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all AWS Regions
 *  except the China (Beijing) and (China) Ningxia Regions. AWS resources in the China Regions can only be accessed through
 *  locations associated with those
 *
 * \sa DirectConnectClient::describeConnectionLoa
 */

/*!
 * Constructs a DescribeConnectionLoaResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConnectionLoaResponse::DescribeConnectionLoaResponse(
        const DescribeConnectionLoaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeConnectionLoaResponsePrivate(this), parent)
{
    setRequest(new DescribeConnectionLoaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConnectionLoaRequest * DescribeConnectionLoaResponse::request() const
{
    Q_D(const DescribeConnectionLoaResponse);
    return static_cast<const DescribeConnectionLoaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeConnectionLoa \a response.
 */
void DescribeConnectionLoaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConnectionLoaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeConnectionLoaResponsePrivate
 * \brief The DescribeConnectionLoaResponsePrivate class provides private implementation for DescribeConnectionLoaResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeConnectionLoaResponsePrivate object with public implementation \a q.
 */
DescribeConnectionLoaResponsePrivate::DescribeConnectionLoaResponsePrivate(
    DescribeConnectionLoaResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeConnectionLoa response element from \a xml.
 */
void DescribeConnectionLoaResponsePrivate::parseDescribeConnectionLoaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConnectionLoaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
