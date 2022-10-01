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

#include "getconfigurationseteventdestinationsrequest.h"
#include "getconfigurationseteventdestinationsrequest_p.h"
#include "getconfigurationseteventdestinationsresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetConfigurationSetEventDestinationsRequest
 * \brief The GetConfigurationSetEventDestinationsRequest class provides an interface for SESv2 GetConfigurationSetEventDestinations requests.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::getConfigurationSetEventDestinations
 */

/*!
 * Constructs a copy of \a other.
 */
GetConfigurationSetEventDestinationsRequest::GetConfigurationSetEventDestinationsRequest(const GetConfigurationSetEventDestinationsRequest &other)
    : SESv2Request(new GetConfigurationSetEventDestinationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConfigurationSetEventDestinationsRequest object.
 */
GetConfigurationSetEventDestinationsRequest::GetConfigurationSetEventDestinationsRequest()
    : SESv2Request(new GetConfigurationSetEventDestinationsRequestPrivate(SESv2Request::GetConfigurationSetEventDestinationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetConfigurationSetEventDestinationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConfigurationSetEventDestinationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConfigurationSetEventDestinationsRequest::response(QNetworkReply * const reply) const
{
    return new GetConfigurationSetEventDestinationsResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetConfigurationSetEventDestinationsRequestPrivate
 * \brief The GetConfigurationSetEventDestinationsRequestPrivate class provides private implementation for GetConfigurationSetEventDestinationsRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetConfigurationSetEventDestinationsRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetConfigurationSetEventDestinationsRequestPrivate::GetConfigurationSetEventDestinationsRequestPrivate(
    const SESv2Request::Action action, GetConfigurationSetEventDestinationsRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConfigurationSetEventDestinationsRequest
 * class' copy constructor.
 */
GetConfigurationSetEventDestinationsRequestPrivate::GetConfigurationSetEventDestinationsRequestPrivate(
    const GetConfigurationSetEventDestinationsRequestPrivate &other, GetConfigurationSetEventDestinationsRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
