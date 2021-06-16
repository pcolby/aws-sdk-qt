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

#include "deletetemplatealiasrequest.h"
#include "deletetemplatealiasrequest_p.h"
#include "deletetemplatealiasresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteTemplateAliasRequest
 * \brief The DeleteTemplateAliasRequest class provides an interface for QuickSight DeleteTemplateAlias requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteTemplateAlias
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTemplateAliasRequest::DeleteTemplateAliasRequest(const DeleteTemplateAliasRequest &other)
    : QuickSightRequest(new DeleteTemplateAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTemplateAliasRequest object.
 */
DeleteTemplateAliasRequest::DeleteTemplateAliasRequest()
    : QuickSightRequest(new DeleteTemplateAliasRequestPrivate(QuickSightRequest::DeleteTemplateAliasAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTemplateAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTemplateAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTemplateAliasRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTemplateAliasResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteTemplateAliasRequestPrivate
 * \brief The DeleteTemplateAliasRequestPrivate class provides private implementation for DeleteTemplateAliasRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteTemplateAliasRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteTemplateAliasRequestPrivate::DeleteTemplateAliasRequestPrivate(
    const QuickSightRequest::Action action, DeleteTemplateAliasRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTemplateAliasRequest
 * class' copy constructor.
 */
DeleteTemplateAliasRequestPrivate::DeleteTemplateAliasRequestPrivate(
    const DeleteTemplateAliasRequestPrivate &other, DeleteTemplateAliasRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
