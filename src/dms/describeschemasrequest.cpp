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

#include "describeschemasrequest.h"
#include "describeschemasrequest_p.h"
#include "describeschemasresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeSchemasRequest
 *
 * \brief The DescribeSchemasRequest class encapsulates DatabaseMigrationService DescribeSchemas requests.
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
 * \sa DatabaseMigrationServiceClient::describeSchemas
 */

/*!
 * @brief  Constructs a new DescribeSchemasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSchemasRequest::DescribeSchemasRequest(const DescribeSchemasRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeSchemasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeSchemasRequest object.
 */
DescribeSchemasRequest::DescribeSchemasRequest()
    : DatabaseMigrationServiceRequest(new DescribeSchemasRequestPrivate(DatabaseMigrationServiceRequest::DescribeSchemasAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSchemasRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeSchemasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSchemasResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSchemasRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSchemasResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeSchemasRequestPrivate
 *
 * @brief  Private implementation for DescribeSchemasRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeSchemasRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeSchemasRequest instance.
 */
DescribeSchemasRequestPrivate::DescribeSchemasRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeSchemasRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeSchemasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSchemasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSchemasRequest instance.
 */
DescribeSchemasRequestPrivate::DescribeSchemasRequestPrivate(
    const DescribeSchemasRequestPrivate &other, DescribeSchemasRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
