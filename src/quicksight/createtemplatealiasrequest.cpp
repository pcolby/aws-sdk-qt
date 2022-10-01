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

#include "createtemplatealiasrequest.h"
#include "createtemplatealiasrequest_p.h"
#include "createtemplatealiasresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateTemplateAliasRequest
 * \brief The CreateTemplateAliasRequest class provides an interface for QuickSight CreateTemplateAlias requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createTemplateAlias
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTemplateAliasRequest::CreateTemplateAliasRequest(const CreateTemplateAliasRequest &other)
    : QuickSightRequest(new CreateTemplateAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTemplateAliasRequest object.
 */
CreateTemplateAliasRequest::CreateTemplateAliasRequest()
    : QuickSightRequest(new CreateTemplateAliasRequestPrivate(QuickSightRequest::CreateTemplateAliasAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTemplateAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTemplateAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTemplateAliasRequest::response(QNetworkReply * const reply) const
{
    return new CreateTemplateAliasResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateTemplateAliasRequestPrivate
 * \brief The CreateTemplateAliasRequestPrivate class provides private implementation for CreateTemplateAliasRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateTemplateAliasRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateTemplateAliasRequestPrivate::CreateTemplateAliasRequestPrivate(
    const QuickSightRequest::Action action, CreateTemplateAliasRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTemplateAliasRequest
 * class' copy constructor.
 */
CreateTemplateAliasRequestPrivate::CreateTemplateAliasRequestPrivate(
    const CreateTemplateAliasRequestPrivate &other, CreateTemplateAliasRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
