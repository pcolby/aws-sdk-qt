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

#include "deleteevaluationresultsrequest.h"
#include "deleteevaluationresultsrequest_p.h"
#include "deleteevaluationresultsresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeleteEvaluationResultsRequest
 *
 * @brief  Implements ConfigService DeleteEvaluationResults requests.
 *
 * @see    ConfigServiceClient::deleteEvaluationResults
 */

/**
 * @brief  Constructs a new DeleteEvaluationResultsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEvaluationResultsRequest::DeleteEvaluationResultsRequest(const DeleteEvaluationResultsRequest &other)
    : ConfigServiceRequest(new DeleteEvaluationResultsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteEvaluationResultsRequest object.
 */
DeleteEvaluationResultsRequest::DeleteEvaluationResultsRequest()
    : ConfigServiceRequest(new DeleteEvaluationResultsRequestPrivate(ConfigServiceRequest::DeleteEvaluationResultsAction, this))
{

}

bool DeleteEvaluationResultsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteEvaluationResultsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEvaluationResultsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEvaluationResultsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEvaluationResultsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteEvaluationResultsRequestPrivate
 *
 * @brief  Private implementation for DeleteEvaluationResultsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEvaluationResultsRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DeleteEvaluationResultsRequest instance.
 */
DeleteEvaluationResultsRequestPrivate::DeleteEvaluationResultsRequestPrivate(
    const ConfigServiceRequest::Action action, DeleteEvaluationResultsRequest * const q)
    : DeleteEvaluationResultsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEvaluationResultsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEvaluationResultsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEvaluationResultsRequest instance.
 */
DeleteEvaluationResultsRequestPrivate::DeleteEvaluationResultsRequestPrivate(
    const DeleteEvaluationResultsRequestPrivate &other, DeleteEvaluationResultsRequest * const q)
    : DeleteEvaluationResultsPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
