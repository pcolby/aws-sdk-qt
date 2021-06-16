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

#include "startreportcreationrequest.h"
#include "startreportcreationrequest_p.h"
#include "startreportcreationresponse.h"
#include "resourcegroupstaggingapirequest_p.h"

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::StartReportCreationRequest
 * \brief The StartReportCreationRequest class provides an interface for ResourceGroupsTaggingAPI StartReportCreation requests.
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 *
 * \sa ResourceGroupsTaggingAPIClient::startReportCreation
 */

/*!
 * Constructs a copy of \a other.
 */
StartReportCreationRequest::StartReportCreationRequest(const StartReportCreationRequest &other)
    : ResourceGroupsTaggingAPIRequest(new StartReportCreationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartReportCreationRequest object.
 */
StartReportCreationRequest::StartReportCreationRequest()
    : ResourceGroupsTaggingAPIRequest(new StartReportCreationRequestPrivate(ResourceGroupsTaggingAPIRequest::StartReportCreationAction, this))
{

}

/*!
 * \reimp
 */
bool StartReportCreationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartReportCreationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartReportCreationRequest::response(QNetworkReply * const reply) const
{
    return new StartReportCreationResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::StartReportCreationRequestPrivate
 * \brief The StartReportCreationRequestPrivate class provides private implementation for StartReportCreationRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a StartReportCreationRequestPrivate object for ResourceGroupsTaggingAPI \a action,
 * with public implementation \a q.
 */
StartReportCreationRequestPrivate::StartReportCreationRequestPrivate(
    const ResourceGroupsTaggingAPIRequest::Action action, StartReportCreationRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartReportCreationRequest
 * class' copy constructor.
 */
StartReportCreationRequestPrivate::StartReportCreationRequestPrivate(
    const StartReportCreationRequestPrivate &other, StartReportCreationRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
