// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listanalyzersrequest.h"
#include "listanalyzersrequest_p.h"
#include "listanalyzersresponse.h"
#include "accessanalyzerrequest_p.h"

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::ListAnalyzersRequest
 * \brief The ListAnalyzersRequest class provides an interface for AccessAnalyzer ListAnalyzers requests.
 *
 * \inmodule QtAwsAccessAnalyzer
 *
 *  Identity and Access Management Access Analyzer helps identify potential resource-access risks by enabling you to
 *  identify any policies that grant access to an external principal. It does this by using logic-based reasoning to analyze
 *  resource-based policies in your Amazon Web Services environment. An external principal can be another Amazon Web
 *  Services account, a root user, an IAM user or role, a federated user, an Amazon Web Services service, or an anonymous
 *  user. You can also use IAM Access Analyzer to preview and validate public and cross-account access to your resources
 *  before deploying permissions changes. This guide describes the Identity and Access Management Access Analyzer operations
 *  that you can call programmatically. For general information about IAM Access Analyzer, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/what-is-access-analyzer.html">Identity and Access Management
 *  Access Analyzer</a> in the <b>IAM User
 * 
 *  Guide</b>>
 * 
 *  To start using IAM Access Analyzer, you first need to create an
 *
 * \sa AccessAnalyzerClient::listAnalyzers
 */

/*!
 * Constructs a copy of \a other.
 */
ListAnalyzersRequest::ListAnalyzersRequest(const ListAnalyzersRequest &other)
    : AccessAnalyzerRequest(new ListAnalyzersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAnalyzersRequest object.
 */
ListAnalyzersRequest::ListAnalyzersRequest()
    : AccessAnalyzerRequest(new ListAnalyzersRequestPrivate(AccessAnalyzerRequest::ListAnalyzersAction, this))
{

}

/*!
 * \reimp
 */
bool ListAnalyzersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAnalyzersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAnalyzersRequest::response(QNetworkReply * const reply) const
{
    return new ListAnalyzersResponse(*this, reply);
}

/*!
 * \class QtAws::AccessAnalyzer::ListAnalyzersRequestPrivate
 * \brief The ListAnalyzersRequestPrivate class provides private implementation for ListAnalyzersRequest.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a ListAnalyzersRequestPrivate object for AccessAnalyzer \a action,
 * with public implementation \a q.
 */
ListAnalyzersRequestPrivate::ListAnalyzersRequestPrivate(
    const AccessAnalyzerRequest::Action action, ListAnalyzersRequest * const q)
    : AccessAnalyzerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAnalyzersRequest
 * class' copy constructor.
 */
ListAnalyzersRequestPrivate::ListAnalyzersRequestPrivate(
    const ListAnalyzersRequestPrivate &other, ListAnalyzersRequest * const q)
    : AccessAnalyzerRequestPrivate(other, q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
