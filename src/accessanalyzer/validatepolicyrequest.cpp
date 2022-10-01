// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "validatepolicyrequest.h"
#include "validatepolicyrequest_p.h"
#include "validatepolicyresponse.h"
#include "accessanalyzerrequest_p.h"

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::ValidatePolicyRequest
 * \brief The ValidatePolicyRequest class provides an interface for AccessAnalyzer ValidatePolicy requests.
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
 * \sa AccessAnalyzerClient::validatePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
ValidatePolicyRequest::ValidatePolicyRequest(const ValidatePolicyRequest &other)
    : AccessAnalyzerRequest(new ValidatePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ValidatePolicyRequest object.
 */
ValidatePolicyRequest::ValidatePolicyRequest()
    : AccessAnalyzerRequest(new ValidatePolicyRequestPrivate(AccessAnalyzerRequest::ValidatePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool ValidatePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ValidatePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ValidatePolicyRequest::response(QNetworkReply * const reply) const
{
    return new ValidatePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::AccessAnalyzer::ValidatePolicyRequestPrivate
 * \brief The ValidatePolicyRequestPrivate class provides private implementation for ValidatePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a ValidatePolicyRequestPrivate object for AccessAnalyzer \a action,
 * with public implementation \a q.
 */
ValidatePolicyRequestPrivate::ValidatePolicyRequestPrivate(
    const AccessAnalyzerRequest::Action action, ValidatePolicyRequest * const q)
    : AccessAnalyzerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ValidatePolicyRequest
 * class' copy constructor.
 */
ValidatePolicyRequestPrivate::ValidatePolicyRequestPrivate(
    const ValidatePolicyRequestPrivate &other, ValidatePolicyRequest * const q)
    : AccessAnalyzerRequestPrivate(other, q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
