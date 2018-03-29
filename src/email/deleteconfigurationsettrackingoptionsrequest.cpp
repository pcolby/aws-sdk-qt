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

#include "deleteconfigurationsettrackingoptionsrequest.h"
#include "deleteconfigurationsettrackingoptionsrequest_p.h"
#include "deleteconfigurationsettrackingoptionsresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  DeleteConfigurationSetTrackingOptionsRequest
 *
 * @brief  Implements SES DeleteConfigurationSetTrackingOptions requests.
 *
 * @see    SESClient::deleteConfigurationSetTrackingOptions
 */

/**
 * @brief  Constructs a new DeleteConfigurationSetTrackingOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteConfigurationSetTrackingOptionsRequest::DeleteConfigurationSetTrackingOptionsRequest(const DeleteConfigurationSetTrackingOptionsRequest &other)
    : SESRequest(new DeleteConfigurationSetTrackingOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteConfigurationSetTrackingOptionsRequest object.
 */
DeleteConfigurationSetTrackingOptionsRequest::DeleteConfigurationSetTrackingOptionsRequest()
    : SESRequest(new DeleteConfigurationSetTrackingOptionsRequestPrivate(SESRequest::DeleteConfigurationSetTrackingOptionsAction, this))
{

}

bool DeleteConfigurationSetTrackingOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteConfigurationSetTrackingOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteConfigurationSetTrackingOptionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConfigurationSetTrackingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigurationSetTrackingOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteConfigurationSetTrackingOptionsRequestPrivate
 *
 * @brief  Private implementation for DeleteConfigurationSetTrackingOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationSetTrackingOptionsRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DeleteConfigurationSetTrackingOptionsRequest instance.
 */
DeleteConfigurationSetTrackingOptionsRequestPrivate::DeleteConfigurationSetTrackingOptionsRequestPrivate(
    const SESRequest::Action action, DeleteConfigurationSetTrackingOptionsRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationSetTrackingOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigurationSetTrackingOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteConfigurationSetTrackingOptionsRequest instance.
 */
DeleteConfigurationSetTrackingOptionsRequestPrivate::DeleteConfigurationSetTrackingOptionsRequestPrivate(
    const DeleteConfigurationSetTrackingOptionsRequestPrivate &other, DeleteConfigurationSetTrackingOptionsRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
