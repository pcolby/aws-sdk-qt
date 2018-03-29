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

#include "publishversionrequest.h"
#include "publishversionrequest_p.h"
#include "publishversionresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/**
 * @class  PublishVersionRequest
 *
 * @brief  Implements Lambda PublishVersion requests.
 *
 * @see    LambdaClient::publishVersion
 */

/**
 * @brief  Constructs a new PublishVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PublishVersionRequest::PublishVersionRequest(const PublishVersionRequest &other)
    : LambdaRequest(new PublishVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PublishVersionRequest object.
 */
PublishVersionRequest::PublishVersionRequest()
    : LambdaRequest(new PublishVersionRequestPrivate(LambdaRequest::PublishVersionAction, this))
{

}

bool PublishVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PublishVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PublishVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LambdaClient::send
 */
QtAws::Core::AwsAbstractResponse * PublishVersionRequest::response(QNetworkReply * const reply) const
{
    return new PublishVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PublishVersionRequestPrivate
 *
 * @brief  Private implementation for PublishVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PublishVersionRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public PublishVersionRequest instance.
 */
PublishVersionRequestPrivate::PublishVersionRequestPrivate(
    const LambdaRequest::Action action, PublishVersionRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PublishVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PublishVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PublishVersionRequest instance.
 */
PublishVersionRequestPrivate::PublishVersionRequestPrivate(
    const PublishVersionRequestPrivate &other, PublishVersionRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
