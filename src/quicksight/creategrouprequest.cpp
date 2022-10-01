// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategrouprequest.h"
#include "creategrouprequest_p.h"
#include "creategroupresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateGroupRequest
 * \brief The CreateGroupRequest class provides an interface for QuickSight CreateGroup requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGroupRequest::CreateGroupRequest(const CreateGroupRequest &other)
    : QuickSightRequest(new CreateGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGroupRequest object.
 */
CreateGroupRequest::CreateGroupRequest()
    : QuickSightRequest(new CreateGroupRequestPrivate(QuickSightRequest::CreateGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateGroupResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateGroupRequestPrivate
 * \brief The CreateGroupRequestPrivate class provides private implementation for CreateGroupRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateGroupRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateGroupRequestPrivate::CreateGroupRequestPrivate(
    const QuickSightRequest::Action action, CreateGroupRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGroupRequest
 * class' copy constructor.
 */
CreateGroupRequestPrivate::CreateGroupRequestPrivate(
    const CreateGroupRequestPrivate &other, CreateGroupRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
