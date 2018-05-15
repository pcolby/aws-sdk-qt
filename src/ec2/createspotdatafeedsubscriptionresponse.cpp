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

#include "createspotdatafeedsubscriptionresponse.h"
#include "createspotdatafeedsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateSpotDatafeedSubscriptionResponse
 * \brief The CreateSpotDatafeedSubscriptionResponse class provides an interace for EC2 CreateSpotDatafeedSubscription responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createSpotDatafeedSubscription
 */

/*!
 * Constructs a CreateSpotDatafeedSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSpotDatafeedSubscriptionResponse::CreateSpotDatafeedSubscriptionResponse(
        const CreateSpotDatafeedSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateSpotDatafeedSubscriptionResponsePrivate(this), parent)
{
    setRequest(new CreateSpotDatafeedSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSpotDatafeedSubscriptionRequest * CreateSpotDatafeedSubscriptionResponse::request() const
{
    Q_D(const CreateSpotDatafeedSubscriptionResponse);
    return static_cast<const CreateSpotDatafeedSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateSpotDatafeedSubscription \a response.
 */
void CreateSpotDatafeedSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSpotDatafeedSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateSpotDatafeedSubscriptionResponsePrivate
 * \brief The CreateSpotDatafeedSubscriptionResponsePrivate class provides private implementation for CreateSpotDatafeedSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateSpotDatafeedSubscriptionResponsePrivate object with public implementation \a q.
 */
CreateSpotDatafeedSubscriptionResponsePrivate::CreateSpotDatafeedSubscriptionResponsePrivate(
    CreateSpotDatafeedSubscriptionResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateSpotDatafeedSubscription response element from \a xml.
 */
void CreateSpotDatafeedSubscriptionResponsePrivate::parseCreateSpotDatafeedSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSpotDatafeedSubscriptionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
