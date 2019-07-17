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
