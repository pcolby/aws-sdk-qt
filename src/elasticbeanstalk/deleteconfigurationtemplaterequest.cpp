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

#include "deleteconfigurationtemplaterequest.h"
#include "deleteconfigurationtemplaterequest_p.h"
#include "deleteconfigurationtemplateresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DeleteConfigurationTemplateRequest
 *
 * @brief  Implements ElasticBeanstalk DeleteConfigurationTemplate requests.
 *
 * @see    ElasticBeanstalkClient::deleteConfigurationTemplate
 */

/**
 * @brief  Constructs a new DeleteConfigurationTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteConfigurationTemplateRequest::DeleteConfigurationTemplateRequest(const DeleteConfigurationTemplateRequest &other)
    : ElasticBeanstalkRequest(new DeleteConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteConfigurationTemplateRequest object.
 */
DeleteConfigurationTemplateRequest::DeleteConfigurationTemplateRequest()
    : ElasticBeanstalkRequest(new DeleteConfigurationTemplateRequestPrivate(ElasticBeanstalkRequest::DeleteConfigurationTemplateAction, this))
{

}

bool DeleteConfigurationTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteConfigurationTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteConfigurationTemplateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * DeleteConfigurationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigurationTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteConfigurationTemplateRequestPrivate
 *
 * @brief  Private implementation for DeleteConfigurationTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationTemplateRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DeleteConfigurationTemplateRequest instance.
 */
DeleteConfigurationTemplateRequestPrivate::DeleteConfigurationTemplateRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DeleteConfigurationTemplateRequest * const q)
    : DeleteConfigurationTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigurationTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteConfigurationTemplateRequest instance.
 */
DeleteConfigurationTemplateRequestPrivate::DeleteConfigurationTemplateRequestPrivate(
    const DeleteConfigurationTemplateRequestPrivate &other, DeleteConfigurationTemplateRequest * const q)
    : DeleteConfigurationTemplatePrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
