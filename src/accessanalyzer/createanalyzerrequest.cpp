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

#include "createanalyzerrequest.h"
#include "createanalyzerrequest_p.h"
#include "createanalyzerresponse.h"
#include "accessanalyzerrequest_p.h"

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::CreateAnalyzerRequest
 * \brief The CreateAnalyzerRequest class provides an interface for AccessAnalyzer CreateAnalyzer requests.
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
 * \sa AccessAnalyzerClient::createAnalyzer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAnalyzerRequest::CreateAnalyzerRequest(const CreateAnalyzerRequest &other)
    : AccessAnalyzerRequest(new CreateAnalyzerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAnalyzerRequest object.
 */
CreateAnalyzerRequest::CreateAnalyzerRequest()
    : AccessAnalyzerRequest(new CreateAnalyzerRequestPrivate(AccessAnalyzerRequest::CreateAnalyzerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAnalyzerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAnalyzerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAnalyzerRequest::response(QNetworkReply * const reply) const
{
    return new CreateAnalyzerResponse(*this, reply);
}

/*!
 * \class QtAws::AccessAnalyzer::CreateAnalyzerRequestPrivate
 * \brief The CreateAnalyzerRequestPrivate class provides private implementation for CreateAnalyzerRequest.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a CreateAnalyzerRequestPrivate object for AccessAnalyzer \a action,
 * with public implementation \a q.
 */
CreateAnalyzerRequestPrivate::CreateAnalyzerRequestPrivate(
    const AccessAnalyzerRequest::Action action, CreateAnalyzerRequest * const q)
    : AccessAnalyzerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAnalyzerRequest
 * class' copy constructor.
 */
CreateAnalyzerRequestPrivate::CreateAnalyzerRequestPrivate(
    const CreateAnalyzerRequestPrivate &other, CreateAnalyzerRequest * const q)
    : AccessAnalyzerRequestPrivate(other, q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
