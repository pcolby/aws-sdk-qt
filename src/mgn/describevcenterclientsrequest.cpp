// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describevcenterclientsrequest.h"
#include "describevcenterclientsrequest_p.h"
#include "describevcenterclientsresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DescribeVcenterClientsRequest
 * \brief The DescribeVcenterClientsRequest class provides an interface for Mgn DescribeVcenterClients requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::describeVcenterClients
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeVcenterClientsRequest::DescribeVcenterClientsRequest(const DescribeVcenterClientsRequest &other)
    : MgnRequest(new DescribeVcenterClientsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeVcenterClientsRequest object.
 */
DescribeVcenterClientsRequest::DescribeVcenterClientsRequest()
    : MgnRequest(new DescribeVcenterClientsRequestPrivate(MgnRequest::DescribeVcenterClientsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeVcenterClientsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeVcenterClientsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVcenterClientsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVcenterClientsResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::DescribeVcenterClientsRequestPrivate
 * \brief The DescribeVcenterClientsRequestPrivate class provides private implementation for DescribeVcenterClientsRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DescribeVcenterClientsRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
DescribeVcenterClientsRequestPrivate::DescribeVcenterClientsRequestPrivate(
    const MgnRequest::Action action, DescribeVcenterClientsRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeVcenterClientsRequest
 * class' copy constructor.
 */
DescribeVcenterClientsRequestPrivate::DescribeVcenterClientsRequestPrivate(
    const DescribeVcenterClientsRequestPrivate &other, DescribeVcenterClientsRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
