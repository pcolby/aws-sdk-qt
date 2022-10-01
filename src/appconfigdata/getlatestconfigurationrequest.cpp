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

#include "getlatestconfigurationrequest.h"
#include "getlatestconfigurationrequest_p.h"
#include "getlatestconfigurationresponse.h"
#include "appconfigdatarequest_p.h"

namespace QtAws {
namespace AppConfigData {

/*!
 * \class QtAws::AppConfigData::GetLatestConfigurationRequest
 * \brief The GetLatestConfigurationRequest class provides an interface for AppConfigData GetLatestConfiguration requests.
 *
 * \inmodule QtAwsAppConfigData
 *
 *  AppConfig Data provides the data plane APIs your application uses to retrieve configuration data. Here's how it
 * 
 *  works>
 * 
 *  Your application retrieves configuration data by first establishing a configuration session using the AppConfig Data
 *  <a>StartConfigurationSession</a> API action. Your session's client then makes periodic calls to
 *  <a>GetLatestConfiguration</a> to check for and retrieve the latest data
 * 
 *  available>
 * 
 *  When calling <code>StartConfigurationSession</code>, your code sends the following
 * 
 *  information> <ul> <li>
 * 
 *  Identifiers (ID or name) of an AppConfig application, environment, and configuration profile that the session
 * 
 *  tracks> </li> <li>
 * 
 *  (Optional) The minimum amount of time the session's client must wait between calls to
 * 
 *  <code>GetLatestConfiguration</code>> </li> </ul>
 * 
 *  In response, AppConfig provides an <code>InitialConfigurationToken</code> to be given to the session's client and used
 *  the first time it calls <code>GetLatestConfiguration</code> for that
 * 
 *  session>
 * 
 *  When calling <code>GetLatestConfiguration</code>, your client code sends the most recent <code>ConfigurationToken</code>
 *  value it has and receives in
 * 
 *  response> <ul> <li>
 * 
 *  <code>NextPollConfigurationToken</code>: the <code>ConfigurationToken</code> value to use on the next call to
 * 
 *  <code>GetLatestConfiguration</code>> </li> <li>
 * 
 *  <code>NextPollIntervalInSeconds</code>: the duration the client should wait before making its next call to
 *  <code>GetLatestConfiguration</code>. This duration may vary over the course of the session, so it should be used instead
 *  of the value sent on the <code>StartConfigurationSession</code>
 * 
 *  call> </li> <li>
 * 
 *  The configuration: the latest data intended for the session. This may be empty if the client already has the latest
 *  version of the
 * 
 *  configuration> </li> </ul>
 * 
 *  For more information and to view example CLI commands that show how to retrieve a configuration using the AppConfig Data
 *  <code>StartConfigurationSession</code> and <code>GetLatestConfiguration</code> API actions, see <a
 *  href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-retrieving-the-configuration">Receiving the
 *  configuration</a> in the <i>AppConfig User
 *
 * \sa AppConfigDataClient::getLatestConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetLatestConfigurationRequest::GetLatestConfigurationRequest(const GetLatestConfigurationRequest &other)
    : AppConfigDataRequest(new GetLatestConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLatestConfigurationRequest object.
 */
GetLatestConfigurationRequest::GetLatestConfigurationRequest()
    : AppConfigDataRequest(new GetLatestConfigurationRequestPrivate(AppConfigDataRequest::GetLatestConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetLatestConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLatestConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLatestConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetLatestConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::AppConfigData::GetLatestConfigurationRequestPrivate
 * \brief The GetLatestConfigurationRequestPrivate class provides private implementation for GetLatestConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAppConfigData
 */

/*!
 * Constructs a GetLatestConfigurationRequestPrivate object for AppConfigData \a action,
 * with public implementation \a q.
 */
GetLatestConfigurationRequestPrivate::GetLatestConfigurationRequestPrivate(
    const AppConfigDataRequest::Action action, GetLatestConfigurationRequest * const q)
    : AppConfigDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLatestConfigurationRequest
 * class' copy constructor.
 */
GetLatestConfigurationRequestPrivate::GetLatestConfigurationRequestPrivate(
    const GetLatestConfigurationRequestPrivate &other, GetLatestConfigurationRequest * const q)
    : AppConfigDataRequestPrivate(other, q)
{

}

} // namespace AppConfigData
} // namespace QtAws
