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

#include "deletejobtemplaterequest.h"
#include "deletejobtemplaterequest_p.h"
#include "deletejobtemplateresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/**
 * @class  DeleteJobTemplateRequest
 *
 * @brief  Implements MediaConvert DeleteJobTemplate requests.
 *
 * @see    MediaConvertClient::deleteJobTemplate
 */

/**
 * @brief  Constructs a new DeleteJobTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteJobTemplateRequest::DeleteJobTemplateRequest(const DeleteJobTemplateRequest &other)
    : MediaConvertRequest(new DeleteJobTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteJobTemplateRequest object.
 */
DeleteJobTemplateRequest::DeleteJobTemplateRequest()
    : MediaConvertRequest(new DeleteJobTemplateRequestPrivate(MediaConvertRequest::DeleteJobTemplateAction, this))
{

}

bool DeleteJobTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteJobTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteJobTemplateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteJobTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteJobTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteJobTemplateRequestPrivate
 *
 * @brief  Private implementation for DeleteJobTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteJobTemplateRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public DeleteJobTemplateRequest instance.
 */
DeleteJobTemplateRequestPrivate::DeleteJobTemplateRequestPrivate(
    const MediaConvertRequest::Action action, DeleteJobTemplateRequest * const q)
    : DeleteJobTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteJobTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteJobTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteJobTemplateRequest instance.
 */
DeleteJobTemplateRequestPrivate::DeleteJobTemplateRequestPrivate(
    const DeleteJobTemplateRequestPrivate &other, DeleteJobTemplateRequest * const q)
    : DeleteJobTemplatePrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
