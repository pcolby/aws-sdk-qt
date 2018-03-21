/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "refreshtrustedadvisorcheckrequest.h"
#include "refreshtrustedadvisorcheckrequest_p.h"
#include "refreshtrustedadvisorcheckresponse.h"
#include "supportrequest_p.h"

namespace AWS {
namespace Support {

/**
 * @class  RefreshTrustedAdvisorCheckRequest
 *
 * @brief  Implements Support RefreshTrustedAdvisorCheck requests.
 *
 * @see    SupportClient::refreshTrustedAdvisorCheck
 */

/**
 * @brief  Constructs a new RefreshTrustedAdvisorCheckResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RefreshTrustedAdvisorCheckResponse::RefreshTrustedAdvisorCheckResponse(

/**
 * @brief  Constructs a new RefreshTrustedAdvisorCheckRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RefreshTrustedAdvisorCheckRequest::RefreshTrustedAdvisorCheckRequest(const RefreshTrustedAdvisorCheckRequest &other)
    : SupportRequest(new RefreshTrustedAdvisorCheckRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RefreshTrustedAdvisorCheckRequest object.
 */
RefreshTrustedAdvisorCheckRequest::RefreshTrustedAdvisorCheckRequest()
    : SupportRequest(new RefreshTrustedAdvisorCheckRequestPrivate(SupportRequest::RefreshTrustedAdvisorCheckAction, this))
{

}

bool RefreshTrustedAdvisorCheckRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RefreshTrustedAdvisorCheckResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RefreshTrustedAdvisorCheckResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SupportClient::send
 */
AwsAbstractResponse * RefreshTrustedAdvisorCheckRequest::response(QNetworkReply * const reply) const
{
    return new RefreshTrustedAdvisorCheckResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RefreshTrustedAdvisorCheckRequestPrivate
 *
 * @brief  Private implementation for RefreshTrustedAdvisorCheckRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RefreshTrustedAdvisorCheckRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public RefreshTrustedAdvisorCheckRequest instance.
 */
RefreshTrustedAdvisorCheckRequestPrivate::RefreshTrustedAdvisorCheckRequestPrivate(
    const SupportRequest::Action action, RefreshTrustedAdvisorCheckRequest * const q)
    : RefreshTrustedAdvisorCheckPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RefreshTrustedAdvisorCheckRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RefreshTrustedAdvisorCheckRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RefreshTrustedAdvisorCheckRequest instance.
 */
RefreshTrustedAdvisorCheckRequestPrivate::RefreshTrustedAdvisorCheckRequestPrivate(
    const RefreshTrustedAdvisorCheckRequestPrivate &other, RefreshTrustedAdvisorCheckRequest * const q)
    : RefreshTrustedAdvisorCheckPrivate(other, q)
{

}

} // namespace Support
} // namespace AWS
