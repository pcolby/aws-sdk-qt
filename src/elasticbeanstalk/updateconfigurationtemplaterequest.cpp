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

#include "updateconfigurationtemplaterequest.h"
#include "updateconfigurationtemplaterequest_p.h"
#include "updateconfigurationtemplateresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  UpdateConfigurationTemplateRequest
 *
 * @brief  Implements ElasticBeanstalk UpdateConfigurationTemplate requests.
 *
 * @see    ElasticBeanstalkClient::updateConfigurationTemplate
 */

/**
 * @brief  Constructs a new UpdateConfigurationTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateConfigurationTemplateRequest::UpdateConfigurationTemplateRequest(const UpdateConfigurationTemplateRequest &other)
    : ElasticBeanstalkRequest(new UpdateConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateConfigurationTemplateRequest object.
 */
UpdateConfigurationTemplateRequest::UpdateConfigurationTemplateRequest()
    : ElasticBeanstalkRequest(new UpdateConfigurationTemplateRequestPrivate(ElasticBeanstalkRequest::UpdateConfigurationTemplateAction, this))
{

}

bool UpdateConfigurationTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateConfigurationTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateConfigurationTemplateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * UpdateConfigurationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateConfigurationTemplateRequestPrivate
 *
 * @brief  Private implementation for UpdateConfigurationTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationTemplateRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public UpdateConfigurationTemplateRequest instance.
 */
UpdateConfigurationTemplateRequestPrivate::UpdateConfigurationTemplateRequestPrivate(
    const ElasticBeanstalkRequest::Action action, UpdateConfigurationTemplateRequest * const q)
    : UpdateConfigurationTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateConfigurationTemplateRequest instance.
 */
UpdateConfigurationTemplateRequestPrivate::UpdateConfigurationTemplateRequestPrivate(
    const UpdateConfigurationTemplateRequestPrivate &other, UpdateConfigurationTemplateRequest * const q)
    : UpdateConfigurationTemplatePrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
