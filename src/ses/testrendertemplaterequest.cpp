/*
    Copyright 2013-2019 Paul Colby

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

#include "testrendertemplaterequest.h"
#include "testrendertemplaterequest_p.h"
#include "testrendertemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::TestRenderTemplateRequest
 * \brief The TestRenderTemplateRequest class provides an interface for SES TestRenderTemplate requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
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
 * \class QtAws::SES::TestRenderTemplateRequestPrivate
 * \brief The TestRenderTemplateRequestPrivate class provides private implementation for TestRenderTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSES
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

} // namespace SES
} // namespace QtAws
