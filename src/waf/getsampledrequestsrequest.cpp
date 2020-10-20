/*
    Copyright 2013-2020 Paul Colby

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

#include "getsampledrequestsrequest.h"
#include "getsampledrequestsrequest_p.h"
#include "getsampledrequestsresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::GetSampledRequestsRequest
 * \brief The GetSampledRequestsRequest class provides an interface for WAF GetSampledRequests requests.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::getSampledRequests
 */

/*!
 * Constructs a copy of \a other.
 */
GetSampledRequestsRequest::GetSampledRequestsRequest(const GetSampledRequestsRequest &other)
    : WafRequest(new GetSampledRequestsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSampledRequestsRequest object.
 */
GetSampledRequestsRequest::GetSampledRequestsRequest()
    : WafRequest(new GetSampledRequestsRequestPrivate(WafRequest::GetSampledRequestsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSampledRequestsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSampledRequestsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSampledRequestsRequest::response(QNetworkReply * const reply) const
{
    return new GetSampledRequestsResponse(*this, reply);
}

/*!
 * \class QtAws::WAF::GetSampledRequestsRequestPrivate
 * \brief The GetSampledRequestsRequestPrivate class provides private implementation for GetSampledRequestsRequest.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a GetSampledRequestsRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
GetSampledRequestsRequestPrivate::GetSampledRequestsRequestPrivate(
    const WafRequest::Action action, GetSampledRequestsRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSampledRequestsRequest
 * class' copy constructor.
 */
GetSampledRequestsRequestPrivate::GetSampledRequestsRequestPrivate(
    const GetSampledRequestsRequestPrivate &other, GetSampledRequestsRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
