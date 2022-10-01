// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importcatalogtogluerequest.h"
#include "importcatalogtogluerequest_p.h"
#include "importcatalogtoglueresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ImportCatalogToGlueRequest
 * \brief The ImportCatalogToGlueRequest class provides an interface for Glue ImportCatalogToGlue requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::importCatalogToGlue
 */

/*!
 * Constructs a copy of \a other.
 */
ImportCatalogToGlueRequest::ImportCatalogToGlueRequest(const ImportCatalogToGlueRequest &other)
    : GlueRequest(new ImportCatalogToGlueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportCatalogToGlueRequest object.
 */
ImportCatalogToGlueRequest::ImportCatalogToGlueRequest()
    : GlueRequest(new ImportCatalogToGlueRequestPrivate(GlueRequest::ImportCatalogToGlueAction, this))
{

}

/*!
 * \reimp
 */
bool ImportCatalogToGlueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportCatalogToGlueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportCatalogToGlueRequest::response(QNetworkReply * const reply) const
{
    return new ImportCatalogToGlueResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ImportCatalogToGlueRequestPrivate
 * \brief The ImportCatalogToGlueRequestPrivate class provides private implementation for ImportCatalogToGlueRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ImportCatalogToGlueRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ImportCatalogToGlueRequestPrivate::ImportCatalogToGlueRequestPrivate(
    const GlueRequest::Action action, ImportCatalogToGlueRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportCatalogToGlueRequest
 * class' copy constructor.
 */
ImportCatalogToGlueRequestPrivate::ImportCatalogToGlueRequestPrivate(
    const ImportCatalogToGlueRequestPrivate &other, ImportCatalogToGlueRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
