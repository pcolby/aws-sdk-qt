// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
