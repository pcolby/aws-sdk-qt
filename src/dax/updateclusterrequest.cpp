// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclusterrequest.h"
#include "updateclusterrequest_p.h"
#include "updateclusterresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::UpdateClusterRequest
 * \brief The UpdateClusterRequest class provides an interface for Dax UpdateCluster requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::updateCluster
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateClusterRequest::UpdateClusterRequest(const UpdateClusterRequest &other)
    : DaxRequest(new UpdateClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateClusterRequest object.
 */
UpdateClusterRequest::UpdateClusterRequest()
    : DaxRequest(new UpdateClusterRequestPrivate(DaxRequest::UpdateClusterAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClusterRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::UpdateClusterRequestPrivate
 * \brief The UpdateClusterRequestPrivate class provides private implementation for UpdateClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a UpdateClusterRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
UpdateClusterRequestPrivate::UpdateClusterRequestPrivate(
    const DaxRequest::Action action, UpdateClusterRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateClusterRequest
 * class' copy constructor.
 */
UpdateClusterRequestPrivate::UpdateClusterRequestPrivate(
    const UpdateClusterRequestPrivate &other, UpdateClusterRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
