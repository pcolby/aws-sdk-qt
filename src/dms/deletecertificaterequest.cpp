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

#include "deletecertificaterequest.h"
#include "deletecertificaterequest_p.h"
#include "deletecertificateresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DeleteCertificateRequest
 *
 * @brief  Implements DatabaseMigrationService DeleteCertificate requests.
 *
 * @see    DatabaseMigrationServiceClient::deleteCertificate
 */

/**
 * @brief  Constructs a new DeleteCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCertificateResponse::DeleteCertificateResponse(

/**
 * @brief  Constructs a new DeleteCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCertificateRequest::DeleteCertificateRequest(const DeleteCertificateRequest &other)
    : DatabaseMigrationServiceRequest(new DeleteCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCertificateRequest object.
 */
DeleteCertificateRequest::DeleteCertificateRequest()
    : DatabaseMigrationServiceRequest(new DeleteCertificateRequestPrivate(DatabaseMigrationServiceRequest::DeleteCertificateAction, this))
{

}

bool DeleteCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * DeleteCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCertificateRequestPrivate
 *
 * @brief  Private implementation for DeleteCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCertificateRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DeleteCertificateRequest instance.
 */
DeleteCertificateRequestPrivate::DeleteCertificateRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DeleteCertificateRequest * const q)
    : DeleteCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCertificateRequest instance.
 */
DeleteCertificateRequestPrivate::DeleteCertificateRequestPrivate(
    const DeleteCertificateRequestPrivate &other, DeleteCertificateRequest * const q)
    : DeleteCertificatePrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
