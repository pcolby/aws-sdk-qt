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

#include "testrolerequest.h"
#include "testrolerequest_p.h"
#include "testroleresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::TestRoleRequest
 * \brief The TestRoleRequest class provides an interface for ElasticTranscoder TestRole requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::testRole
 */

/*!
 * Constructs a copy of \a other.
 */
TestRoleRequest::TestRoleRequest(const TestRoleRequest &other)
    : ElasticTranscoderRequest(new TestRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestRoleRequest object.
 */
TestRoleRequest::TestRoleRequest()
    : ElasticTranscoderRequest(new TestRoleRequestPrivate(ElasticTranscoderRequest::TestRoleAction, this))
{

}

/*!
 * \reimp
 */
bool TestRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestRoleRequest::response(QNetworkReply * const reply) const
{
    return new TestRoleResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::TestRoleRequestPrivate
 * \brief The TestRoleRequestPrivate class provides private implementation for TestRoleRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a TestRoleRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
TestRoleRequestPrivate::TestRoleRequestPrivate(
    const ElasticTranscoderRequest::Action action, TestRoleRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestRoleRequest
 * class' copy constructor.
 */
TestRoleRequestPrivate::TestRoleRequestPrivate(
    const TestRoleRequestPrivate &other, TestRoleRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
