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

#include "createconfigurationtemplaterequest.h"
#include "createconfigurationtemplaterequest_p.h"
#include "createconfigurationtemplateresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  CreateConfigurationTemplateRequest
 *
 * @brief  Implements ElasticBeanstalk CreateConfigurationTemplate requests.
 *
 * @see    ElasticBeanstalkClient::createConfigurationTemplate
 */

/**
 * @brief  Constructs a new CreateConfigurationTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateConfigurationTemplateResponse::CreateConfigurationTemplateResponse(

/**
 * @brief  Constructs a new CreateConfigurationTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateConfigurationTemplateRequest::CreateConfigurationTemplateRequest(const CreateConfigurationTemplateRequest &other)
    : ElasticBeanstalkRequest(new CreateConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateConfigurationTemplateRequest object.
 */
CreateConfigurationTemplateRequest::CreateConfigurationTemplateRequest()
    : ElasticBeanstalkRequest(new CreateConfigurationTemplateRequestPrivate(ElasticBeanstalkRequest::CreateConfigurationTemplateAction, this))
{

}

bool CreateConfigurationTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateConfigurationTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateConfigurationTemplateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * CreateConfigurationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateConfigurationTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateConfigurationTemplateRequestPrivate
 *
 * @brief  Private implementation for CreateConfigurationTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConfigurationTemplateRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public CreateConfigurationTemplateRequest instance.
 */
CreateConfigurationTemplateRequestPrivate::CreateConfigurationTemplateRequestPrivate(
    const ElasticBeanstalkRequest::Action action, CreateConfigurationTemplateRequest * const q)
    : CreateConfigurationTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateConfigurationTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateConfigurationTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateConfigurationTemplateRequest instance.
 */
CreateConfigurationTemplateRequestPrivate::CreateConfigurationTemplateRequestPrivate(
    const CreateConfigurationTemplateRequestPrivate &other, CreateConfigurationTemplateRequest * const q)
    : CreateConfigurationTemplatePrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
