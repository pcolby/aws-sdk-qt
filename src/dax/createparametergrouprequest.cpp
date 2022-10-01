// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createparametergrouprequest.h"
#include "createparametergrouprequest_p.h"
#include "createparametergroupresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::CreateParameterGroupRequest
 * \brief The CreateParameterGroupRequest class provides an interface for Dax CreateParameterGroup requests.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::createParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateParameterGroupRequest::CreateParameterGroupRequest(const CreateParameterGroupRequest &other)
    : DaxRequest(new CreateParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateParameterGroupRequest object.
 */
CreateParameterGroupRequest::CreateParameterGroupRequest()
    : DaxRequest(new CreateParameterGroupRequestPrivate(DaxRequest::CreateParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Dax::CreateParameterGroupRequestPrivate
 * \brief The CreateParameterGroupRequestPrivate class provides private implementation for CreateParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a CreateParameterGroupRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
CreateParameterGroupRequestPrivate::CreateParameterGroupRequestPrivate(
    const DaxRequest::Action action, CreateParameterGroupRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateParameterGroupRequest
 * class' copy constructor.
 */
CreateParameterGroupRequestPrivate::CreateParameterGroupRequestPrivate(
    const CreateParameterGroupRequestPrivate &other, CreateParameterGroupRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace Dax
} // namespace QtAws
