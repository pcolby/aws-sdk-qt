/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "importcatalogtogluerequest.h"
#include "importcatalogtogluerequest_p.h"
#include "importcatalogtoglueresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ImportCatalogToGlueRequest
 *
 * \brief The ImportCatalogToGlueRequest class provides an interface for Glue ImportCatalogToGlue requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::importCatalogToGlue
 */

/*!
 * @brief  Constructs a new ImportCatalogToGlueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportCatalogToGlueRequest::ImportCatalogToGlueRequest(const ImportCatalogToGlueRequest &other)
    : GlueRequest(new ImportCatalogToGlueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ImportCatalogToGlueRequest object.
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
 * @brief  Construct an ImportCatalogToGlueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportCatalogToGlueResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportCatalogToGlueRequest::response(QNetworkReply * const reply) const
{
    return new ImportCatalogToGlueResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ImportCatalogToGlueRequestPrivate
 *
 * @brief  Private implementation for ImportCatalogToGlueRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ImportCatalogToGlueRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public ImportCatalogToGlueRequest instance.
 */
ImportCatalogToGlueRequestPrivate::ImportCatalogToGlueRequestPrivate(
    const GlueRequest::Action action, ImportCatalogToGlueRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ImportCatalogToGlueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportCatalogToGlueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportCatalogToGlueRequest instance.
 */
ImportCatalogToGlueRequestPrivate::ImportCatalogToGlueRequestPrivate(
    const ImportCatalogToGlueRequestPrivate &other, ImportCatalogToGlueRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
