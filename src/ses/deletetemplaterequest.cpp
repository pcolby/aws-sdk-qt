// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetemplaterequest.h"
#include "deletetemplaterequest_p.h"
#include "deletetemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteTemplateRequest
 * \brief The DeleteTemplateRequest class provides an interface for Ses DeleteTemplate requests.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::deleteTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTemplateRequest::DeleteTemplateRequest(const DeleteTemplateRequest &other)
    : SesRequest(new DeleteTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTemplateRequest object.
 */
DeleteTemplateRequest::DeleteTemplateRequest()
    : SesRequest(new DeleteTemplateRequestPrivate(SesRequest::DeleteTemplateAction, this))
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
 * \class QtAws::Ses::DeleteTemplateRequestPrivate
 * \brief The DeleteTemplateRequestPrivate class provides private implementation for DeleteTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteTemplateRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DeleteTemplateRequestPrivate::DeleteTemplateRequestPrivate(
    const SesRequest::Action action, DeleteTemplateRequest * const q)
    : SesRequestPrivate(action, q)
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
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
