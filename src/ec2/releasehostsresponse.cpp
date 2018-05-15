/*
    Copyright 2013-2018 Paul Colby

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

#include "releasehostsresponse.h"
#include "releasehostsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ReleaseHostsResponse
 * \brief The ReleaseHostsResponse class provides an interace for EC2 ReleaseHosts responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::releaseHosts
 */

/*!
 * Constructs a ReleaseHostsResponse object for \a reply to \a request, with parent \a parent.
 */
ReleaseHostsResponse::ReleaseHostsResponse(
        const ReleaseHostsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ReleaseHostsResponsePrivate(this), parent)
{
    setRequest(new ReleaseHostsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReleaseHostsRequest * ReleaseHostsResponse::request() const
{
    Q_D(const ReleaseHostsResponse);
    return static_cast<const ReleaseHostsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ReleaseHosts \a response.
 */
void ReleaseHostsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReleaseHostsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ReleaseHostsResponsePrivate
 * \brief The ReleaseHostsResponsePrivate class provides private implementation for ReleaseHostsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ReleaseHostsResponsePrivate object with public implementation \a q.
 */
ReleaseHostsResponsePrivate::ReleaseHostsResponsePrivate(
    ReleaseHostsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ReleaseHosts response element from \a xml.
 */
void ReleaseHostsResponsePrivate::parseReleaseHostsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReleaseHostsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
