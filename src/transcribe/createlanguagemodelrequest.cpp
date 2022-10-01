// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlanguagemodelrequest.h"
#include "createlanguagemodelrequest_p.h"
#include "createlanguagemodelresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::CreateLanguageModelRequest
 * \brief The CreateLanguageModelRequest class provides an interface for Transcribe CreateLanguageModel requests.
 *
 * \inmodule QtAwsTranscribe
 *
 *  Amazon Transcribe offers three main types of batch transcription: <b>Standard</b>, <b>Medical</b>, and <b>Call
 * 
 *  Analytics</b>> <ul> <li>
 * 
 *  <b>Standard transcriptions</b> are the most common option. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Medical transcriptions</b> are tailored to medical professionals and incorporate medical terms. A common use case for
 *  this service is transcribing doctor-patient dialogue into after-visit notes. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Call Analytics transcriptions</b> are designed for use with call center audio on two different channels; if you're
 *  looking for insight into customer service calls, use this option. Refer to for
 *
 * \sa TranscribeClient::createLanguageModel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLanguageModelRequest::CreateLanguageModelRequest(const CreateLanguageModelRequest &other)
    : TranscribeRequest(new CreateLanguageModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLanguageModelRequest object.
 */
CreateLanguageModelRequest::CreateLanguageModelRequest()
    : TranscribeRequest(new CreateLanguageModelRequestPrivate(TranscribeRequest::CreateLanguageModelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLanguageModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLanguageModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLanguageModelRequest::response(QNetworkReply * const reply) const
{
    return new CreateLanguageModelResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::CreateLanguageModelRequestPrivate
 * \brief The CreateLanguageModelRequestPrivate class provides private implementation for CreateLanguageModelRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a CreateLanguageModelRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
CreateLanguageModelRequestPrivate::CreateLanguageModelRequestPrivate(
    const TranscribeRequest::Action action, CreateLanguageModelRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLanguageModelRequest
 * class' copy constructor.
 */
CreateLanguageModelRequestPrivate::CreateLanguageModelRequestPrivate(
    const CreateLanguageModelRequestPrivate &other, CreateLanguageModelRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
