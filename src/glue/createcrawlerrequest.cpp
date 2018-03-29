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

#include "createcrawlerrequest.h"
#include "createcrawlerrequest_p.h"
#include "createcrawlerresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  CreateCrawlerRequest
 *
 * @brief  Implements Glue CreateCrawler requests.
 *
 * @see    GlueClient::createCrawler
 */

/**
 * @brief  Constructs a new CreateCrawlerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCrawlerRequest::CreateCrawlerRequest(const CreateCrawlerRequest &other)
    : GlueRequest(new CreateCrawlerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCrawlerRequest object.
 */
CreateCrawlerRequest::CreateCrawlerRequest()
    : GlueRequest(new CreateCrawlerRequestPrivate(GlueRequest::CreateCrawlerAction, this))
{

}

bool CreateCrawlerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCrawlerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCrawlerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * CreateCrawlerRequest::response(QNetworkReply * const reply) const
{
    return new CreateCrawlerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCrawlerRequestPrivate
 *
 * @brief  Private implementation for CreateCrawlerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCrawlerRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public CreateCrawlerRequest instance.
 */
CreateCrawlerRequestPrivate::CreateCrawlerRequestPrivate(
    const GlueRequest::Action action, CreateCrawlerRequest * const q)
    : CreateCrawlerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCrawlerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCrawlerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCrawlerRequest instance.
 */
CreateCrawlerRequestPrivate::CreateCrawlerRequestPrivate(
    const CreateCrawlerRequestPrivate &other, CreateCrawlerRequest * const q)
    : CreateCrawlerPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
