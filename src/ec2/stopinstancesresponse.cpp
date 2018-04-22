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

#include "stopinstancesresponse.h"
#include "stopinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::StopInstancesResponse
 * \brief The StopInstancesResponse class provides an interace for EC2 StopInstances responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::stopInstances
 */

/*!
 * Constructs a StopInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
StopInstancesResponse::StopInstancesResponse(
        const StopInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new StopInstancesResponsePrivate(this), parent)
{
    setRequest(new StopInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopInstancesRequest * StopInstancesResponse::request() const
{
    Q_D(const StopInstancesResponse);
    return static_cast<const StopInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 StopInstances \a response.
 */
void StopInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::StopInstancesResponsePrivate
 * \brief The StopInstancesResponsePrivate class provides private implementation for StopInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a StopInstancesResponsePrivate object with public implementation \a q.
 */
StopInstancesResponsePrivate::StopInstancesResponsePrivate(
    StopInstancesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 StopInstances response element from \a xml.
 */
void StopInstancesResponsePrivate::parseStopInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
