// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedraftappversionresourcesimportstatusrequest.h"
#include "describedraftappversionresourcesimportstatusrequest_p.h"
#include "describedraftappversionresourcesimportstatusresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DescribeDraftAppVersionResourcesImportStatusRequest
 * \brief The DescribeDraftAppVersionResourcesImportStatusRequest class provides an interface for ResilienceHub DescribeDraftAppVersionResourcesImportStatus requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::describeDraftAppVersionResourcesImportStatus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDraftAppVersionResourcesImportStatusRequest::DescribeDraftAppVersionResourcesImportStatusRequest(const DescribeDraftAppVersionResourcesImportStatusRequest &other)
    : ResilienceHubRequest(new DescribeDraftAppVersionResourcesImportStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDraftAppVersionResourcesImportStatusRequest object.
 */
DescribeDraftAppVersionResourcesImportStatusRequest::DescribeDraftAppVersionResourcesImportStatusRequest()
    : ResilienceHubRequest(new DescribeDraftAppVersionResourcesImportStatusRequestPrivate(ResilienceHubRequest::DescribeDraftAppVersionResourcesImportStatusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDraftAppVersionResourcesImportStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDraftAppVersionResourcesImportStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDraftAppVersionResourcesImportStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDraftAppVersionResourcesImportStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::DescribeDraftAppVersionResourcesImportStatusRequestPrivate
 * \brief The DescribeDraftAppVersionResourcesImportStatusRequestPrivate class provides private implementation for DescribeDraftAppVersionResourcesImportStatusRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DescribeDraftAppVersionResourcesImportStatusRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
DescribeDraftAppVersionResourcesImportStatusRequestPrivate::DescribeDraftAppVersionResourcesImportStatusRequestPrivate(
    const ResilienceHubRequest::Action action, DescribeDraftAppVersionResourcesImportStatusRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDraftAppVersionResourcesImportStatusRequest
 * class' copy constructor.
 */
DescribeDraftAppVersionResourcesImportStatusRequestPrivate::DescribeDraftAppVersionResourcesImportStatusRequestPrivate(
    const DescribeDraftAppVersionResourcesImportStatusRequestPrivate &other, DescribeDraftAppVersionResourcesImportStatusRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
