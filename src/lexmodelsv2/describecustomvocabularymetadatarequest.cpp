// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
