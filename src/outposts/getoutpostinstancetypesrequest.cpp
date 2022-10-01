// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoutpostinstancetypesrequest.h"
#include "getoutpostinstancetypesrequest_p.h"
#include "getoutpostinstancetypesresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::GetOutpostInstanceTypesRequest
 * \brief The GetOutpostInstanceTypesRequest class provides an interface for Outposts GetOutpostInstanceTypes requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::getOutpostInstanceTypes
 */

/*!
 * Constructs a copy of \a other.
 */
GetOutpostInstanceTypesRequest::GetOutpostInstanceTypesRequest(const GetOutpostInstanceTypesRequest &other)
    : OutpostsRequest(new GetOutpostInstanceTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOutpostInstanceTypesRequest object.
 */
GetOutpostInstanceTypesRequest::GetOutpostInstanceTypesRequest()
    : OutpostsRequest(new GetOutpostInstanceTypesRequestPrivate(OutpostsRequest::GetOutpostInstanceTypesAction, this))
{

}

/*!
 * \reimp
 */
bool GetOutpostInstanceTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOutpostInstanceTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOutpostInstanceTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetOutpostInstanceTypesResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::GetOutpostInstanceTypesRequestPrivate
 * \brief The GetOutpostInstanceTypesRequestPrivate class provides private implementation for GetOutpostInstanceTypesRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a GetOutpostInstanceTypesRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
GetOutpostInstanceTypesRequestPrivate::GetOutpostInstanceTypesRequestPrivate(
    const OutpostsRequest::Action action, GetOutpostInstanceTypesRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOutpostInstanceTypesRequest
 * class' copy constructor.
 */
GetOutpostInstanceTypesRequestPrivate::GetOutpostInstanceTypesRequestPrivate(
    const GetOutpostInstanceTypesRequestPrivate &other, GetOutpostInstanceTypesRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
