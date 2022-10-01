// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletejobrequest.h"
#include "deletejobrequest_p.h"
#include "deletejobresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteJobRequest
 * \brief The DeleteJobRequest class provides an interface for Amplify DeleteJob requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteJobRequest::DeleteJobRequest(const DeleteJobRequest &other)
    : AmplifyRequest(new DeleteJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteJobRequest object.
 */
DeleteJobRequest::DeleteJobRequest()
    : AmplifyRequest(new DeleteJobRequestPrivate(AmplifyRequest::DeleteJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteJobResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::DeleteJobRequestPrivate
 * \brief The DeleteJobRequestPrivate class provides private implementation for DeleteJobRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteJobRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
DeleteJobRequestPrivate::DeleteJobRequestPrivate(
    const AmplifyRequest::Action action, DeleteJobRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteJobRequest
 * class' copy constructor.
 */
DeleteJobRequestPrivate::DeleteJobRequestPrivate(
    const DeleteJobRequestPrivate &other, DeleteJobRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
