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

#include "describeendpointtypesrequest.h"
#include "describeendpointtypesrequest_p.h"
#include "describeendpointtypesresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeEndpointTypesRequest
 *
 * \brief The DescribeEndpointTypesRequest class provides an interface for DatabaseMigrationService DescribeEndpointTypes requests.
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
 * \sa DatabaseMigrationServiceClient::describeEndpointTypes
 */

/*!
 * @brief  Constructs a new DescribeEndpointTypesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEndpointTypesRequest::DescribeEndpointTypesRequest(const DescribeEndpointTypesRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeEndpointTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeEndpointTypesRequest object.
 */
DescribeEndpointTypesRequest::DescribeEndpointTypesRequest()
    : DatabaseMigrationServiceRequest(new DescribeEndpointTypesRequestPrivate(DatabaseMigrationServiceRequest::DescribeEndpointTypesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEndpointTypesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeEndpointTypesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEndpointTypesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEndpointTypesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEndpointTypesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeEndpointTypesRequestPrivate
 *
 * @brief  Private implementation for DescribeEndpointTypesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointTypesRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeEndpointTypesRequest instance.
 */
DescribeEndpointTypesRequestPrivate::DescribeEndpointTypesRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeEndpointTypesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointTypesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEndpointTypesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEndpointTypesRequest instance.
 */
DescribeEndpointTypesRequestPrivate::DescribeEndpointTypesRequestPrivate(
    const DescribeEndpointTypesRequestPrivate &other, DescribeEndpointTypesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
