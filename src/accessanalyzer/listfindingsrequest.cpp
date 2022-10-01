// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfindingsrequest.h"
#include "listfindingsrequest_p.h"
#include "listfindingsresponse.h"
#include "accessanalyzerrequest_p.h"

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::ListFindingsRequest
 * \brief The ListFindingsRequest class provides an interface for AccessAnalyzer ListFindings requests.
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
 * \sa AccessAnalyzerClient::listFindings
 */

/*!
 * Constructs a copy of \a other.
 */
ListFindingsRequest::ListFindingsRequest(const ListFindingsRequest &other)
    : AccessAnalyzerRequest(new ListFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFindingsRequest object.
 */
ListFindingsRequest::ListFindingsRequest()
    : AccessAnalyzerRequest(new ListFindingsRequestPrivate(AccessAnalyzerRequest::ListFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFindingsRequest::response(QNetworkReply * const reply) const
{
    return new ListFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::AccessAnalyzer::ListFindingsRequestPrivate
 * \brief The ListFindingsRequestPrivate class provides private implementation for ListFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a ListFindingsRequestPrivate object for AccessAnalyzer \a action,
 * with public implementation \a q.
 */
ListFindingsRequestPrivate::ListFindingsRequestPrivate(
    const AccessAnalyzerRequest::Action action, ListFindingsRequest * const q)
    : AccessAnalyzerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFindingsRequest
 * class' copy constructor.
 */
ListFindingsRequestPrivate::ListFindingsRequestPrivate(
    const ListFindingsRequestPrivate &other, ListFindingsRequest * const q)
    : AccessAnalyzerRequestPrivate(other, q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
