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

#include "createtemplaterequest.h"
#include "createtemplaterequest_p.h"
#include "createtemplateresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateTemplateRequest
 * \brief The CreateTemplateRequest class provides an interface for QuickSight CreateTemplate requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTemplateRequest::CreateTemplateRequest(const CreateTemplateRequest &other)
    : QuickSightRequest(new CreateTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTemplateRequest object.
 */
CreateTemplateRequest::CreateTemplateRequest()
    : QuickSightRequest(new CreateTemplateRequestPrivate(QuickSightRequest::CreateTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateTemplateRequestPrivate
 * \brief The CreateTemplateRequestPrivate class provides private implementation for CreateTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateTemplateRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateTemplateRequestPrivate::CreateTemplateRequestPrivate(
    const QuickSightRequest::Action action, CreateTemplateRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTemplateRequest
 * class' copy constructor.
 */
CreateTemplateRequestPrivate::CreateTemplateRequestPrivate(
    const CreateTemplateRequestPrivate &other, CreateTemplateRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
