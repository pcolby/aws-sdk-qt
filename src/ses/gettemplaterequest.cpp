// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettemplaterequest.h"
#include "gettemplaterequest_p.h"
#include "gettemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetTemplateRequest
 * \brief The GetTemplateRequest class provides an interface for Ses GetTemplate requests.
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
 * \sa SesClient::getTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetTemplateRequest::GetTemplateRequest(const GetTemplateRequest &other)
    : SesRequest(new GetTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTemplateRequest object.
 */
GetTemplateRequest::GetTemplateRequest()
    : SesRequest(new GetTemplateRequestPrivate(SesRequest::GetTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::GetTemplateRequestPrivate
 * \brief The GetTemplateRequestPrivate class provides private implementation for GetTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetTemplateRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
GetTemplateRequestPrivate::GetTemplateRequestPrivate(
    const SesRequest::Action action, GetTemplateRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTemplateRequest
 * class' copy constructor.
 */
GetTemplateRequestPrivate::GetTemplateRequestPrivate(
    const GetTemplateRequestPrivate &other, GetTemplateRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
