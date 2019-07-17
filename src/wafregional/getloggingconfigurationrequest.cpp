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

#include "getloggingconfigurationrequest.h"
#include "getloggingconfigurationrequest_p.h"
#include "getloggingconfigurationresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::GetLoggingConfigurationRequest
 * \brief The GetLoggingConfigurationRequest class provides an interface for WAFRegional GetLoggingConfiguration requests.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::getLoggingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetLoggingConfigurationRequest::GetLoggingConfigurationRequest(const GetLoggingConfigurationRequest &other)
    : WAFRegionalRequest(new GetLoggingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLoggingConfigurationRequest object.
 */
GetLoggingConfigurationRequest::GetLoggingConfigurationRequest()
    : WAFRegionalRequest(new GetLoggingConfigurationRequestPrivate(WAFRegionalRequest::GetLoggingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetLoggingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLoggingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLoggingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetLoggingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::WAFRegional::GetLoggingConfigurationRequestPrivate
 * \brief The GetLoggingConfigurationRequestPrivate class provides private implementation for GetLoggingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a GetLoggingConfigurationRequestPrivate object for WAFRegional \a action,
 * with public implementation \a q.
 */
GetLoggingConfigurationRequestPrivate::GetLoggingConfigurationRequestPrivate(
    const WAFRegionalRequest::Action action, GetLoggingConfigurationRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLoggingConfigurationRequest
 * class' copy constructor.
 */
GetLoggingConfigurationRequestPrivate::GetLoggingConfigurationRequestPrivate(
    const GetLoggingConfigurationRequestPrivate &other, GetLoggingConfigurationRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
