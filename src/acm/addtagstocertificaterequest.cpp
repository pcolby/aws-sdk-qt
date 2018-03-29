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

#include "addtagstocertificaterequest.h"
#include "addtagstocertificaterequest_p.h"
#include "addtagstocertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/**
 * @class  AddTagsToCertificateRequest
 *
 * @brief  Implements ACM AddTagsToCertificate requests.
 *
 * @see    ACMClient::addTagsToCertificate
 */

/**
 * @brief  Constructs a new AddTagsToCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddTagsToCertificateRequest::AddTagsToCertificateRequest(const AddTagsToCertificateRequest &other)
    : ACMRequest(new AddTagsToCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddTagsToCertificateRequest object.
 */
AddTagsToCertificateRequest::AddTagsToCertificateRequest()
    : ACMRequest(new AddTagsToCertificateRequestPrivate(ACMRequest::AddTagsToCertificateAction, this))
{

}

bool AddTagsToCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddTagsToCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddTagsToCertificateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsToCertificateRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsToCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddTagsToCertificateRequestPrivate
 *
 * @brief  Private implementation for AddTagsToCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToCertificateRequestPrivate object.
 *
 * @param  action  ACM action being performed.
 * @param  q       Pointer to this object's public AddTagsToCertificateRequest instance.
 */
AddTagsToCertificateRequestPrivate::AddTagsToCertificateRequestPrivate(
    const ACMRequest::Action action, AddTagsToCertificateRequest * const q)
    : AddTagsToCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddTagsToCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddTagsToCertificateRequest instance.
 */
AddTagsToCertificateRequestPrivate::AddTagsToCertificateRequestPrivate(
    const AddTagsToCertificateRequestPrivate &other, AddTagsToCertificateRequest * const q)
    : AddTagsToCertificatePrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
