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

#include "createtrustrequest.h"
#include "createtrustrequest_p.h"
#include "createtrustresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::CreateTrustRequest
 *
 * \brief The CreateTrustRequest class encapsulates DirectoryService CreateTrust requests.
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
 * \sa DirectoryServiceClient::createTrust
 */

/*!
 * @brief  Constructs a new CreateTrustRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTrustRequest::CreateTrustRequest(const CreateTrustRequest &other)
    : DirectoryServiceRequest(new CreateTrustRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateTrustRequest object.
 */
CreateTrustRequest::CreateTrustRequest()
    : DirectoryServiceRequest(new CreateTrustRequestPrivate(DirectoryServiceRequest::CreateTrustAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrustRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateTrustResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTrustResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrustRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrustResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateTrustRequestPrivate
 *
 * @brief  Private implementation for CreateTrustRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateTrustRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public CreateTrustRequest instance.
 */
CreateTrustRequestPrivate::CreateTrustRequestPrivate(
    const DirectoryServiceRequest::Action action, CreateTrustRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateTrustRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTrustRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTrustRequest instance.
 */
CreateTrustRequestPrivate::CreateTrustRequestPrivate(
    const CreateTrustRequestPrivate &other, CreateTrustRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
