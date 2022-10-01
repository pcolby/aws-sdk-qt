// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteenvironmentrequest.h"
#include "deleteenvironmentrequest_p.h"
#include "deleteenvironmentresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::DeleteEnvironmentRequest
 * \brief The DeleteEnvironmentRequest class provides an interface for M2 DeleteEnvironment requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::deleteEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEnvironmentRequest::DeleteEnvironmentRequest(const DeleteEnvironmentRequest &other)
    : M2Request(new DeleteEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEnvironmentRequest object.
 */
DeleteEnvironmentRequest::DeleteEnvironmentRequest()
    : M2Request(new DeleteEnvironmentRequestPrivate(M2Request::DeleteEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::M2::DeleteEnvironmentRequestPrivate
 * \brief The DeleteEnvironmentRequestPrivate class provides private implementation for DeleteEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a DeleteEnvironmentRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
DeleteEnvironmentRequestPrivate::DeleteEnvironmentRequestPrivate(
    const M2Request::Action action, DeleteEnvironmentRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEnvironmentRequest
 * class' copy constructor.
 */
DeleteEnvironmentRequestPrivate::DeleteEnvironmentRequestPrivate(
    const DeleteEnvironmentRequestPrivate &other, DeleteEnvironmentRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
