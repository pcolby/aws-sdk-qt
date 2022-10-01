// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfolderrequest.h"
#include "createfolderrequest_p.h"
#include "createfolderresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateFolderRequest
 * \brief The CreateFolderRequest class provides an interface for QuickSight CreateFolder requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createFolder
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFolderRequest::CreateFolderRequest(const CreateFolderRequest &other)
    : QuickSightRequest(new CreateFolderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFolderRequest object.
 */
CreateFolderRequest::CreateFolderRequest()
    : QuickSightRequest(new CreateFolderRequestPrivate(QuickSightRequest::CreateFolderAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFolderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFolderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFolderRequest::response(QNetworkReply * const reply) const
{
    return new CreateFolderResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateFolderRequestPrivate
 * \brief The CreateFolderRequestPrivate class provides private implementation for CreateFolderRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateFolderRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateFolderRequestPrivate::CreateFolderRequestPrivate(
    const QuickSightRequest::Action action, CreateFolderRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFolderRequest
 * class' copy constructor.
 */
CreateFolderRequestPrivate::CreateFolderRequestPrivate(
    const CreateFolderRequestPrivate &other, CreateFolderRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
