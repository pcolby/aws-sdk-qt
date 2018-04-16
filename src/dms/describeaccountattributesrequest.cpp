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

#include "describeaccountattributesrequest.h"
#include "describeaccountattributesrequest_p.h"
#include "describeaccountattributesresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeAccountAttributesRequest
 *
 * \brief The DescribeAccountAttributesRequest class encapsulates DatabaseMigrationService DescribeAccountAttributes requests.
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
 * \sa DatabaseMigrationServiceClient::describeAccountAttributes
 */

/*!
 * @brief  Constructs a new DescribeAccountAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAccountAttributesRequest::DescribeAccountAttributesRequest(const DescribeAccountAttributesRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeAccountAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeAccountAttributesRequest object.
 */
DescribeAccountAttributesRequest::DescribeAccountAttributesRequest()
    : DatabaseMigrationServiceRequest(new DescribeAccountAttributesRequestPrivate(DatabaseMigrationServiceRequest::DescribeAccountAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccountAttributesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeAccountAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAccountAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccountAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountAttributesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeAccountAttributesRequestPrivate
 *
 * @brief  Private implementation for DescribeAccountAttributesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeAccountAttributesRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeAccountAttributesRequest instance.
 */
DescribeAccountAttributesRequestPrivate::DescribeAccountAttributesRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeAccountAttributesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeAccountAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAccountAttributesRequest instance.
 */
DescribeAccountAttributesRequestPrivate::DescribeAccountAttributesRequestPrivate(
    const DescribeAccountAttributesRequestPrivate &other, DescribeAccountAttributesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
