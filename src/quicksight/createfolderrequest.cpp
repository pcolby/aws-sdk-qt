/*
    Copyright 2013-2021 Paul Colby

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
