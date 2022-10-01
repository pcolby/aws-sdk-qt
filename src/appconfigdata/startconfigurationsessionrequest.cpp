// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startconfigurationsessionrequest.h"
#include "startconfigurationsessionrequest_p.h"
#include "startconfigurationsessionresponse.h"
#include "appconfigdatarequest_p.h"

namespace QtAws {
namespace AppConfigData {

/*!
 * \class QtAws::AppConfigData::StartConfigurationSessionRequest
 * \brief The StartConfigurationSessionRequest class provides an interface for AppConfigData StartConfigurationSession requests.
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
 * \sa AppConfigDataClient::startConfigurationSession
 */

/*!
 * Constructs a copy of \a other.
 */
StartConfigurationSessionRequest::StartConfigurationSessionRequest(const StartConfigurationSessionRequest &other)
    : AppConfigDataRequest(new StartConfigurationSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartConfigurationSessionRequest object.
 */
StartConfigurationSessionRequest::StartConfigurationSessionRequest()
    : AppConfigDataRequest(new StartConfigurationSessionRequestPrivate(AppConfigDataRequest::StartConfigurationSessionAction, this))
{

}

/*!
 * \reimp
 */
bool StartConfigurationSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartConfigurationSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartConfigurationSessionRequest::response(QNetworkReply * const reply) const
{
    return new StartConfigurationSessionResponse(*this, reply);
}

/*!
 * \class QtAws::AppConfigData::StartConfigurationSessionRequestPrivate
 * \brief The StartConfigurationSessionRequestPrivate class provides private implementation for StartConfigurationSessionRequest.
 * \internal
 *
 * \inmodule QtAwsAppConfigData
 */

/*!
 * Constructs a StartConfigurationSessionRequestPrivate object for AppConfigData \a action,
 * with public implementation \a q.
 */
StartConfigurationSessionRequestPrivate::StartConfigurationSessionRequestPrivate(
    const AppConfigDataRequest::Action action, StartConfigurationSessionRequest * const q)
    : AppConfigDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartConfigurationSessionRequest
 * class' copy constructor.
 */
StartConfigurationSessionRequestPrivate::StartConfigurationSessionRequestPrivate(
    const StartConfigurationSessionRequestPrivate &other, StartConfigurationSessionRequest * const q)
    : AppConfigDataRequestPrivate(other, q)
{

}

} // namespace AppConfigData
} // namespace QtAws
