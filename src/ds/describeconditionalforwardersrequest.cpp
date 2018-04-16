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

#include "describeconditionalforwardersrequest.h"
#include "describeconditionalforwardersrequest_p.h"
#include "describeconditionalforwardersresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DescribeConditionalForwardersRequest
 *
 * \brief The DescribeConditionalForwardersRequest class provides an interface for DirectoryService DescribeConditionalForwarders requests.
 *
 * \ingroup DirectoryService
 *
 *  <fullname>AWS Directory Service</fullname>
 * 
 *  AWS Directory Service is a web service that makes it easy for you to setup and run directories in the AWS cloud, or
 *  connect your AWS resources with an existing on-premises Microsoft Active Directory. This guide provides detailed
 *  information about AWS Directory Service operations, data types, parameters, and errors. For information about AWS
 *  Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 * 
 *  Guide</a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to AWS Directory Service and
 *  other AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa DirectoryServiceClient::describeConditionalForwarders
 */

/*!
 * @brief  Constructs a new DescribeConditionalForwardersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConditionalForwardersRequest::DescribeConditionalForwardersRequest(const DescribeConditionalForwardersRequest &other)
    : DirectoryServiceRequest(new DescribeConditionalForwardersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeConditionalForwardersRequest object.
 */
DescribeConditionalForwardersRequest::DescribeConditionalForwardersRequest()
    : DirectoryServiceRequest(new DescribeConditionalForwardersRequestPrivate(DirectoryServiceRequest::DescribeConditionalForwardersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConditionalForwardersRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeConditionalForwardersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConditionalForwardersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConditionalForwardersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConditionalForwardersResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeConditionalForwardersRequestPrivate
 *
 * @brief  Private implementation for DescribeConditionalForwardersRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeConditionalForwardersRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public DescribeConditionalForwardersRequest instance.
 */
DescribeConditionalForwardersRequestPrivate::DescribeConditionalForwardersRequestPrivate(
    const DirectoryServiceRequest::Action action, DescribeConditionalForwardersRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeConditionalForwardersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConditionalForwardersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConditionalForwardersRequest instance.
 */
DescribeConditionalForwardersRequestPrivate::DescribeConditionalForwardersRequestPrivate(
    const DescribeConditionalForwardersRequestPrivate &other, DescribeConditionalForwardersRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
