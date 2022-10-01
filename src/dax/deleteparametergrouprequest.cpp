// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteparametergrouprequest.h"
#include "deleteparametergrouprequest_p.h"
#include "deleteparametergroupresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DeleteParameterGroupRequest
 * \brief The DeleteParameterGroupRequest class provides an interface for Dax DeleteParameterGroup requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::deleteParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteParameterGroupRequest::DeleteParameterGroupRequest(const DeleteParameterGroupRequest &other)
    : DaxRequest(new DeleteParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteParameterGroupRequest object.
 */
DeleteParameterGroupRequest::DeleteParameterGroupRequest()
    : DaxRequest(new DeleteParameterGroupRequestPrivate(DaxRequest::DeleteParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::DeleteParameterGroupRequestPrivate
 * \brief The DeleteParameterGroupRequestPrivate class provides private implementation for DeleteParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DeleteParameterGroupRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
DeleteParameterGroupRequestPrivate::DeleteParameterGroupRequestPrivate(
    const DaxRequest::Action action, DeleteParameterGroupRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteParameterGroupRequest
 * class' copy constructor.
 */
DeleteParameterGroupRequestPrivate::DeleteParameterGroupRequestPrivate(
    const DeleteParameterGroupRequestPrivate &other, DeleteParameterGroupRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
