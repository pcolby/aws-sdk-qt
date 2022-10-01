// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testdnsanswerrequest.h"
#include "testdnsanswerrequest_p.h"
#include "testdnsanswerresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::TestDNSAnswerRequest
 * \brief The TestDNSAnswerRequest class provides an interface for Route53 TestDNSAnswer requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::testDNSAnswer
 */

/*!
 * Constructs a copy of \a other.
 */
TestDNSAnswerRequest::TestDNSAnswerRequest(const TestDNSAnswerRequest &other)
    : Route53Request(new TestDNSAnswerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestDNSAnswerRequest object.
 */
TestDNSAnswerRequest::TestDNSAnswerRequest()
    : Route53Request(new TestDNSAnswerRequestPrivate(Route53Request::TestDNSAnswerAction, this))
{

}

/*!
 * \reimp
 */
bool TestDNSAnswerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestDNSAnswerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestDNSAnswerRequest::response(QNetworkReply * const reply) const
{
    return new TestDNSAnswerResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::TestDNSAnswerRequestPrivate
 * \brief The TestDNSAnswerRequestPrivate class provides private implementation for TestDNSAnswerRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a TestDNSAnswerRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
TestDNSAnswerRequestPrivate::TestDNSAnswerRequestPrivate(
    const Route53Request::Action action, TestDNSAnswerRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestDNSAnswerRequest
 * class' copy constructor.
 */
TestDNSAnswerRequestPrivate::TestDNSAnswerRequestPrivate(
    const TestDNSAnswerRequestPrivate &other, TestDNSAnswerRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
