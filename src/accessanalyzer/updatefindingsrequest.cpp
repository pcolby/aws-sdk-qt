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

#include "updatefindingsrequest.h"
#include "updatefindingsrequest_p.h"
#include "updatefindingsresponse.h"
#include "accessanalyzerrequest_p.h"

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::UpdateFindingsRequest
 * \brief The UpdateFindingsRequest class provides an interface for AccessAnalyzer UpdateFindings requests.
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
 * \sa AccessAnalyzerClient::updateFindings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFindingsRequest::UpdateFindingsRequest(const UpdateFindingsRequest &other)
    : AccessAnalyzerRequest(new UpdateFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFindingsRequest object.
 */
UpdateFindingsRequest::UpdateFindingsRequest()
    : AccessAnalyzerRequest(new UpdateFindingsRequestPrivate(AccessAnalyzerRequest::UpdateFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFindingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::AccessAnalyzer::UpdateFindingsRequestPrivate
 * \brief The UpdateFindingsRequestPrivate class provides private implementation for UpdateFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a UpdateFindingsRequestPrivate object for AccessAnalyzer \a action,
 * with public implementation \a q.
 */
UpdateFindingsRequestPrivate::UpdateFindingsRequestPrivate(
    const AccessAnalyzerRequest::Action action, UpdateFindingsRequest * const q)
    : AccessAnalyzerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFindingsRequest
 * class' copy constructor.
 */
UpdateFindingsRequestPrivate::UpdateFindingsRequestPrivate(
    const UpdateFindingsRequestPrivate &other, UpdateFindingsRequest * const q)
    : AccessAnalyzerRequestPrivate(other, q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
