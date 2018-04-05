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

#include "listvocabulariesrequest.h"
#include "listvocabulariesrequest_p.h"
#include "listvocabulariesresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/**
 * @class  ListVocabulariesRequest
 *
 * @brief  Implements TranscribeService ListVocabularies requests.
 *
 * @see    TranscribeServiceClient::listVocabularies
 */

/**
 * @brief  Constructs a new ListVocabulariesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListVocabulariesRequest::ListVocabulariesRequest(const ListVocabulariesRequest &other)
    : TranscribeServiceRequest(new ListVocabulariesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListVocabulariesRequest object.
 */
ListVocabulariesRequest::ListVocabulariesRequest()
    : TranscribeServiceRequest(new ListVocabulariesRequestPrivate(TranscribeServiceRequest::ListVocabulariesAction, this))
{

}

bool ListVocabulariesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListVocabulariesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListVocabulariesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  TranscribeServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVocabulariesRequest::response(QNetworkReply * const reply) const
{
    return new ListVocabulariesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListVocabulariesRequestPrivate
 *
 * @brief  Private implementation for ListVocabulariesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVocabulariesRequestPrivate object.
 *
 * @param  action  TranscribeService action being performed.
 * @param  q       Pointer to this object's public ListVocabulariesRequest instance.
 */
ListVocabulariesRequestPrivate::ListVocabulariesRequestPrivate(
    const TranscribeServiceRequest::Action action, ListVocabulariesRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListVocabulariesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListVocabulariesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListVocabulariesRequest instance.
 */
ListVocabulariesRequestPrivate::ListVocabulariesRequestPrivate(
    const ListVocabulariesRequestPrivate &other, ListVocabulariesRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
