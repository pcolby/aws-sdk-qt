// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsubnetgrouprequest.h"
#include "createsubnetgrouprequest_p.h"
#include "createsubnetgroupresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::CreateSubnetGroupRequest
 * \brief The CreateSubnetGroupRequest class provides an interface for Dax CreateSubnetGroup requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::createSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSubnetGroupRequest::CreateSubnetGroupRequest(const CreateSubnetGroupRequest &other)
    : DaxRequest(new CreateSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSubnetGroupRequest object.
 */
CreateSubnetGroupRequest::CreateSubnetGroupRequest()
    : DaxRequest(new CreateSubnetGroupRequestPrivate(DaxRequest::CreateSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::CreateSubnetGroupRequestPrivate
 * \brief The CreateSubnetGroupRequestPrivate class provides private implementation for CreateSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a CreateSubnetGroupRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
CreateSubnetGroupRequestPrivate::CreateSubnetGroupRequestPrivate(
    const DaxRequest::Action action, CreateSubnetGroupRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSubnetGroupRequest
 * class' copy constructor.
 */
CreateSubnetGroupRequestPrivate::CreateSubnetGroupRequestPrivate(
    const CreateSubnetGroupRequestPrivate &other, CreateSubnetGroupRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
