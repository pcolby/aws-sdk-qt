// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfoldermembershiprequest.h"
#include "createfoldermembershiprequest_p.h"
#include "createfoldermembershipresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateFolderMembershipRequest
 * \brief The CreateFolderMembershipRequest class provides an interface for QuickSight CreateFolderMembership requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createFolderMembership
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFolderMembershipRequest::CreateFolderMembershipRequest(const CreateFolderMembershipRequest &other)
    : QuickSightRequest(new CreateFolderMembershipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFolderMembershipRequest object.
 */
CreateFolderMembershipRequest::CreateFolderMembershipRequest()
    : QuickSightRequest(new CreateFolderMembershipRequestPrivate(QuickSightRequest::CreateFolderMembershipAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFolderMembershipRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFolderMembershipResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFolderMembershipRequest::response(QNetworkReply * const reply) const
{
    return new CreateFolderMembershipResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateFolderMembershipRequestPrivate
 * \brief The CreateFolderMembershipRequestPrivate class provides private implementation for CreateFolderMembershipRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateFolderMembershipRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateFolderMembershipRequestPrivate::CreateFolderMembershipRequestPrivate(
    const QuickSightRequest::Action action, CreateFolderMembershipRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFolderMembershipRequest
 * class' copy constructor.
 */
CreateFolderMembershipRequestPrivate::CreateFolderMembershipRequestPrivate(
    const CreateFolderMembershipRequestPrivate &other, CreateFolderMembershipRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
