// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describequerysuggestionsconfigrequest.h"
#include "describequerysuggestionsconfigrequest_p.h"
#include "describequerysuggestionsconfigresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeQuerySuggestionsConfigRequest
 * \brief The DescribeQuerySuggestionsConfigRequest class provides an interface for Kendra DescribeQuerySuggestionsConfig requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeQuerySuggestionsConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeQuerySuggestionsConfigRequest::DescribeQuerySuggestionsConfigRequest(const DescribeQuerySuggestionsConfigRequest &other)
    : KendraRequest(new DescribeQuerySuggestionsConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeQuerySuggestionsConfigRequest object.
 */
DescribeQuerySuggestionsConfigRequest::DescribeQuerySuggestionsConfigRequest()
    : KendraRequest(new DescribeQuerySuggestionsConfigRequestPrivate(KendraRequest::DescribeQuerySuggestionsConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeQuerySuggestionsConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeQuerySuggestionsConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeQuerySuggestionsConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeQuerySuggestionsConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DescribeQuerySuggestionsConfigRequestPrivate
 * \brief The DescribeQuerySuggestionsConfigRequestPrivate class provides private implementation for DescribeQuerySuggestionsConfigRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeQuerySuggestionsConfigRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DescribeQuerySuggestionsConfigRequestPrivate::DescribeQuerySuggestionsConfigRequestPrivate(
    const KendraRequest::Action action, DescribeQuerySuggestionsConfigRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeQuerySuggestionsConfigRequest
 * class' copy constructor.
 */
DescribeQuerySuggestionsConfigRequestPrivate::DescribeQuerySuggestionsConfigRequestPrivate(
    const DescribeQuerySuggestionsConfigRequestPrivate &other, DescribeQuerySuggestionsConfigRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
