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

#include "importcertificaterequest.h"
#include "importcertificaterequest_p.h"
#include "importcertificateresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  ImportCertificateRequest
 *
 * @brief  Implements DatabaseMigrationService ImportCertificate requests.
 *
 * @see    DatabaseMigrationServiceClient::importCertificate
 */

/**
 * @brief  Constructs a new ImportCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportCertificateResponse::ImportCertificateResponse(

/**
 * @brief  Constructs a new ImportCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportCertificateRequest::ImportCertificateRequest(const ImportCertificateRequest &other)
    : DatabaseMigrationServiceRequest(new ImportCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ImportCertificateRequest object.
 */
ImportCertificateRequest::ImportCertificateRequest()
    : DatabaseMigrationServiceRequest(new ImportCertificateRequestPrivate(DatabaseMigrationServiceRequest::ImportCertificateAction, this))
{

}

bool ImportCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ImportCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * ImportCertificateRequest::response(QNetworkReply * const reply) const
{
    return new ImportCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ImportCertificateRequestPrivate
 *
 * @brief  Private implementation for ImportCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportCertificateRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public ImportCertificateRequest instance.
 */
ImportCertificateRequestPrivate::ImportCertificateRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, ImportCertificateRequest * const q)
    : ImportCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ImportCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportCertificateRequest instance.
 */
ImportCertificateRequestPrivate::ImportCertificateRequestPrivate(
    const ImportCertificateRequestPrivate &other, ImportCertificateRequest * const q)
    : ImportCertificatePrivate(other, q)
{

}
