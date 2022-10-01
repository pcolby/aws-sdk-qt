// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetemplaterequest.h"
#include "updatetemplaterequest_p.h"
#include "updatetemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateTemplateRequest
 * \brief The UpdateTemplateRequest class provides an interface for Ses UpdateTemplate requests.
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
 * \sa SesClient::updateTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTemplateRequest::UpdateTemplateRequest(const UpdateTemplateRequest &other)
    : SesRequest(new UpdateTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTemplateRequest object.
 */
UpdateTemplateRequest::UpdateTemplateRequest()
    : SesRequest(new UpdateTemplateRequestPrivate(SesRequest::UpdateTemplateAction, this))
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
 * \class QtAws::Ses::UpdateTemplateRequestPrivate
 * \brief The UpdateTemplateRequestPrivate class provides private implementation for UpdateTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a UpdateTemplateRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
UpdateTemplateRequestPrivate::UpdateTemplateRequestPrivate(
    const SesRequest::Action action, UpdateTemplateRequest * const q)
    : SesRequestPrivate(action, q)
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
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
