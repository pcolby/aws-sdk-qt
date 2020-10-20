/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createresourcegrouprequest.h"
#include "createresourcegrouprequest_p.h"
#include "createresourcegroupresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::CreateResourceGroupRequest
 * \brief The CreateResourceGroupRequest class provides an interface for Inspector CreateResourceGroup requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::createResourceGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourceGroupRequest::CreateResourceGroupRequest(const CreateResourceGroupRequest &other)
    : InspectorRequest(new CreateResourceGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourceGroupRequest object.
 */
CreateResourceGroupRequest::CreateResourceGroupRequest()
    : InspectorRequest(new CreateResourceGroupRequestPrivate(InspectorRequest::CreateResourceGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourceGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourceGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::CreateResourceGroupRequestPrivate
 * \brief The CreateResourceGroupRequestPrivate class provides private implementation for CreateResourceGroupRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a CreateResourceGroupRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
CreateResourceGroupRequestPrivate::CreateResourceGroupRequestPrivate(
    const InspectorRequest::Action action, CreateResourceGroupRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceGroupRequest
 * class' copy constructor.
 */
CreateResourceGroupRequestPrivate::CreateResourceGroupRequestPrivate(
    const CreateResourceGroupRequestPrivate &other, CreateResourceGroupRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
