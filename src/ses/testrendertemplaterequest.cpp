// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testrendertemplaterequest.h"
#include "testrendertemplaterequest_p.h"
#include "testrendertemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::TestRenderTemplateRequest
 * \brief The TestRenderTemplateRequest class provides an interface for Ses TestRenderTemplate requests.
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
 * \sa SesClient::testRenderTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
TestRenderTemplateRequest::TestRenderTemplateRequest(const TestRenderTemplateRequest &other)
    : SesRequest(new TestRenderTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestRenderTemplateRequest object.
 */
TestRenderTemplateRequest::TestRenderTemplateRequest()
    : SesRequest(new TestRenderTemplateRequestPrivate(SesRequest::TestRenderTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool TestRenderTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestRenderTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestRenderTemplateRequest::response(QNetworkReply * const reply) const
{
    return new TestRenderTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::TestRenderTemplateRequestPrivate
 * \brief The TestRenderTemplateRequestPrivate class provides private implementation for TestRenderTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a TestRenderTemplateRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
TestRenderTemplateRequestPrivate::TestRenderTemplateRequestPrivate(
    const SesRequest::Action action, TestRenderTemplateRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestRenderTemplateRequest
 * class' copy constructor.
 */
TestRenderTemplateRequestPrivate::TestRenderTemplateRequestPrivate(
    const TestRenderTemplateRequestPrivate &other, TestRenderTemplateRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
