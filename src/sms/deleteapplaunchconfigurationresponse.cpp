// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplaunchconfigurationresponse.h"
#include "deleteapplaunchconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::DeleteAppLaunchConfigurationResponse
 * \brief The DeleteAppLaunchConfigurationResponse class provides an interace for Sms DeleteAppLaunchConfiguration responses.
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
 * \sa SmsClient::deleteAppLaunchConfiguration
 */

/*!
 * Constructs a DeleteAppLaunchConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAppLaunchConfigurationResponse::DeleteAppLaunchConfigurationResponse(
        const DeleteAppLaunchConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new DeleteAppLaunchConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteAppLaunchConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAppLaunchConfigurationRequest * DeleteAppLaunchConfigurationResponse::request() const
{
    Q_D(const DeleteAppLaunchConfigurationResponse);
    return static_cast<const DeleteAppLaunchConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms DeleteAppLaunchConfiguration \a response.
 */
void DeleteAppLaunchConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAppLaunchConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::DeleteAppLaunchConfigurationResponsePrivate
 * \brief The DeleteAppLaunchConfigurationResponsePrivate class provides private implementation for DeleteAppLaunchConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a DeleteAppLaunchConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteAppLaunchConfigurationResponsePrivate::DeleteAppLaunchConfigurationResponsePrivate(
    DeleteAppLaunchConfigurationResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms DeleteAppLaunchConfiguration response element from \a xml.
 */
void DeleteAppLaunchConfigurationResponsePrivate::parseDeleteAppLaunchConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppLaunchConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
