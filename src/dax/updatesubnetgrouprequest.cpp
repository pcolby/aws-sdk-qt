// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesubnetgrouprequest.h"
#include "updatesubnetgrouprequest_p.h"
#include "updatesubnetgroupresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::UpdateSubnetGroupRequest
 * \brief The UpdateSubnetGroupRequest class provides an interface for Dax UpdateSubnetGroup requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::updateSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSubnetGroupRequest::UpdateSubnetGroupRequest(const UpdateSubnetGroupRequest &other)
    : DaxRequest(new UpdateSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSubnetGroupRequest object.
 */
UpdateSubnetGroupRequest::UpdateSubnetGroupRequest()
    : DaxRequest(new UpdateSubnetGroupRequestPrivate(DaxRequest::UpdateSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::UpdateSubnetGroupRequestPrivate
 * \brief The UpdateSubnetGroupRequestPrivate class provides private implementation for UpdateSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a UpdateSubnetGroupRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
UpdateSubnetGroupRequestPrivate::UpdateSubnetGroupRequestPrivate(
    const DaxRequest::Action action, UpdateSubnetGroupRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSubnetGroupRequest
 * class' copy constructor.
 */
UpdateSubnetGroupRequestPrivate::UpdateSubnetGroupRequestPrivate(
    const UpdateSubnetGroupRequestPrivate &other, UpdateSubnetGroupRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
