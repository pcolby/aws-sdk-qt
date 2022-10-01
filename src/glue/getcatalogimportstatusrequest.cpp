// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
