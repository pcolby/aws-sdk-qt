// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappvalidationconfigurationresponse.h"
#include "deleteappvalidationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::DeleteAppValidationConfigurationResponse
 * \brief The DeleteAppValidationConfigurationResponse class provides an interace for Sms DeleteAppValidationConfiguration responses.
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
 * \sa SmsClient::deleteAppValidationConfiguration
 */

/*!
 * Constructs a DeleteAppValidationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAppValidationConfigurationResponse::DeleteAppValidationConfigurationResponse(
        const DeleteAppValidationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new DeleteAppValidationConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteAppValidationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAppValidationConfigurationRequest * DeleteAppValidationConfigurationResponse::request() const
{
    Q_D(const DeleteAppValidationConfigurationResponse);
    return static_cast<const DeleteAppValidationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms DeleteAppValidationConfiguration \a response.
 */
void DeleteAppValidationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAppValidationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::DeleteAppValidationConfigurationResponsePrivate
 * \brief The DeleteAppValidationConfigurationResponsePrivate class provides private implementation for DeleteAppValidationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a DeleteAppValidationConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteAppValidationConfigurationResponsePrivate::DeleteAppValidationConfigurationResponsePrivate(
    DeleteAppValidationConfigurationResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms DeleteAppValidationConfiguration response element from \a xml.
 */
void DeleteAppValidationConfigurationResponsePrivate::parseDeleteAppValidationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAppValidationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
