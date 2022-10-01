// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
