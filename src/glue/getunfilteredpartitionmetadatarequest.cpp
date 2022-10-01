// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getunfilteredpartitionmetadatarequest.h"
#include "getunfilteredpartitionmetadatarequest_p.h"
#include "getunfilteredpartitionmetadataresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUnfilteredPartitionMetadataRequest
 * \brief The GetUnfilteredPartitionMetadataRequest class provides an interface for Glue GetUnfilteredPartitionMetadata requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getUnfilteredPartitionMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
GetUnfilteredPartitionMetadataRequest::GetUnfilteredPartitionMetadataRequest(const GetUnfilteredPartitionMetadataRequest &other)
    : GlueRequest(new GetUnfilteredPartitionMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUnfilteredPartitionMetadataRequest object.
 */
GetUnfilteredPartitionMetadataRequest::GetUnfilteredPartitionMetadataRequest()
    : GlueRequest(new GetUnfilteredPartitionMetadataRequestPrivate(GlueRequest::GetUnfilteredPartitionMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool GetUnfilteredPartitionMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUnfilteredPartitionMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUnfilteredPartitionMetadataRequest::response(QNetworkReply * const reply) const
{
    return new GetUnfilteredPartitionMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetUnfilteredPartitionMetadataRequestPrivate
 * \brief The GetUnfilteredPartitionMetadataRequestPrivate class provides private implementation for GetUnfilteredPartitionMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUnfilteredPartitionMetadataRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetUnfilteredPartitionMetadataRequestPrivate::GetUnfilteredPartitionMetadataRequestPrivate(
    const GlueRequest::Action action, GetUnfilteredPartitionMetadataRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUnfilteredPartitionMetadataRequest
 * class' copy constructor.
 */
GetUnfilteredPartitionMetadataRequestPrivate::GetUnfilteredPartitionMetadataRequestPrivate(
    const GetUnfilteredPartitionMetadataRequestPrivate &other, GetUnfilteredPartitionMetadataRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
