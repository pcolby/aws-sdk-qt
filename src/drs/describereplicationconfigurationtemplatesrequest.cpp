// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationconfigurationtemplatesrequest.h"
#include "describereplicationconfigurationtemplatesrequest_p.h"
#include "describereplicationconfigurationtemplatesresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DescribeReplicationConfigurationTemplatesRequest
 * \brief The DescribeReplicationConfigurationTemplatesRequest class provides an interface for Drs DescribeReplicationConfigurationTemplates requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::describeReplicationConfigurationTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReplicationConfigurationTemplatesRequest::DescribeReplicationConfigurationTemplatesRequest(const DescribeReplicationConfigurationTemplatesRequest &other)
    : DrsRequest(new DescribeReplicationConfigurationTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReplicationConfigurationTemplatesRequest object.
 */
DescribeReplicationConfigurationTemplatesRequest::DescribeReplicationConfigurationTemplatesRequest()
    : DrsRequest(new DescribeReplicationConfigurationTemplatesRequestPrivate(DrsRequest::DescribeReplicationConfigurationTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReplicationConfigurationTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReplicationConfigurationTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReplicationConfigurationTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationConfigurationTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::DescribeReplicationConfigurationTemplatesRequestPrivate
 * \brief The DescribeReplicationConfigurationTemplatesRequestPrivate class provides private implementation for DescribeReplicationConfigurationTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DescribeReplicationConfigurationTemplatesRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
DescribeReplicationConfigurationTemplatesRequestPrivate::DescribeReplicationConfigurationTemplatesRequestPrivate(
    const DrsRequest::Action action, DescribeReplicationConfigurationTemplatesRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationConfigurationTemplatesRequest
 * class' copy constructor.
 */
DescribeReplicationConfigurationTemplatesRequestPrivate::DescribeReplicationConfigurationTemplatesRequestPrivate(
    const DescribeReplicationConfigurationTemplatesRequestPrivate &other, DescribeReplicationConfigurationTemplatesRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
