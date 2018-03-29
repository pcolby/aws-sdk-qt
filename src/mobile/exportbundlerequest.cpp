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

#include "exportbundlerequest.h"
#include "exportbundlerequest_p.h"
#include "exportbundleresponse.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/**
 * @class  ExportBundleRequest
 *
 * @brief  Implements Mobile ExportBundle requests.
 *
 * @see    MobileClient::exportBundle
 */

/**
 * @brief  Constructs a new ExportBundleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ExportBundleRequest::ExportBundleRequest(const ExportBundleRequest &other)
    : MobileRequest(new ExportBundleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ExportBundleRequest object.
 */
ExportBundleRequest::ExportBundleRequest()
    : MobileRequest(new ExportBundleRequestPrivate(MobileRequest::ExportBundleAction, this))
{

}

bool ExportBundleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ExportBundleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ExportBundleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MobileClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportBundleRequest::response(QNetworkReply * const reply) const
{
    return new ExportBundleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ExportBundleRequestPrivate
 *
 * @brief  Private implementation for ExportBundleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ExportBundleRequestPrivate object.
 *
 * @param  action  Mobile action being performed.
 * @param  q       Pointer to this object's public ExportBundleRequest instance.
 */
ExportBundleRequestPrivate::ExportBundleRequestPrivate(
    const MobileRequest::Action action, ExportBundleRequest * const q)
    : ExportBundlePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ExportBundleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ExportBundleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ExportBundleRequest instance.
 */
ExportBundleRequestPrivate::ExportBundleRequestPrivate(
    const ExportBundleRequestPrivate &other, ExportBundleRequest * const q)
    : ExportBundlePrivate(other, q)
{

}

} // namespace Mobile
} // namespace QtAws
