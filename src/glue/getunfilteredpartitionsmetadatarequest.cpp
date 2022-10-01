// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getunfilteredpartitionsmetadatarequest.h"
#include "getunfilteredpartitionsmetadatarequest_p.h"
#include "getunfilteredpartitionsmetadataresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUnfilteredPartitionsMetadataRequest
 * \brief The GetUnfilteredPartitionsMetadataRequest class provides an interface for Glue GetUnfilteredPartitionsMetadata requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getUnfilteredPartitionsMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
GetUnfilteredPartitionsMetadataRequest::GetUnfilteredPartitionsMetadataRequest(const GetUnfilteredPartitionsMetadataRequest &other)
    : GlueRequest(new GetUnfilteredPartitionsMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUnfilteredPartitionsMetadataRequest object.
 */
GetUnfilteredPartitionsMetadataRequest::GetUnfilteredPartitionsMetadataRequest()
    : GlueRequest(new GetUnfilteredPartitionsMetadataRequestPrivate(GlueRequest::GetUnfilteredPartitionsMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool GetUnfilteredPartitionsMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUnfilteredPartitionsMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUnfilteredPartitionsMetadataRequest::response(QNetworkReply * const reply) const
{
    return new GetUnfilteredPartitionsMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetUnfilteredPartitionsMetadataRequestPrivate
 * \brief The GetUnfilteredPartitionsMetadataRequestPrivate class provides private implementation for GetUnfilteredPartitionsMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUnfilteredPartitionsMetadataRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetUnfilteredPartitionsMetadataRequestPrivate::GetUnfilteredPartitionsMetadataRequestPrivate(
    const GlueRequest::Action action, GetUnfilteredPartitionsMetadataRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUnfilteredPartitionsMetadataRequest
 * class' copy constructor.
 */
GetUnfilteredPartitionsMetadataRequestPrivate::GetUnfilteredPartitionsMetadataRequestPrivate(
    const GetUnfilteredPartitionsMetadataRequestPrivate &other, GetUnfilteredPartitionsMetadataRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
