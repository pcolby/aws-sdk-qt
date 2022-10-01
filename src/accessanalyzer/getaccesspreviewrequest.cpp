// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesspreviewrequest.h"
#include "getaccesspreviewrequest_p.h"
#include "getaccesspreviewresponse.h"
#include "accessanalyzerrequest_p.h"

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::GetAccessPreviewRequest
 * \brief The GetAccessPreviewRequest class provides an interface for AccessAnalyzer GetAccessPreview requests.
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
 * \sa AccessAnalyzerClient::getAccessPreview
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccessPreviewRequest::GetAccessPreviewRequest(const GetAccessPreviewRequest &other)
    : AccessAnalyzerRequest(new GetAccessPreviewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccessPreviewRequest object.
 */
GetAccessPreviewRequest::GetAccessPreviewRequest()
    : AccessAnalyzerRequest(new GetAccessPreviewRequestPrivate(AccessAnalyzerRequest::GetAccessPreviewAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccessPreviewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccessPreviewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccessPreviewRequest::response(QNetworkReply * const reply) const
{
    return new GetAccessPreviewResponse(*this, reply);
}

/*!
 * \class QtAws::AccessAnalyzer::GetAccessPreviewRequestPrivate
 * \brief The GetAccessPreviewRequestPrivate class provides private implementation for GetAccessPreviewRequest.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a GetAccessPreviewRequestPrivate object for AccessAnalyzer \a action,
 * with public implementation \a q.
 */
GetAccessPreviewRequestPrivate::GetAccessPreviewRequestPrivate(
    const AccessAnalyzerRequest::Action action, GetAccessPreviewRequest * const q)
    : AccessAnalyzerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccessPreviewRequest
 * class' copy constructor.
 */
GetAccessPreviewRequestPrivate::GetAccessPreviewRequestPrivate(
    const GetAccessPreviewRequestPrivate &other, GetAccessPreviewRequest * const q)
    : AccessAnalyzerRequestPrivate(other, q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
