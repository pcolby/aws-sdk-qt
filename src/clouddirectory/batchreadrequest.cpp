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

#include "batchreadrequest.h"
#include "batchreadrequest_p.h"
#include "batchreadresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::BatchReadRequest
 *
 * \brief The BatchReadRequest class provides an interface for CloudDirectory BatchRead requests.
 *
 * \ingroup CloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 *
 * \sa CloudDirectoryClient::batchRead
 */

/*!
 * @brief  Constructs a new BatchReadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchReadRequest::BatchReadRequest(const BatchReadRequest &other)
    : CloudDirectoryRequest(new BatchReadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new BatchReadRequest object.
 */
BatchReadRequest::BatchReadRequest()
    : CloudDirectoryRequest(new BatchReadRequestPrivate(CloudDirectoryRequest::BatchReadAction, this))
{

}

/*!
 * \reimp
 */
bool BatchReadRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an BatchReadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchReadResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchReadRequest::response(QNetworkReply * const reply) const
{
    return new BatchReadResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  BatchReadRequestPrivate
 *
 * @brief  Private implementation for BatchReadRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new BatchReadRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public BatchReadRequest instance.
 */
BatchReadRequestPrivate::BatchReadRequestPrivate(
    const CloudDirectoryRequest::Action action, BatchReadRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new BatchReadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchReadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchReadRequest instance.
 */
BatchReadRequestPrivate::BatchReadRequestPrivate(
    const BatchReadRequestPrivate &other, BatchReadRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
