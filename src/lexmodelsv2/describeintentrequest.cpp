// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeintentrequest.h"
#include "describeintentrequest_p.h"
#include "describeintentresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeIntentRequest
 * \brief The DescribeIntentRequest class provides an interface for LexModelsV2 DescribeIntent requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeIntent
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeIntentRequest::DescribeIntentRequest(const DescribeIntentRequest &other)
    : LexModelsV2Request(new DescribeIntentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeIntentRequest object.
 */
DescribeIntentRequest::DescribeIntentRequest()
    : LexModelsV2Request(new DescribeIntentRequestPrivate(LexModelsV2Request::DescribeIntentAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIntentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeIntentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIntentRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIntentResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeIntentRequestPrivate
 * \brief The DescribeIntentRequestPrivate class provides private implementation for DescribeIntentRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeIntentRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeIntentRequestPrivate::DescribeIntentRequestPrivate(
    const LexModelsV2Request::Action action, DescribeIntentRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeIntentRequest
 * class' copy constructor.
 */
DescribeIntentRequestPrivate::DescribeIntentRequestPrivate(
    const DescribeIntentRequestPrivate &other, DescribeIntentRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
