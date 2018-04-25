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

#include "monitorinstancesresponse.h"
#include "monitorinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::MonitorInstancesResponse
 * \brief The MonitorInstancesResponse class provides an interace for EC2 MonitorInstances responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::monitorInstances
 */

/*!
 * Constructs a MonitorInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
MonitorInstancesResponse::MonitorInstancesResponse(
        const MonitorInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new MonitorInstancesResponsePrivate(this), parent)
{
    setRequest(new MonitorInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const MonitorInstancesRequest * MonitorInstancesResponse::request() const
{
    Q_D(const MonitorInstancesResponse);
    return static_cast<const MonitorInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 MonitorInstances \a response.
 */
void MonitorInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(MonitorInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::MonitorInstancesResponsePrivate
 * \brief The MonitorInstancesResponsePrivate class provides private implementation for MonitorInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a MonitorInstancesResponsePrivate object with public implementation \a q.
 */
MonitorInstancesResponsePrivate::MonitorInstancesResponsePrivate(
    MonitorInstancesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 MonitorInstances response element from \a xml.
 */
void MonitorInstancesResponsePrivate::parseMonitorInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MonitorInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
