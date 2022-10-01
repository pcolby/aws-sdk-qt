// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesourceserversrequest.h"
#include "describesourceserversrequest_p.h"
#include "describesourceserversresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DescribeSourceServersRequest
 * \brief The DescribeSourceServersRequest class provides an interface for Drs DescribeSourceServers requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::describeSourceServers
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSourceServersRequest::DescribeSourceServersRequest(const DescribeSourceServersRequest &other)
    : DrsRequest(new DescribeSourceServersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSourceServersRequest object.
 */
DescribeSourceServersRequest::DescribeSourceServersRequest()
    : DrsRequest(new DescribeSourceServersRequestPrivate(DrsRequest::DescribeSourceServersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSourceServersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSourceServersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSourceServersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSourceServersResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::DescribeSourceServersRequestPrivate
 * \brief The DescribeSourceServersRequestPrivate class provides private implementation for DescribeSourceServersRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DescribeSourceServersRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
DescribeSourceServersRequestPrivate::DescribeSourceServersRequestPrivate(
    const DrsRequest::Action action, DescribeSourceServersRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSourceServersRequest
 * class' copy constructor.
 */
DescribeSourceServersRequestPrivate::DescribeSourceServersRequestPrivate(
    const DescribeSourceServersRequestPrivate &other, DescribeSourceServersRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
