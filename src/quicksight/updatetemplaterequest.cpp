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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
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
