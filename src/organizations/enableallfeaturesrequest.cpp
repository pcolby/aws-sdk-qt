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

#include "enableallfeaturesrequest.h"
#include "enableallfeaturesrequest_p.h"
#include "enableallfeaturesresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  EnableAllFeaturesRequest
 *
 * @brief  Implements Organizations EnableAllFeatures requests.
 *
 * @see    OrganizationsClient::enableAllFeatures
 */

/**
 * @brief  Constructs a new EnableAllFeaturesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableAllFeaturesRequest::EnableAllFeaturesRequest(const EnableAllFeaturesRequest &other)
    : OrganizationsRequest(new EnableAllFeaturesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableAllFeaturesRequest object.
 */
EnableAllFeaturesRequest::EnableAllFeaturesRequest()
    : OrganizationsRequest(new EnableAllFeaturesRequestPrivate(OrganizationsRequest::EnableAllFeaturesAction, this))
{

}

bool EnableAllFeaturesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableAllFeaturesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableAllFeaturesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * EnableAllFeaturesRequest::response(QNetworkReply * const reply) const
{
    return new EnableAllFeaturesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableAllFeaturesRequestPrivate
 *
 * @brief  Private implementation for EnableAllFeaturesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableAllFeaturesRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public EnableAllFeaturesRequest instance.
 */
EnableAllFeaturesRequestPrivate::EnableAllFeaturesRequestPrivate(
    const OrganizationsRequest::Action action, EnableAllFeaturesRequest * const q)
    : EnableAllFeaturesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableAllFeaturesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableAllFeaturesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableAllFeaturesRequest instance.
 */
EnableAllFeaturesRequestPrivate::EnableAllFeaturesRequestPrivate(
    const EnableAllFeaturesRequestPrivate &other, EnableAllFeaturesRequest * const q)
    : EnableAllFeaturesPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
