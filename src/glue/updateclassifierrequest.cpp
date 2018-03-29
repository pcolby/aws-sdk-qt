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

#include "updateclassifierrequest.h"
#include "updateclassifierrequest_p.h"
#include "updateclassifierresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  UpdateClassifierRequest
 *
 * @brief  Implements Glue UpdateClassifier requests.
 *
 * @see    GlueClient::updateClassifier
 */

/**
 * @brief  Constructs a new UpdateClassifierRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateClassifierRequest::UpdateClassifierRequest(const UpdateClassifierRequest &other)
    : GlueRequest(new UpdateClassifierRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateClassifierRequest object.
 */
UpdateClassifierRequest::UpdateClassifierRequest()
    : GlueRequest(new UpdateClassifierRequestPrivate(GlueRequest::UpdateClassifierAction, this))
{

}

bool UpdateClassifierRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateClassifierResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateClassifierResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClassifierRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClassifierResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateClassifierRequestPrivate
 *
 * @brief  Private implementation for UpdateClassifierRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateClassifierRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public UpdateClassifierRequest instance.
 */
UpdateClassifierRequestPrivate::UpdateClassifierRequestPrivate(
    const GlueRequest::Action action, UpdateClassifierRequest * const q)
    : UpdateClassifierPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateClassifierRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateClassifierRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateClassifierRequest instance.
 */
UpdateClassifierRequestPrivate::UpdateClassifierRequestPrivate(
    const UpdateClassifierRequestPrivate &other, UpdateClassifierRequest * const q)
    : UpdateClassifierPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
