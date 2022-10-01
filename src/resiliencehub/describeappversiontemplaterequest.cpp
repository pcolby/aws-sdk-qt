// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappversiontemplaterequest.h"
#include "describeappversiontemplaterequest_p.h"
#include "describeappversiontemplateresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DescribeAppVersionTemplateRequest
 * \brief The DescribeAppVersionTemplateRequest class provides an interface for ResilienceHub DescribeAppVersionTemplate requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::describeAppVersionTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAppVersionTemplateRequest::DescribeAppVersionTemplateRequest(const DescribeAppVersionTemplateRequest &other)
    : ResilienceHubRequest(new DescribeAppVersionTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAppVersionTemplateRequest object.
 */
DescribeAppVersionTemplateRequest::DescribeAppVersionTemplateRequest()
    : ResilienceHubRequest(new DescribeAppVersionTemplateRequestPrivate(ResilienceHubRequest::DescribeAppVersionTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAppVersionTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAppVersionTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAppVersionTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAppVersionTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::DescribeAppVersionTemplateRequestPrivate
 * \brief The DescribeAppVersionTemplateRequestPrivate class provides private implementation for DescribeAppVersionTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DescribeAppVersionTemplateRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
DescribeAppVersionTemplateRequestPrivate::DescribeAppVersionTemplateRequestPrivate(
    const ResilienceHubRequest::Action action, DescribeAppVersionTemplateRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAppVersionTemplateRequest
 * class' copy constructor.
 */
DescribeAppVersionTemplateRequestPrivate::DescribeAppVersionTemplateRequestPrivate(
    const DescribeAppVersionTemplateRequestPrivate &other, DescribeAppVersionTemplateRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
