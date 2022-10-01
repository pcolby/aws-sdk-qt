// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettableversionsrequest.h"
#include "gettableversionsrequest_p.h"
#include "gettableversionsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableVersionsRequest
 * \brief The GetTableVersionsRequest class provides an interface for Glue GetTableVersions requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTableVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetTableVersionsRequest::GetTableVersionsRequest(const GetTableVersionsRequest &other)
    : GlueRequest(new GetTableVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTableVersionsRequest object.
 */
GetTableVersionsRequest::GetTableVersionsRequest()
    : GlueRequest(new GetTableVersionsRequestPrivate(GlueRequest::GetTableVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTableVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTableVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTableVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetTableVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetTableVersionsRequestPrivate
 * \brief The GetTableVersionsRequestPrivate class provides private implementation for GetTableVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTableVersionsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetTableVersionsRequestPrivate::GetTableVersionsRequestPrivate(
    const GlueRequest::Action action, GetTableVersionsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTableVersionsRequest
 * class' copy constructor.
 */
GetTableVersionsRequestPrivate::GetTableVersionsRequestPrivate(
    const GetTableVersionsRequestPrivate &other, GetTableVersionsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
