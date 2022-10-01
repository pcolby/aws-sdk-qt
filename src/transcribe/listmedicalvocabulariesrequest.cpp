// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmedicalvocabulariesrequest.h"
#include "listmedicalvocabulariesrequest_p.h"
#include "listmedicalvocabulariesresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::ListMedicalVocabulariesRequest
 * \brief The ListMedicalVocabulariesRequest class provides an interface for Transcribe ListMedicalVocabularies requests.
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
 * \sa TranscribeClient::listMedicalVocabularies
 */

/*!
 * Constructs a copy of \a other.
 */
ListMedicalVocabulariesRequest::ListMedicalVocabulariesRequest(const ListMedicalVocabulariesRequest &other)
    : TranscribeRequest(new ListMedicalVocabulariesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMedicalVocabulariesRequest object.
 */
ListMedicalVocabulariesRequest::ListMedicalVocabulariesRequest()
    : TranscribeRequest(new ListMedicalVocabulariesRequestPrivate(TranscribeRequest::ListMedicalVocabulariesAction, this))
{

}

/*!
 * \reimp
 */
bool ListMedicalVocabulariesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMedicalVocabulariesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMedicalVocabulariesRequest::response(QNetworkReply * const reply) const
{
    return new ListMedicalVocabulariesResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::ListMedicalVocabulariesRequestPrivate
 * \brief The ListMedicalVocabulariesRequestPrivate class provides private implementation for ListMedicalVocabulariesRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a ListMedicalVocabulariesRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
ListMedicalVocabulariesRequestPrivate::ListMedicalVocabulariesRequestPrivate(
    const TranscribeRequest::Action action, ListMedicalVocabulariesRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMedicalVocabulariesRequest
 * class' copy constructor.
 */
ListMedicalVocabulariesRequestPrivate::ListMedicalVocabulariesRequestPrivate(
    const ListMedicalVocabulariesRequestPrivate &other, ListMedicalVocabulariesRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
