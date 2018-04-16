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

#include "createendpointrequest.h"
#include "createendpointrequest_p.h"
#include "createendpointresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::CreateEndpointRequest
 *
 * \brief The CreateEndpointRequest class encapsulates DatabaseMigrationService CreateEndpoint requests.
 *
 * \ingroup DatabaseMigrationService
 *
 *  <fullname>AWS Database Migration Service</fullname>
 * 
 *  AWS Database Migration Service (AWS DMS) can migrate your data to and from the most widely used commercial and
 *  open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL,
 *  and SAP Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well
 *  as heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about AWS DMS, see the AWS DMS user guide at <a
 *  href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html"> What Is AWS Database Migration Service? </a>
 *
 * \sa DatabaseMigrationServiceClient::createEndpoint
 */

/*!
 * @brief  Constructs a new CreateEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateEndpointRequest::CreateEndpointRequest(const CreateEndpointRequest &other)
    : DatabaseMigrationServiceRequest(new CreateEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateEndpointRequest object.
 */
CreateEndpointRequest::CreateEndpointRequest()
    : DatabaseMigrationServiceRequest(new CreateEndpointRequestPrivate(DatabaseMigrationServiceRequest::CreateEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEndpointRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEndpointRequest::response(QNetworkReply * const reply) const
{
    return new CreateEndpointResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateEndpointRequestPrivate
 *
 * @brief  Private implementation for CreateEndpointRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateEndpointRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public CreateEndpointRequest instance.
 */
CreateEndpointRequestPrivate::CreateEndpointRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, CreateEndpointRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateEndpointRequest instance.
 */
CreateEndpointRequestPrivate::CreateEndpointRequestPrivate(
    const CreateEndpointRequestPrivate &other, CreateEndpointRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
