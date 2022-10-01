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

#include "testsegmentpatternrequest.h"
#include "testsegmentpatternrequest_p.h"
#include "testsegmentpatternresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::TestSegmentPatternRequest
 * \brief The TestSegmentPatternRequest class provides an interface for Evidently TestSegmentPattern requests.
 *
 * \inmodule QtAwsEvidently
 *
 *  You can use Amazon CloudWatch Evidently to safely validate new features by serving them to a specified percentage of
 *  your users while you roll out the feature. You can monitor the performance of the new feature to help you decide when to
 *  ramp up traffic to your users. This helps you reduce risk and identify unintended consequences before you fully launch
 *  the
 * 
 *  feature>
 * 
 *  You can also conduct A/B experiments to make feature design decisions based on evidence and data. An experiment can test
 *  as many as five variations at once. Evidently collects experiment data and analyzes it using statistical methods. It
 *  also provides clear recommendations about which variations perform better. You can test both user-facing features and
 *  backend
 *
 * \sa EvidentlyClient::testSegmentPattern
 */

/*!
 * Constructs a copy of \a other.
 */
TestSegmentPatternRequest::TestSegmentPatternRequest(const TestSegmentPatternRequest &other)
    : EvidentlyRequest(new TestSegmentPatternRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestSegmentPatternRequest object.
 */
TestSegmentPatternRequest::TestSegmentPatternRequest()
    : EvidentlyRequest(new TestSegmentPatternRequestPrivate(EvidentlyRequest::TestSegmentPatternAction, this))
{

}

/*!
 * \reimp
 */
bool TestSegmentPatternRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestSegmentPatternResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestSegmentPatternRequest::response(QNetworkReply * const reply) const
{
    return new TestSegmentPatternResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::TestSegmentPatternRequestPrivate
 * \brief The TestSegmentPatternRequestPrivate class provides private implementation for TestSegmentPatternRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a TestSegmentPatternRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
TestSegmentPatternRequestPrivate::TestSegmentPatternRequestPrivate(
    const EvidentlyRequest::Action action, TestSegmentPatternRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestSegmentPatternRequest
 * class' copy constructor.
 */
TestSegmentPatternRequestPrivate::TestSegmentPatternRequestPrivate(
    const TestSegmentPatternRequestPrivate &other, TestSegmentPatternRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
