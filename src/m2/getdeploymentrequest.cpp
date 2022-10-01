// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeploymentrequest.h"
#include "getdeploymentrequest_p.h"
#include "getdeploymentresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::GetDeploymentRequest
 * \brief The GetDeploymentRequest class provides an interface for M2 GetDeployment requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::getDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeploymentRequest::GetDeploymentRequest(const GetDeploymentRequest &other)
    : M2Request(new GetDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeploymentRequest object.
 */
GetDeploymentRequest::GetDeploymentRequest()
    : M2Request(new GetDeploymentRequestPrivate(M2Request::GetDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::M2::GetDeploymentRequestPrivate
 * \brief The GetDeploymentRequestPrivate class provides private implementation for GetDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a GetDeploymentRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
GetDeploymentRequestPrivate::GetDeploymentRequestPrivate(
    const M2Request::Action action, GetDeploymentRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentRequest
 * class' copy constructor.
 */
GetDeploymentRequestPrivate::GetDeploymentRequestPrivate(
    const GetDeploymentRequestPrivate &other, GetDeploymentRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
