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
