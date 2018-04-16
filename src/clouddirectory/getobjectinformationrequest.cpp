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

#include "getobjectinformationrequest.h"
#include "getobjectinformationrequest_p.h"
#include "getobjectinformationresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetObjectInformationRequest
 *
 * \brief The GetObjectInformationRequest class encapsulates CloudDirectory GetObjectInformation requests.
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
 * \sa CloudDirectoryClient::getObjectInformation
 */

/*!
 * @brief  Constructs a new GetObjectInformationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetObjectInformationRequest::GetObjectInformationRequest(const GetObjectInformationRequest &other)
    : CloudDirectoryRequest(new GetObjectInformationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetObjectInformationRequest object.
 */
GetObjectInformationRequest::GetObjectInformationRequest()
    : CloudDirectoryRequest(new GetObjectInformationRequestPrivate(CloudDirectoryRequest::GetObjectInformationAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectInformationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetObjectInformationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetObjectInformationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectInformationRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectInformationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetObjectInformationRequestPrivate
 *
 * @brief  Private implementation for GetObjectInformationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetObjectInformationRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public GetObjectInformationRequest instance.
 */
GetObjectInformationRequestPrivate::GetObjectInformationRequestPrivate(
    const CloudDirectoryRequest::Action action, GetObjectInformationRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetObjectInformationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetObjectInformationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetObjectInformationRequest instance.
 */
GetObjectInformationRequestPrivate::GetObjectInformationRequestPrivate(
    const GetObjectInformationRequestPrivate &other, GetObjectInformationRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
