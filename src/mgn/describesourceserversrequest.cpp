// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesourceserversrequest.h"
#include "describesourceserversrequest_p.h"
#include "describesourceserversresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DescribeSourceServersRequest
 * \brief The DescribeSourceServersRequest class provides an interface for Mgn DescribeSourceServers requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::describeSourceServers
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSourceServersRequest::DescribeSourceServersRequest(const DescribeSourceServersRequest &other)
    : MgnRequest(new DescribeSourceServersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSourceServersRequest object.
 */
DescribeSourceServersRequest::DescribeSourceServersRequest()
    : MgnRequest(new DescribeSourceServersRequestPrivate(MgnRequest::DescribeSourceServersAction, this))
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
 * \class QtAws::Mgn::DescribeSourceServersRequestPrivate
 * \brief The DescribeSourceServersRequestPrivate class provides private implementation for DescribeSourceServersRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DescribeSourceServersRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
DescribeSourceServersRequestPrivate::DescribeSourceServersRequestPrivate(
    const MgnRequest::Action action, DescribeSourceServersRequest * const q)
    : MgnRequestPrivate(action, q)
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
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
