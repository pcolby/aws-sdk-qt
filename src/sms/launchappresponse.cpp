// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "launchappresponse.h"
#include "launchappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::LaunchAppResponse
 * \brief The LaunchAppResponse class provides an interace for Sms LaunchApp responses.
 *
 * \inmodule QtAwsSms
 *
 *  <b>
 * 
 *  <b>Product update</b>
 * 
 *  </p
 * 
 *  We recommend <a href="http://aws.amazon.com/application-migration-service">Amazon Web Services Application Migration
 *  Service</a> (Amazon Web Services MGN) as the primary migration service for lift-and-shift migrations. If Amazon Web
 *  Services MGN is unavailable in a specific Amazon Web Services Region, you can use the Server Migration Service APIs
 *  through March
 * 
 *  2023> </b>
 * 
 *  Server Migration Service (Server Migration Service) makes it easier and faster for you to migrate your on-premises
 *  workloads to Amazon Web Services. To learn more about Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server Migration Service User Guide</a>
 *
 * \sa SmsClient::launchApp
 */

/*!
 * Constructs a LaunchAppResponse object for \a reply to \a request, with parent \a parent.
 */
LaunchAppResponse::LaunchAppResponse(
        const LaunchAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new LaunchAppResponsePrivate(this), parent)
{
    setRequest(new LaunchAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const LaunchAppRequest * LaunchAppResponse::request() const
{
    Q_D(const LaunchAppResponse);
    return static_cast<const LaunchAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms LaunchApp \a response.
 */
void LaunchAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(LaunchAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::LaunchAppResponsePrivate
 * \brief The LaunchAppResponsePrivate class provides private implementation for LaunchAppResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a LaunchAppResponsePrivate object with public implementation \a q.
 */
LaunchAppResponsePrivate::LaunchAppResponsePrivate(
    LaunchAppResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms LaunchApp response element from \a xml.
 */
void LaunchAppResponsePrivate::parseLaunchAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("LaunchAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
