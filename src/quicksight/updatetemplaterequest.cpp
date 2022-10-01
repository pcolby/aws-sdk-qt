// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetemplaterequest.h"
#include "updatetemplaterequest_p.h"
#include "updatetemplateresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateTemplateRequest
 * \brief The UpdateTemplateRequest class provides an interface for QuickSight UpdateTemplate requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTemplateRequest::UpdateTemplateRequest(const UpdateTemplateRequest &other)
    : QuickSightRequest(new UpdateTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTemplateRequest object.
 */
UpdateTemplateRequest::UpdateTemplateRequest()
    : QuickSightRequest(new UpdateTemplateRequestPrivate(QuickSightRequest::UpdateTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateTemplateRequestPrivate
 * \brief The UpdateTemplateRequestPrivate class provides private implementation for UpdateTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateTemplateRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateTemplateRequestPrivate::UpdateTemplateRequestPrivate(
    const QuickSightRequest::Action action, UpdateTemplateRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTemplateRequest
 * class' copy constructor.
 */
UpdateTemplateRequestPrivate::UpdateTemplateRequestPrivate(
    const UpdateTemplateRequestPrivate &other, UpdateTemplateRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
