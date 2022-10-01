// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const GetMonitoringSubscriptionResponse);
    return static_cast<const GetMonitoringSubscriptionRequest *>(d->request);
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
