/*
    Copyright 2013-2018 Paul Colby

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

#include "getcatalogimportstatusrequest.h"
#include "getcatalogimportstatusrequest_p.h"
#include "getcatalogimportstatusresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCatalogImportStatusRequest
 * \brief The GetCatalogImportStatusRequest class provides an interface for Glue GetCatalogImportStatus requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getCatalogImportStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetCatalogImportStatusRequest::GetCatalogImportStatusRequest(const GetCatalogImportStatusRequest &other)
    : GlueRequest(new GetCatalogImportStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCatalogImportStatusRequest object.
 */
GetCatalogImportStatusRequest::GetCatalogImportStatusRequest()
    : GlueRequest(new GetCatalogImportStatusRequestPrivate(GlueRequest::GetCatalogImportStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetCatalogImportStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCatalogImportStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCatalogImportStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetCatalogImportStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetCatalogImportStatusRequestPrivate
 * \brief The GetCatalogImportStatusRequestPrivate class provides private implementation for GetCatalogImportStatusRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetCatalogImportStatusRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetCatalogImportStatusRequestPrivate::GetCatalogImportStatusRequestPrivate(
    const GlueRequest::Action action, GetCatalogImportStatusRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCatalogImportStatusRequest
 * class' copy constructor.
 */
GetCatalogImportStatusRequestPrivate::GetCatalogImportStatusRequestPrivate(
    const GetCatalogImportStatusRequestPrivate &other, GetCatalogImportStatusRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
