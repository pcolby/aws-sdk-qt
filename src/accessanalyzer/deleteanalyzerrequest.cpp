// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteanalyzerrequest.h"
#include "deleteanalyzerrequest_p.h"
#include "deleteanalyzerresponse.h"
#include "accessanalyzerrequest_p.h"

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::DeleteAnalyzerRequest
 * \brief The DeleteAnalyzerRequest class provides an interface for AccessAnalyzer DeleteAnalyzer requests.
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
 * \sa AccessAnalyzerClient::deleteAnalyzer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAnalyzerRequest::DeleteAnalyzerRequest(const DeleteAnalyzerRequest &other)
    : AccessAnalyzerRequest(new DeleteAnalyzerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAnalyzerRequest object.
 */
DeleteAnalyzerRequest::DeleteAnalyzerRequest()
    : AccessAnalyzerRequest(new DeleteAnalyzerRequestPrivate(AccessAnalyzerRequest::DeleteAnalyzerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAnalyzerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAnalyzerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAnalyzerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAnalyzerResponse(*this, reply);
}

/*!
 * \class QtAws::AccessAnalyzer::DeleteAnalyzerRequestPrivate
 * \brief The DeleteAnalyzerRequestPrivate class provides private implementation for DeleteAnalyzerRequest.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a DeleteAnalyzerRequestPrivate object for AccessAnalyzer \a action,
 * with public implementation \a q.
 */
DeleteAnalyzerRequestPrivate::DeleteAnalyzerRequestPrivate(
    const AccessAnalyzerRequest::Action action, DeleteAnalyzerRequest * const q)
    : AccessAnalyzerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAnalyzerRequest
 * class' copy constructor.
 */
DeleteAnalyzerRequestPrivate::DeleteAnalyzerRequestPrivate(
    const DeleteAnalyzerRequestPrivate &other, DeleteAnalyzerRequest * const q)
    : AccessAnalyzerRequestPrivate(other, q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
