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

#include "starttranscriptionjobrequest.h"
#include "starttranscriptionjobrequest_p.h"
#include "starttranscriptionjobresponse.h"
#include "transcribeservicerequest_p.h"

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::StartTranscriptionJobRequest
 *
 * \brief The StartTranscriptionJobRequest class provides an interface for TranscribeService StartTranscriptionJob requests.
 *
 * \ingroup TranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::startTranscriptionJob
 */

/*!
 * @brief  Constructs a new StartTranscriptionJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartTranscriptionJobRequest::StartTranscriptionJobRequest(const StartTranscriptionJobRequest &other)
    : TranscribeServiceRequest(new StartTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StartTranscriptionJobRequest object.
 */
StartTranscriptionJobRequest::StartTranscriptionJobRequest()
    : TranscribeServiceRequest(new StartTranscriptionJobRequestPrivate(TranscribeServiceRequest::StartTranscriptionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartTranscriptionJobRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StartTranscriptionJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartTranscriptionJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  TranscribeServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTranscriptionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartTranscriptionJobResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StartTranscriptionJobRequestPrivate
 *
 * @brief  Private implementation for StartTranscriptionJobRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartTranscriptionJobRequestPrivate object.
 *
 * @param  action  TranscribeService action being performed.
 * @param  q       Pointer to this object's public StartTranscriptionJobRequest instance.
 */
StartTranscriptionJobRequestPrivate::StartTranscriptionJobRequestPrivate(
    const TranscribeServiceRequest::Action action, StartTranscriptionJobRequest * const q)
    : TranscribeServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StartTranscriptionJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartTranscriptionJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartTranscriptionJobRequest instance.
 */
StartTranscriptionJobRequestPrivate::StartTranscriptionJobRequestPrivate(
    const StartTranscriptionJobRequestPrivate &other, StartTranscriptionJobRequest * const q)
    : TranscribeServiceRequestPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace QtAws
