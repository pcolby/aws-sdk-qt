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

#include "addfacettoobjectrequest.h"
#include "addfacettoobjectrequest_p.h"
#include "addfacettoobjectresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::AddFacetToObjectRequest
 *
 * \brief The AddFacetToObjectRequest class provides an interface for CloudDirectory AddFacetToObject requests.
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
 * \sa CloudDirectoryClient::addFacetToObject
 */

/*!
 * @brief  Constructs a new AddFacetToObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddFacetToObjectRequest::AddFacetToObjectRequest(const AddFacetToObjectRequest &other)
    : CloudDirectoryRequest(new AddFacetToObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new AddFacetToObjectRequest object.
 */
AddFacetToObjectRequest::AddFacetToObjectRequest()
    : CloudDirectoryRequest(new AddFacetToObjectRequestPrivate(CloudDirectoryRequest::AddFacetToObjectAction, this))
{

}

/*!
 * \reimp
 */
bool AddFacetToObjectRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an AddFacetToObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddFacetToObjectResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * AddFacetToObjectRequest::response(QNetworkReply * const reply) const
{
    return new AddFacetToObjectResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  AddFacetToObjectRequestPrivate
 *
 * @brief  Private implementation for AddFacetToObjectRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AddFacetToObjectRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public AddFacetToObjectRequest instance.
 */
AddFacetToObjectRequestPrivate::AddFacetToObjectRequestPrivate(
    const CloudDirectoryRequest::Action action, AddFacetToObjectRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new AddFacetToObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddFacetToObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddFacetToObjectRequest instance.
 */
AddFacetToObjectRequestPrivate::AddFacetToObjectRequestPrivate(
    const AddFacetToObjectRequestPrivate &other, AddFacetToObjectRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
