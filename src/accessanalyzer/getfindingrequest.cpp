// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfindingrequest.h"
#include "getfindingrequest_p.h"
#include "getfindingresponse.h"
#include "accessanalyzerrequest_p.h"

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::GetFindingRequest
 * \brief The GetFindingRequest class provides an interface for AccessAnalyzer GetFinding requests.
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
 * \sa AccessAnalyzerClient::getFinding
 */

/*!
 * Constructs a copy of \a other.
 */
GetFindingRequest::GetFindingRequest(const GetFindingRequest &other)
    : AccessAnalyzerRequest(new GetFindingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFindingRequest object.
 */
GetFindingRequest::GetFindingRequest()
    : AccessAnalyzerRequest(new GetFindingRequestPrivate(AccessAnalyzerRequest::GetFindingAction, this))
{

}

/*!
 * \reimp
 */
bool GetFindingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFindingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFindingRequest::response(QNetworkReply * const reply) const
{
    return new GetFindingResponse(*this, reply);
}

/*!
 * \class QtAws::AccessAnalyzer::GetFindingRequestPrivate
 * \brief The GetFindingRequestPrivate class provides private implementation for GetFindingRequest.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a GetFindingRequestPrivate object for AccessAnalyzer \a action,
 * with public implementation \a q.
 */
GetFindingRequestPrivate::GetFindingRequestPrivate(
    const AccessAnalyzerRequest::Action action, GetFindingRequest * const q)
    : AccessAnalyzerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFindingRequest
 * class' copy constructor.
 */
GetFindingRequestPrivate::GetFindingRequestPrivate(
    const GetFindingRequestPrivate &other, GetFindingRequest * const q)
    : AccessAnalyzerRequestPrivate(other, q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
