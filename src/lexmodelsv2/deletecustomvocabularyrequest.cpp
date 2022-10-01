// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecustomvocabularyrequest.h"
#include "deletecustomvocabularyrequest_p.h"
#include "deletecustomvocabularyresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteCustomVocabularyRequest
 * \brief The DeleteCustomVocabularyRequest class provides an interface for LexModelsV2 DeleteCustomVocabulary requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteCustomVocabulary
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCustomVocabularyRequest::DeleteCustomVocabularyRequest(const DeleteCustomVocabularyRequest &other)
    : LexModelsV2Request(new DeleteCustomVocabularyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCustomVocabularyRequest object.
 */
DeleteCustomVocabularyRequest::DeleteCustomVocabularyRequest()
    : LexModelsV2Request(new DeleteCustomVocabularyRequestPrivate(LexModelsV2Request::DeleteCustomVocabularyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCustomVocabularyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCustomVocabularyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCustomVocabularyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCustomVocabularyResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteCustomVocabularyRequestPrivate
 * \brief The DeleteCustomVocabularyRequestPrivate class provides private implementation for DeleteCustomVocabularyRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteCustomVocabularyRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteCustomVocabularyRequestPrivate::DeleteCustomVocabularyRequestPrivate(
    const LexModelsV2Request::Action action, DeleteCustomVocabularyRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCustomVocabularyRequest
 * class' copy constructor.
 */
DeleteCustomVocabularyRequestPrivate::DeleteCustomVocabularyRequestPrivate(
    const DeleteCustomVocabularyRequestPrivate &other, DeleteCustomVocabularyRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
