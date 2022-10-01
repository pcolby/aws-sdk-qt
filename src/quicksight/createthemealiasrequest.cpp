// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createthemealiasrequest.h"
#include "createthemealiasrequest_p.h"
#include "createthemealiasresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateThemeAliasRequest
 * \brief The CreateThemeAliasRequest class provides an interface for QuickSight CreateThemeAlias requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createThemeAlias
 */

/*!
 * Constructs a copy of \a other.
 */
CreateThemeAliasRequest::CreateThemeAliasRequest(const CreateThemeAliasRequest &other)
    : QuickSightRequest(new CreateThemeAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateThemeAliasRequest object.
 */
CreateThemeAliasRequest::CreateThemeAliasRequest()
    : QuickSightRequest(new CreateThemeAliasRequestPrivate(QuickSightRequest::CreateThemeAliasAction, this))
{

}

/*!
 * \reimp
 */
bool CreateThemeAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateThemeAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateThemeAliasRequest::response(QNetworkReply * const reply) const
{
    return new CreateThemeAliasResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateThemeAliasRequestPrivate
 * \brief The CreateThemeAliasRequestPrivate class provides private implementation for CreateThemeAliasRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateThemeAliasRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateThemeAliasRequestPrivate::CreateThemeAliasRequestPrivate(
    const QuickSightRequest::Action action, CreateThemeAliasRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateThemeAliasRequest
 * class' copy constructor.
 */
CreateThemeAliasRequestPrivate::CreateThemeAliasRequestPrivate(
    const CreateThemeAliasRequestPrivate &other, CreateThemeAliasRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
