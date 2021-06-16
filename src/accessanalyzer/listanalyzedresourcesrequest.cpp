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

#include "listanalyzedresourcesrequest.h"
#include "listanalyzedresourcesrequest_p.h"
#include "listanalyzedresourcesresponse.h"
#include "accessanalyzerrequest_p.h"

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::ListAnalyzedResourcesRequest
 * \brief The ListAnalyzedResourcesRequest class provides an interface for AccessAnalyzer ListAnalyzedResources requests.
 *
 * \inmodule QtAwsAccessAnalyzer
 *
 *  AWS IAM Access Analyzer helps identify potential resource-access risks by enabling you to identify any policies that
 *  grant access to an external principal. It does this by using logic-based reasoning to analyze resource-based policies in
 *  your AWS environment. An external principal can be another AWS account, a root user, an IAM user or role, a federated
 *  user, an AWS service, or an anonymous user. You can also use Access Analyzer to preview and validate public and
 *  cross-account access to your resources before deploying permissions changes. This guide describes the AWS IAM Access
 *  Analyzer operations that you can call programmatically. For general information about Access Analyzer, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/what-is-access-analyzer.html">AWS IAM Access Analyzer</a> in the
 *  <b>IAM User
 * 
 *  Guide</b>>
 * 
 *  To start using Access Analyzer, you first need to create an
 *
 * \sa AccessAnalyzerClient::listAnalyzedResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListAnalyzedResourcesRequest::ListAnalyzedResourcesRequest(const ListAnalyzedResourcesRequest &other)
    : AccessAnalyzerRequest(new ListAnalyzedResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAnalyzedResourcesRequest object.
 */
ListAnalyzedResourcesRequest::ListAnalyzedResourcesRequest()
    : AccessAnalyzerRequest(new ListAnalyzedResourcesRequestPrivate(AccessAnalyzerRequest::ListAnalyzedResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAnalyzedResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAnalyzedResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAnalyzedResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListAnalyzedResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::AccessAnalyzer::ListAnalyzedResourcesRequestPrivate
 * \brief The ListAnalyzedResourcesRequestPrivate class provides private implementation for ListAnalyzedResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a ListAnalyzedResourcesRequestPrivate object for AccessAnalyzer \a action,
 * with public implementation \a q.
 */
ListAnalyzedResourcesRequestPrivate::ListAnalyzedResourcesRequestPrivate(
    const AccessAnalyzerRequest::Action action, ListAnalyzedResourcesRequest * const q)
    : AccessAnalyzerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAnalyzedResourcesRequest
 * class' copy constructor.
 */
ListAnalyzedResourcesRequestPrivate::ListAnalyzedResourcesRequestPrivate(
    const ListAnalyzedResourcesRequestPrivate &other, ListAnalyzedResourcesRequest * const q)
    : AccessAnalyzerRequestPrivate(other, q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
