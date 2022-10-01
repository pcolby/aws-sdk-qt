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
