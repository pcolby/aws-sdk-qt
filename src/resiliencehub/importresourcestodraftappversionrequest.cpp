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

#include "importresourcestodraftappversionrequest.h"
#include "importresourcestodraftappversionrequest_p.h"
#include "importresourcestodraftappversionresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ImportResourcesToDraftAppVersionRequest
 * \brief The ImportResourcesToDraftAppVersionRequest class provides an interface for ResilienceHub ImportResourcesToDraftAppVersion requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::importResourcesToDraftAppVersion
 */

/*!
 * Constructs a copy of \a other.
 */
ImportResourcesToDraftAppVersionRequest::ImportResourcesToDraftAppVersionRequest(const ImportResourcesToDraftAppVersionRequest &other)
    : ResilienceHubRequest(new ImportResourcesToDraftAppVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportResourcesToDraftAppVersionRequest object.
 */
ImportResourcesToDraftAppVersionRequest::ImportResourcesToDraftAppVersionRequest()
    : ResilienceHubRequest(new ImportResourcesToDraftAppVersionRequestPrivate(ResilienceHubRequest::ImportResourcesToDraftAppVersionAction, this))
{

}

/*!
 * \reimp
 */
bool ImportResourcesToDraftAppVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportResourcesToDraftAppVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportResourcesToDraftAppVersionRequest::response(QNetworkReply * const reply) const
{
    return new ImportResourcesToDraftAppVersionResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ImportResourcesToDraftAppVersionRequestPrivate
 * \brief The ImportResourcesToDraftAppVersionRequestPrivate class provides private implementation for ImportResourcesToDraftAppVersionRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ImportResourcesToDraftAppVersionRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ImportResourcesToDraftAppVersionRequestPrivate::ImportResourcesToDraftAppVersionRequestPrivate(
    const ResilienceHubRequest::Action action, ImportResourcesToDraftAppVersionRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportResourcesToDraftAppVersionRequest
 * class' copy constructor.
 */
ImportResourcesToDraftAppVersionRequestPrivate::ImportResourcesToDraftAppVersionRequestPrivate(
    const ImportResourcesToDraftAppVersionRequestPrivate &other, ImportResourcesToDraftAppVersionRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
