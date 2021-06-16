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
