// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateparametergrouprequest.h"
#include "updateparametergrouprequest_p.h"
#include "updateparametergroupresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::UpdateParameterGroupRequest
 * \brief The UpdateParameterGroupRequest class provides an interface for Dax UpdateParameterGroup requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::updateParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateParameterGroupRequest::UpdateParameterGroupRequest(const UpdateParameterGroupRequest &other)
    : DaxRequest(new UpdateParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateParameterGroupRequest object.
 */
UpdateParameterGroupRequest::UpdateParameterGroupRequest()
    : DaxRequest(new UpdateParameterGroupRequestPrivate(DaxRequest::UpdateParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::UpdateParameterGroupRequestPrivate
 * \brief The UpdateParameterGroupRequestPrivate class provides private implementation for UpdateParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a UpdateParameterGroupRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
UpdateParameterGroupRequestPrivate::UpdateParameterGroupRequestPrivate(
    const DaxRequest::Action action, UpdateParameterGroupRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateParameterGroupRequest
 * class' copy constructor.
 */
UpdateParameterGroupRequestPrivate::UpdateParameterGroupRequestPrivate(
    const UpdateParameterGroupRequestPrivate &other, UpdateParameterGroupRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
