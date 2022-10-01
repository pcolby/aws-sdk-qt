// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatearchiverulerequest.h"
#include "updatearchiverulerequest_p.h"
#include "updatearchiveruleresponse.h"
#include "accessanalyzerrequest_p.h"

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::UpdateArchiveRuleRequest
 * \brief The UpdateArchiveRuleRequest class provides an interface for AccessAnalyzer UpdateArchiveRule requests.
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
 * \sa AccessAnalyzerClient::updateArchiveRule
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateArchiveRuleRequest::UpdateArchiveRuleRequest(const UpdateArchiveRuleRequest &other)
    : AccessAnalyzerRequest(new UpdateArchiveRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateArchiveRuleRequest object.
 */
UpdateArchiveRuleRequest::UpdateArchiveRuleRequest()
    : AccessAnalyzerRequest(new UpdateArchiveRuleRequestPrivate(AccessAnalyzerRequest::UpdateArchiveRuleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateArchiveRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateArchiveRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateArchiveRuleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateArchiveRuleResponse(*this, reply);
}

/*!
 * \class QtAws::AccessAnalyzer::UpdateArchiveRuleRequestPrivate
 * \brief The UpdateArchiveRuleRequestPrivate class provides private implementation for UpdateArchiveRuleRequest.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a UpdateArchiveRuleRequestPrivate object for AccessAnalyzer \a action,
 * with public implementation \a q.
 */
UpdateArchiveRuleRequestPrivate::UpdateArchiveRuleRequestPrivate(
    const AccessAnalyzerRequest::Action action, UpdateArchiveRuleRequest * const q)
    : AccessAnalyzerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateArchiveRuleRequest
 * class' copy constructor.
 */
UpdateArchiveRuleRequestPrivate::UpdateArchiveRuleRequestPrivate(
    const UpdateArchiveRuleRequestPrivate &other, UpdateArchiveRuleRequest * const q)
    : AccessAnalyzerRequestPrivate(other, q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
