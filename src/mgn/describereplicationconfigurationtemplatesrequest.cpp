// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationconfigurationtemplatesrequest.h"
#include "describereplicationconfigurationtemplatesrequest_p.h"
#include "describereplicationconfigurationtemplatesresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DescribeReplicationConfigurationTemplatesRequest
 * \brief The DescribeReplicationConfigurationTemplatesRequest class provides an interface for Mgn DescribeReplicationConfigurationTemplates requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::describeReplicationConfigurationTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReplicationConfigurationTemplatesRequest::DescribeReplicationConfigurationTemplatesRequest(const DescribeReplicationConfigurationTemplatesRequest &other)
    : MgnRequest(new DescribeReplicationConfigurationTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReplicationConfigurationTemplatesRequest object.
 */
DescribeReplicationConfigurationTemplatesRequest::DescribeReplicationConfigurationTemplatesRequest()
    : MgnRequest(new DescribeReplicationConfigurationTemplatesRequestPrivate(MgnRequest::DescribeReplicationConfigurationTemplatesAction, this))
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
 * \class QtAws::Mgn::DescribeReplicationConfigurationTemplatesRequestPrivate
 * \brief The DescribeReplicationConfigurationTemplatesRequestPrivate class provides private implementation for DescribeReplicationConfigurationTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DescribeReplicationConfigurationTemplatesRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
DescribeReplicationConfigurationTemplatesRequestPrivate::DescribeReplicationConfigurationTemplatesRequestPrivate(
    const MgnRequest::Action action, DescribeReplicationConfigurationTemplatesRequest * const q)
    : MgnRequestPrivate(action, q)
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
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
