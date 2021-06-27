/*
    Copyright 2013-2021 Paul Colby

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

#include "getmonitoringsubscriptionresponse.h"
#include "getmonitoringsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetMonitoringSubscriptionResponse
 * \brief The GetMonitoringSubscriptionResponse class provides an interace for CloudFront GetMonitoringSubscription responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getMonitoringSubscription
 */

/*!
 * Constructs a GetMonitoringSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
GetMonitoringSubscriptionResponse::GetMonitoringSubscriptionResponse(
        const GetMonitoringSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetMonitoringSubscriptionResponsePrivate(this), parent)
{
    setRequest(new GetMonitoringSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMonitoringSubscriptionRequest * GetMonitoringSubscriptionResponse::request() const
{
    return static_cast<const GetMonitoringSubscriptionRequest *>(CloudFrontResponse::request());
}

/*!
 * \reimp
 * Parses a successful CloudFront GetMonitoringSubscription \a response.
 */
void GetMonitoringSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMonitoringSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetMonitoringSubscriptionResponsePrivate
 * \brief The GetMonitoringSubscriptionResponsePrivate class provides private implementation for GetMonitoringSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetMonitoringSubscriptionResponsePrivate object with public implementation \a q.
 */
GetMonitoringSubscriptionResponsePrivate::GetMonitoringSubscriptionResponsePrivate(
    GetMonitoringSubscriptionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetMonitoringSubscription response element from \a xml.
 */
void GetMonitoringSubscriptionResponsePrivate::parseGetMonitoringSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMonitoringSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
