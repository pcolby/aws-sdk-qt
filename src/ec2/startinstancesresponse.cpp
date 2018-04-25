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

#include "startinstancesresponse.h"
#include "startinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::StartInstancesResponse
 * \brief The StartInstancesResponse class provides an interace for EC2 StartInstances responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::startInstances
 */

/*!
 * Constructs a StartInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
StartInstancesResponse::StartInstancesResponse(
        const StartInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new StartInstancesResponsePrivate(this), parent)
{
    setRequest(new StartInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartInstancesRequest * StartInstancesResponse::request() const
{
    Q_D(const StartInstancesResponse);
    return static_cast<const StartInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 StartInstances \a response.
 */
void StartInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::StartInstancesResponsePrivate
 * \brief The StartInstancesResponsePrivate class provides private implementation for StartInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a StartInstancesResponsePrivate object with public implementation \a q.
 */
StartInstancesResponsePrivate::StartInstancesResponsePrivate(
    StartInstancesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 StartInstances response element from \a xml.
 */
void StartInstancesResponsePrivate::parseStartInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
