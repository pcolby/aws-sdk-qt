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

#include "deleteanalysisschemerequest.h"
#include "deleteanalysisschemerequest_p.h"
#include "deleteanalysisschemeresponse.h"
#include "cloudsearchrequest_p.h"

namespace AWS {
namespace CloudSearch {

/**
 * @class  DeleteAnalysisSchemeRequest
 *
 * @brief  Implements CloudSearch DeleteAnalysisScheme requests.
 *
 * @see    CloudSearchClient::deleteAnalysisScheme
 */

/**
 * @brief  Constructs a new DeleteAnalysisSchemeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAnalysisSchemeResponse::DeleteAnalysisSchemeResponse(

/**
 * @brief  Constructs a new DeleteAnalysisSchemeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAnalysisSchemeRequest::DeleteAnalysisSchemeRequest(const DeleteAnalysisSchemeRequest &other)
    : CloudSearchRequest(new DeleteAnalysisSchemeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteAnalysisSchemeRequest object.
 */
DeleteAnalysisSchemeRequest::DeleteAnalysisSchemeRequest()
    : CloudSearchRequest(new DeleteAnalysisSchemeRequestPrivate(CloudSearchRequest::DeleteAnalysisSchemeAction, this))
{

}

bool DeleteAnalysisSchemeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteAnalysisSchemeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAnalysisSchemeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * DeleteAnalysisSchemeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAnalysisSchemeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteAnalysisSchemeRequestPrivate
 *
 * @brief  Private implementation for DeleteAnalysisSchemeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAnalysisSchemeRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DeleteAnalysisSchemeRequest instance.
 */
DeleteAnalysisSchemeRequestPrivate::DeleteAnalysisSchemeRequestPrivate(
    const CloudSearchRequest::Action action, DeleteAnalysisSchemeRequest * const q)
    : DeleteAnalysisSchemePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAnalysisSchemeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAnalysisSchemeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAnalysisSchemeRequest instance.
 */
DeleteAnalysisSchemeRequestPrivate::DeleteAnalysisSchemeRequestPrivate(
    const DeleteAnalysisSchemeRequestPrivate &other, DeleteAnalysisSchemeRequest * const q)
    : DeleteAnalysisSchemePrivate(other, q)
{

}
