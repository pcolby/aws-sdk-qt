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

#include "describedhcpoptionsresponse.h"
#include "describedhcpoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeDhcpOptionsResponse
 * \brief The DescribeDhcpOptionsResponse class provides an interace for EC2 DescribeDhcpOptions responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeDhcpOptions
 */

/*!
 * Constructs a DescribeDhcpOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDhcpOptionsResponse::DescribeDhcpOptionsResponse(
        const DescribeDhcpOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeDhcpOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeDhcpOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDhcpOptionsRequest * DescribeDhcpOptionsResponse::request() const
{
    Q_D(const DescribeDhcpOptionsResponse);
    return static_cast<const DescribeDhcpOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeDhcpOptions \a response.
 */
void DescribeDhcpOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDhcpOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeDhcpOptionsResponsePrivate
 * \brief The DescribeDhcpOptionsResponsePrivate class provides private implementation for DescribeDhcpOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeDhcpOptionsResponsePrivate object with public implementation \a q.
 */
DescribeDhcpOptionsResponsePrivate::DescribeDhcpOptionsResponsePrivate(
    DescribeDhcpOptionsResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeDhcpOptions response element from \a xml.
 */
void DescribeDhcpOptionsResponsePrivate::parseDescribeDhcpOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDhcpOptionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
