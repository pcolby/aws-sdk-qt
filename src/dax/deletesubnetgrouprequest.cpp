// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesubnetgrouprequest.h"
#include "deletesubnetgrouprequest_p.h"
#include "deletesubnetgroupresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DeleteSubnetGroupRequest
 * \brief The DeleteSubnetGroupRequest class provides an interface for Dax DeleteSubnetGroup requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::deleteSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSubnetGroupRequest::DeleteSubnetGroupRequest(const DeleteSubnetGroupRequest &other)
    : DaxRequest(new DeleteSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSubnetGroupRequest object.
 */
DeleteSubnetGroupRequest::DeleteSubnetGroupRequest()
    : DaxRequest(new DeleteSubnetGroupRequestPrivate(DaxRequest::DeleteSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::DeleteSubnetGroupRequestPrivate
 * \brief The DeleteSubnetGroupRequestPrivate class provides private implementation for DeleteSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DeleteSubnetGroupRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
DeleteSubnetGroupRequestPrivate::DeleteSubnetGroupRequestPrivate(
    const DaxRequest::Action action, DeleteSubnetGroupRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSubnetGroupRequest
 * class' copy constructor.
 */
DeleteSubnetGroupRequestPrivate::DeleteSubnetGroupRequestPrivate(
    const DeleteSubnetGroupRequestPrivate &other, DeleteSubnetGroupRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
