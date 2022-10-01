// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
