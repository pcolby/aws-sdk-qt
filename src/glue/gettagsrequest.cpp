// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettagsrequest.h"
#include "gettagsrequest_p.h"
#include "gettagsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTagsRequest
 * \brief The GetTagsRequest class provides an interface for Glue GetTags requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTags
 */

/*!
 * Constructs a copy of \a other.
 */
GetTagsRequest::GetTagsRequest(const GetTagsRequest &other)
    : GlueRequest(new GetTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTagsRequest object.
 */
GetTagsRequest::GetTagsRequest()
    : GlueRequest(new GetTagsRequestPrivate(GlueRequest::GetTagsAction, this))
{

}

/*!
 * \reimp
 */
bool GetTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTagsRequest::response(QNetworkReply * const reply) const
{
    return new GetTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetTagsRequestPrivate
 * \brief The GetTagsRequestPrivate class provides private implementation for GetTagsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTagsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetTagsRequestPrivate::GetTagsRequestPrivate(
    const GlueRequest::Action action, GetTagsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTagsRequest
 * class' copy constructor.
 */
GetTagsRequestPrivate::GetTagsRequestPrivate(
    const GetTagsRequestPrivate &other, GetTagsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
