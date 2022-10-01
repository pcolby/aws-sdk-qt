// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rebootnoderequest.h"
#include "rebootnoderequest_p.h"
#include "rebootnoderesponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::RebootNodeRequest
 * \brief The RebootNodeRequest class provides an interface for Dax RebootNode requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::rebootNode
 */

/*!
 * Constructs a copy of \a other.
 */
RebootNodeRequest::RebootNodeRequest(const RebootNodeRequest &other)
    : DaxRequest(new RebootNodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RebootNodeRequest object.
 */
RebootNodeRequest::RebootNodeRequest()
    : DaxRequest(new RebootNodeRequestPrivate(DaxRequest::RebootNodeAction, this))
{

}

/*!
 * \reimp
 */
bool RebootNodeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RebootNodeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RebootNodeRequest::response(QNetworkReply * const reply) const
{
    return new RebootNodeResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::RebootNodeRequestPrivate
 * \brief The RebootNodeRequestPrivate class provides private implementation for RebootNodeRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a RebootNodeRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
RebootNodeRequestPrivate::RebootNodeRequestPrivate(
    const DaxRequest::Action action, RebootNodeRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RebootNodeRequest
 * class' copy constructor.
 */
RebootNodeRequestPrivate::RebootNodeRequestPrivate(
    const RebootNodeRequestPrivate &other, RebootNodeRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
