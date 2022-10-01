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
