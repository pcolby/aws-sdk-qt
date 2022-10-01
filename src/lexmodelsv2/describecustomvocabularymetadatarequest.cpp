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

#include "describecustomvocabularymetadatarequest.h"
#include "describecustomvocabularymetadatarequest_p.h"
#include "describecustomvocabularymetadataresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeCustomVocabularyMetadataRequest
 * \brief The DescribeCustomVocabularyMetadataRequest class provides an interface for LexModelsV2 DescribeCustomVocabularyMetadata requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeCustomVocabularyMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCustomVocabularyMetadataRequest::DescribeCustomVocabularyMetadataRequest(const DescribeCustomVocabularyMetadataRequest &other)
    : LexModelsV2Request(new DescribeCustomVocabularyMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCustomVocabularyMetadataRequest object.
 */
DescribeCustomVocabularyMetadataRequest::DescribeCustomVocabularyMetadataRequest()
    : LexModelsV2Request(new DescribeCustomVocabularyMetadataRequestPrivate(LexModelsV2Request::DescribeCustomVocabularyMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCustomVocabularyMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCustomVocabularyMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCustomVocabularyMetadataRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCustomVocabularyMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeCustomVocabularyMetadataRequestPrivate
 * \brief The DescribeCustomVocabularyMetadataRequestPrivate class provides private implementation for DescribeCustomVocabularyMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeCustomVocabularyMetadataRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeCustomVocabularyMetadataRequestPrivate::DescribeCustomVocabularyMetadataRequestPrivate(
    const LexModelsV2Request::Action action, DescribeCustomVocabularyMetadataRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCustomVocabularyMetadataRequest
 * class' copy constructor.
 */
DescribeCustomVocabularyMetadataRequestPrivate::DescribeCustomVocabularyMetadataRequestPrivate(
    const DescribeCustomVocabularyMetadataRequestPrivate &other, DescribeCustomVocabularyMetadataRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
