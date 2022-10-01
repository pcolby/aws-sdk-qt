/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
