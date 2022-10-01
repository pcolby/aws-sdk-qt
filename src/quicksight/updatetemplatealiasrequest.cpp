// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetemplatealiasrequest.h"
#include "updatetemplatealiasrequest_p.h"
#include "updatetemplatealiasresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateTemplateAliasRequest
 * \brief The UpdateTemplateAliasRequest class provides an interface for QuickSight UpdateTemplateAlias requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateTemplateAlias
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTemplateAliasRequest::UpdateTemplateAliasRequest(const UpdateTemplateAliasRequest &other)
    : QuickSightRequest(new UpdateTemplateAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTemplateAliasRequest object.
 */
UpdateTemplateAliasRequest::UpdateTemplateAliasRequest()
    : QuickSightRequest(new UpdateTemplateAliasRequestPrivate(QuickSightRequest::UpdateTemplateAliasAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTemplateAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTemplateAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTemplateAliasRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTemplateAliasResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateTemplateAliasRequestPrivate
 * \brief The UpdateTemplateAliasRequestPrivate class provides private implementation for UpdateTemplateAliasRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateTemplateAliasRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateTemplateAliasRequestPrivate::UpdateTemplateAliasRequestPrivate(
    const QuickSightRequest::Action action, UpdateTemplateAliasRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTemplateAliasRequest
 * class' copy constructor.
 */
UpdateTemplateAliasRequestPrivate::UpdateTemplateAliasRequestPrivate(
    const UpdateTemplateAliasRequestPrivate &other, UpdateTemplateAliasRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
