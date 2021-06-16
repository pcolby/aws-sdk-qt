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

#include "createthemerequest.h"
#include "createthemerequest_p.h"
#include "createthemeresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateThemeRequest
 * \brief The CreateThemeRequest class provides an interface for QuickSight CreateTheme requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createTheme
 */

/*!
 * Constructs a copy of \a other.
 */
CreateThemeRequest::CreateThemeRequest(const CreateThemeRequest &other)
    : QuickSightRequest(new CreateThemeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateThemeRequest object.
 */
CreateThemeRequest::CreateThemeRequest()
    : QuickSightRequest(new CreateThemeRequestPrivate(QuickSightRequest::CreateThemeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateThemeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateThemeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateThemeRequest::response(QNetworkReply * const reply) const
{
    return new CreateThemeResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateThemeRequestPrivate
 * \brief The CreateThemeRequestPrivate class provides private implementation for CreateThemeRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateThemeRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateThemeRequestPrivate::CreateThemeRequestPrivate(
    const QuickSightRequest::Action action, CreateThemeRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateThemeRequest
 * class' copy constructor.
 */
CreateThemeRequestPrivate::CreateThemeRequestPrivate(
    const CreateThemeRequestPrivate &other, CreateThemeRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
