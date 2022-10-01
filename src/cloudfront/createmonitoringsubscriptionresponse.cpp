// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmonitoringsubscriptionresponse.h"
#include "createmonitoringsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateMonitoringSubscriptionResponse
 * \brief The CreateMonitoringSubscriptionResponse class provides an interace for CloudFront CreateMonitoringSubscription responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createMonitoringSubscription
 */

/*!
 * Constructs a CreateMonitoringSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMonitoringSubscriptionResponse::CreateMonitoringSubscriptionResponse(
        const CreateMonitoringSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateMonitoringSubscriptionResponsePrivate(this), parent)
{
    setRequest(new CreateMonitoringSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMonitoringSubscriptionRequest * CreateMonitoringSubscriptionResponse::request() const
{
    Q_D(const CreateMonitoringSubscriptionResponse);
    return static_cast<const CreateMonitoringSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateMonitoringSubscription \a response.
 */
void CreateMonitoringSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMonitoringSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateMonitoringSubscriptionResponsePrivate
 * \brief The CreateMonitoringSubscriptionResponsePrivate class provides private implementation for CreateMonitoringSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateMonitoringSubscriptionResponsePrivate object with public implementation \a q.
 */
CreateMonitoringSubscriptionResponsePrivate::CreateMonitoringSubscriptionResponsePrivate(
    CreateMonitoringSubscriptionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateMonitoringSubscription response element from \a xml.
 */
void CreateMonitoringSubscriptionResponsePrivate::parseCreateMonitoringSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMonitoringSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
