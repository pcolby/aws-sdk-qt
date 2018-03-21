/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "importservercatalogrequest.h"
#include "importservercatalogrequest_p.h"
#include "importservercatalogresponse.h"
#include "smsrequest_p.h"

namespace AWS {
namespace SMS {

/**
 * @class  ImportServerCatalogRequest
 *
 * @brief  Implements SMS ImportServerCatalog requests.
 *
 * @see    SMSClient::importServerCatalog
 */

/**
 * @brief  Constructs a new ImportServerCatalogResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportServerCatalogResponse::ImportServerCatalogResponse(

/**
 * @brief  Constructs a new ImportServerCatalogRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportServerCatalogRequest::ImportServerCatalogRequest(const ImportServerCatalogRequest &other)
    : SMSRequest(new ImportServerCatalogRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ImportServerCatalogRequest object.
 */
ImportServerCatalogRequest::ImportServerCatalogRequest()
    : SMSRequest(new ImportServerCatalogRequestPrivate(SMSRequest::ImportServerCatalogAction, this))
{

}

bool ImportServerCatalogRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ImportServerCatalogResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportServerCatalogResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SMSClient::send
 */
AwsAbstractResponse * ImportServerCatalogRequest::response(QNetworkReply * const reply) const
{
    return new ImportServerCatalogResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ImportServerCatalogRequestPrivate
 *
 * @brief  Private implementation for ImportServerCatalogRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportServerCatalogRequestPrivate object.
 *
 * @param  action  SMS action being performed.
 * @param  q       Pointer to this object's public ImportServerCatalogRequest instance.
 */
ImportServerCatalogRequestPrivate::ImportServerCatalogRequestPrivate(
    const SMSRequest::Action action, ImportServerCatalogRequest * const q)
    : ImportServerCatalogPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ImportServerCatalogRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportServerCatalogRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportServerCatalogRequest instance.
 */
ImportServerCatalogRequestPrivate::ImportServerCatalogRequestPrivate(
    const ImportServerCatalogRequestPrivate &other, ImportServerCatalogRequest * const q)
    : ImportServerCatalogPrivate(other, q)
{

}
