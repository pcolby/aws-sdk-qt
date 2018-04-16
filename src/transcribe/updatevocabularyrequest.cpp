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

#include "updatevocabularyrequest.h"
#include "updatevocabularyrequest_p.h"
#include "updatevocabularyresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::UpdateVocabularyRequest
 *
 * \brief The UpdateVocabularyRequest class provides an interface for TranscribeService UpdateVocabulary requests.
 *
 * \ingroup TranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::updateVocabulary
 */

/*!
 * @brief  Constructs a new UpdateVocabularyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateVocabularyRequest::UpdateVocabularyRequest(const UpdateVocabularyRequest &other)
    : TranscribeServiceRequest(new UpdateVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateVocabularyRequest object.
 */
UpdateVocabularyRequest::UpdateVocabularyRequest()
    : TranscribeServiceRequest(new UpdateVocabularyRequestPrivate(TranscribeServiceRequest::UpdateVocabularyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVocabularyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateVocabularyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateVocabularyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  TranscribeServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVocabularyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateVocabularyRequestPrivate
 *
 * @brief  Private implementation for UpdateVocabularyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateVocabularyRequestPrivate object.
 *
 * @param  action  TranscribeService action being performed.
 * @param  q       Pointer to this object's public UpdateVocabularyRequest instance.
 */
UpdateVocabularyRequestPrivate::UpdateVocabularyRequestPrivate(
    const TranscribeServiceRequest::Action action, UpdateVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateVocabularyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateVocabularyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateVocabularyRequest instance.
 */
UpdateVocabularyRequestPrivate::UpdateVocabularyRequestPrivate(
    const UpdateVocabularyRequestPrivate &other, UpdateVocabularyRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
