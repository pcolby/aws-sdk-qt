// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetemplaterequest.h"
#include "deletetemplaterequest_p.h"
#include "deletetemplateresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteTemplateRequest
 * \brief The DeleteTemplateRequest class provides an interface for QuickSight DeleteTemplate requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTemplateRequest::DeleteTemplateRequest(const DeleteTemplateRequest &other)
    : QuickSightRequest(new DeleteTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTemplateRequest object.
 */
DeleteTemplateRequest::DeleteTemplateRequest()
    : QuickSightRequest(new DeleteTemplateRequestPrivate(QuickSightRequest::DeleteTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteTemplateRequestPrivate
 * \brief The DeleteTemplateRequestPrivate class provides private implementation for DeleteTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteTemplateRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteTemplateRequestPrivate::DeleteTemplateRequestPrivate(
    const QuickSightRequest::Action action, DeleteTemplateRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTemplateRequest
 * class' copy constructor.
 */
DeleteTemplateRequestPrivate::DeleteTemplateRequestPrivate(
    const DeleteTemplateRequestPrivate &other, DeleteTemplateRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
