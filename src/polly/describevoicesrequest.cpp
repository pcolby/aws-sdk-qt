// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
