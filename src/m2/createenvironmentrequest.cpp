// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createenvironmentrequest.h"
#include "createenvironmentrequest_p.h"
#include "createenvironmentresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::CreateEnvironmentRequest
 * \brief The CreateEnvironmentRequest class provides an interface for M2 CreateEnvironment requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::createEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEnvironmentRequest::CreateEnvironmentRequest(const CreateEnvironmentRequest &other)
    : M2Request(new CreateEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEnvironmentRequest object.
 */
CreateEnvironmentRequest::CreateEnvironmentRequest()
    : M2Request(new CreateEnvironmentRequestPrivate(M2Request::CreateEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::M2::CreateEnvironmentRequestPrivate
 * \brief The CreateEnvironmentRequestPrivate class provides private implementation for CreateEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a CreateEnvironmentRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
CreateEnvironmentRequestPrivate::CreateEnvironmentRequestPrivate(
    const M2Request::Action action, CreateEnvironmentRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEnvironmentRequest
 * class' copy constructor.
 */
CreateEnvironmentRequestPrivate::CreateEnvironmentRequestPrivate(
    const CreateEnvironmentRequestPrivate &other, CreateEnvironmentRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
