// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getunfilteredtablemetadatarequest.h"
#include "getunfilteredtablemetadatarequest_p.h"
#include "getunfilteredtablemetadataresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUnfilteredTableMetadataRequest
 * \brief The GetUnfilteredTableMetadataRequest class provides an interface for Glue GetUnfilteredTableMetadata requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getUnfilteredTableMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
GetUnfilteredTableMetadataRequest::GetUnfilteredTableMetadataRequest(const GetUnfilteredTableMetadataRequest &other)
    : GlueRequest(new GetUnfilteredTableMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUnfilteredTableMetadataRequest object.
 */
GetUnfilteredTableMetadataRequest::GetUnfilteredTableMetadataRequest()
    : GlueRequest(new GetUnfilteredTableMetadataRequestPrivate(GlueRequest::GetUnfilteredTableMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool GetUnfilteredTableMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUnfilteredTableMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUnfilteredTableMetadataRequest::response(QNetworkReply * const reply) const
{
    return new GetUnfilteredTableMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetUnfilteredTableMetadataRequestPrivate
 * \brief The GetUnfilteredTableMetadataRequestPrivate class provides private implementation for GetUnfilteredTableMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUnfilteredTableMetadataRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetUnfilteredTableMetadataRequestPrivate::GetUnfilteredTableMetadataRequestPrivate(
    const GlueRequest::Action action, GetUnfilteredTableMetadataRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUnfilteredTableMetadataRequest
 * class' copy constructor.
 */
GetUnfilteredTableMetadataRequestPrivate::GetUnfilteredTableMetadataRequestPrivate(
    const GetUnfilteredTableMetadataRequestPrivate &other, GetUnfilteredTableMetadataRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
