// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
