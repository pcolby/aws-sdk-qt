// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getanalyzerrequest.h"
#include "getanalyzerrequest_p.h"
#include "getanalyzerresponse.h"
#include "accessanalyzerrequest_p.h"

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::GetAnalyzerRequest
 * \brief The GetAnalyzerRequest class provides an interface for AccessAnalyzer GetAnalyzer requests.
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
 * \sa AccessAnalyzerClient::getAnalyzer
 */

/*!
 * Constructs a copy of \a other.
 */
GetAnalyzerRequest::GetAnalyzerRequest(const GetAnalyzerRequest &other)
    : AccessAnalyzerRequest(new GetAnalyzerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAnalyzerRequest object.
 */
GetAnalyzerRequest::GetAnalyzerRequest()
    : AccessAnalyzerRequest(new GetAnalyzerRequestPrivate(AccessAnalyzerRequest::GetAnalyzerAction, this))
{

}

/*!
 * \reimp
 */
bool GetAnalyzerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAnalyzerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAnalyzerRequest::response(QNetworkReply * const reply) const
{
    return new GetAnalyzerResponse(*this, reply);
}

/*!
 * \class QtAws::AccessAnalyzer::GetAnalyzerRequestPrivate
 * \brief The GetAnalyzerRequestPrivate class provides private implementation for GetAnalyzerRequest.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a GetAnalyzerRequestPrivate object for AccessAnalyzer \a action,
 * with public implementation \a q.
 */
GetAnalyzerRequestPrivate::GetAnalyzerRequestPrivate(
    const AccessAnalyzerRequest::Action action, GetAnalyzerRequest * const q)
    : AccessAnalyzerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAnalyzerRequest
 * class' copy constructor.
 */
GetAnalyzerRequestPrivate::GetAnalyzerRequestPrivate(
    const GetAnalyzerRequestPrivate &other, GetAnalyzerRequest * const q)
    : AccessAnalyzerRequestPrivate(other, q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
