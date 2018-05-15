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

#include "deletespotdatafeedsubscriptionresponse.h"
#include "deletespotdatafeedsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteSpotDatafeedSubscriptionResponse
 * \brief The DeleteSpotDatafeedSubscriptionResponse class provides an interace for EC2 DeleteSpotDatafeedSubscription responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteSpotDatafeedSubscription
 */

/*!
 * Constructs a DeleteSpotDatafeedSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSpotDatafeedSubscriptionResponse::DeleteSpotDatafeedSubscriptionResponse(
        const DeleteSpotDatafeedSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteSpotDatafeedSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DeleteSpotDatafeedSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSpotDatafeedSubscriptionRequest * DeleteSpotDatafeedSubscriptionResponse::request() const
{
    Q_D(const DeleteSpotDatafeedSubscriptionResponse);
    return static_cast<const DeleteSpotDatafeedSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteSpotDatafeedSubscription \a response.
 */
void DeleteSpotDatafeedSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSpotDatafeedSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteSpotDatafeedSubscriptionResponsePrivate
 * \brief The DeleteSpotDatafeedSubscriptionResponsePrivate class provides private implementation for DeleteSpotDatafeedSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteSpotDatafeedSubscriptionResponsePrivate object with public implementation \a q.
 */
DeleteSpotDatafeedSubscriptionResponsePrivate::DeleteSpotDatafeedSubscriptionResponsePrivate(
    DeleteSpotDatafeedSubscriptionResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteSpotDatafeedSubscription response element from \a xml.
 */
void DeleteSpotDatafeedSubscriptionResponsePrivate::parseDeleteSpotDatafeedSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSpotDatafeedSubscriptionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
