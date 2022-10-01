// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemonitoringsubscriptionresponse.h"
#include "deletemonitoringsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteMonitoringSubscriptionResponse
 * \brief The DeleteMonitoringSubscriptionResponse class provides an interace for CloudFront DeleteMonitoringSubscription responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteMonitoringSubscription
 */

/*!
 * Constructs a DeleteMonitoringSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMonitoringSubscriptionResponse::DeleteMonitoringSubscriptionResponse(
        const DeleteMonitoringSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteMonitoringSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DeleteMonitoringSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMonitoringSubscriptionRequest * DeleteMonitoringSubscriptionResponse::request() const
{
    Q_D(const DeleteMonitoringSubscriptionResponse);
    return static_cast<const DeleteMonitoringSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteMonitoringSubscription \a response.
 */
void DeleteMonitoringSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMonitoringSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteMonitoringSubscriptionResponsePrivate
 * \brief The DeleteMonitoringSubscriptionResponsePrivate class provides private implementation for DeleteMonitoringSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteMonitoringSubscriptionResponsePrivate object with public implementation \a q.
 */
DeleteMonitoringSubscriptionResponsePrivate::DeleteMonitoringSubscriptionResponsePrivate(
    DeleteMonitoringSubscriptionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteMonitoringSubscription response element from \a xml.
 */
void DeleteMonitoringSubscriptionResponsePrivate::parseDeleteMonitoringSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMonitoringSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
