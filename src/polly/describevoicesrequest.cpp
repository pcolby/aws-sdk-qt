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

#include "describevoicesrequest.h"
#include "describevoicesrequest_p.h"
#include "describevoicesresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::DescribeVoicesRequest
 * \brief The DescribeVoicesRequest class provides an interface for Polly DescribeVoices requests.
 *
 * \inmodule QtAwsPolly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 *
 * \sa PollyClient::describeVoices
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeVoicesRequest::DescribeVoicesRequest(const DescribeVoicesRequest &other)
    : PollyRequest(new DescribeVoicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeVoicesRequest object.
 */
DescribeVoicesRequest::DescribeVoicesRequest()
    : PollyRequest(new DescribeVoicesRequestPrivate(PollyRequest::DescribeVoicesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeVoicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeVoicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVoicesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVoicesResponse(*this, reply);
}

/*!
 * \class QtAws::Polly::DescribeVoicesRequestPrivate
 * \brief The DescribeVoicesRequestPrivate class provides private implementation for DescribeVoicesRequest.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a DescribeVoicesRequestPrivate object for Polly \a action,
 * with public implementation \a q.
 */
DescribeVoicesRequestPrivate::DescribeVoicesRequestPrivate(
    const PollyRequest::Action action, DescribeVoicesRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeVoicesRequest
 * class' copy constructor.
 */
DescribeVoicesRequestPrivate::DescribeVoicesRequestPrivate(
    const DescribeVoicesRequestPrivate &other, DescribeVoicesRequest * const q)
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
