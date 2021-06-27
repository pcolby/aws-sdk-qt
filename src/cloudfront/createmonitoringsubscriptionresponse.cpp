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
    return static_cast<const CreateMonitoringSubscriptionRequest *>(CloudFrontResponse::request());
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
