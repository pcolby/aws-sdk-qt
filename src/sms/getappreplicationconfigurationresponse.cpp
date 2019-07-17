/*
    Copyright 2013-2019 Paul Colby

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

#include "getappreplicationconfigurationresponse.h"
#include "getappreplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GetAppReplicationConfigurationResponse
 * \brief The GetAppReplicationConfigurationResponse class provides an interace for SMS GetAppReplicationConfiguration responses.
 *
 * \inmodule QtAwsSMS
 *
 *  <fullname>AAWS Sever Migration Service</fullname>
 * 
 *  This is the <i>AWS Sever Migration Service API Reference</i>. It provides descriptions, syntax, and usage examples for
 *  each of the actions and data types for the AWS Sever Migration Service (AWS SMS). The topic for each action shows the
 *  Query API request parameters and the XML response. You can also view the XML request elements in the
 * 
 *  WSDL>
 * 
 *  Alternatively, you can use one of the AWS SDKs to access an API that's tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>>
 * 
 *  To learn more about the Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="https://aws.amazon.com/server-migration-service/">AWS Sever Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/server-migration.html">AWS Sever
 *  Migration Service User Guide</a>
 *
 * \sa SmsClient::getAppReplicationConfiguration
 */

/*!
 * Constructs a GetAppReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetAppReplicationConfigurationResponse::GetAppReplicationConfigurationResponse(
        const GetAppReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new GetAppReplicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetAppReplicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAppReplicationConfigurationRequest * GetAppReplicationConfigurationResponse::request() const
{
    Q_D(const GetAppReplicationConfigurationResponse);
    return static_cast<const GetAppReplicationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SMS GetAppReplicationConfiguration \a response.
 */
void GetAppReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAppReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::GetAppReplicationConfigurationResponsePrivate
 * \brief The GetAppReplicationConfigurationResponsePrivate class provides private implementation for GetAppReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a GetAppReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
GetAppReplicationConfigurationResponsePrivate::GetAppReplicationConfigurationResponsePrivate(
    GetAppReplicationConfigurationResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS GetAppReplicationConfiguration response element from \a xml.
 */
void GetAppReplicationConfigurationResponsePrivate::parseGetAppReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAppReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SMS
} // namespace QtAws
