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

#include "putapplaunchconfigurationresponse.h"
#include "putapplaunchconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::PutAppLaunchConfigurationResponse
 * \brief The PutAppLaunchConfigurationResponse class provides an interace for SMS PutAppLaunchConfiguration responses.
 *
 * \inmodule QtAwsSMS
 *
 *  <fullname>AWS Server Migration Service</fullname>
 * 
 *  AWS Server Migration Service (AWS SMS) makes it easier and faster for you to migrate your on-premises workloads to AWS.
 *  To learn more about AWS SMS, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">AWS Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">AWS Server Migration Service User
 *  Guide</a>
 *
 * \sa SmsClient::putAppLaunchConfiguration
 */

/*!
 * Constructs a PutAppLaunchConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutAppLaunchConfigurationResponse::PutAppLaunchConfigurationResponse(
        const PutAppLaunchConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new PutAppLaunchConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutAppLaunchConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAppLaunchConfigurationRequest * PutAppLaunchConfigurationResponse::request() const
{
    return static_cast<const PutAppLaunchConfigurationRequest *>(SmsResponse::request());
}

/*!
 * \reimp
 * Parses a successful SMS PutAppLaunchConfiguration \a response.
 */
void PutAppLaunchConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAppLaunchConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::PutAppLaunchConfigurationResponsePrivate
 * \brief The PutAppLaunchConfigurationResponsePrivate class provides private implementation for PutAppLaunchConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a PutAppLaunchConfigurationResponsePrivate object with public implementation \a q.
 */
PutAppLaunchConfigurationResponsePrivate::PutAppLaunchConfigurationResponsePrivate(
    PutAppLaunchConfigurationResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS PutAppLaunchConfiguration response element from \a xml.
 */
void PutAppLaunchConfigurationResponsePrivate::parsePutAppLaunchConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAppLaunchConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SMS
} // namespace QtAws
