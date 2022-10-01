// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listartifactsrequest.h"
#include "listartifactsrequest_p.h"
#include "listartifactsresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListArtifactsRequest
 * \brief The ListArtifactsRequest class provides an interface for Amplify ListArtifacts requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listArtifacts
 */

/*!
 * Constructs a copy of \a other.
 */
ListArtifactsRequest::ListArtifactsRequest(const ListArtifactsRequest &other)
    : AmplifyRequest(new ListArtifactsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListArtifactsRequest object.
 */
ListArtifactsRequest::ListArtifactsRequest()
    : AmplifyRequest(new ListArtifactsRequestPrivate(AmplifyRequest::ListArtifactsAction, this))
{

}

/*!
 * \reimp
 */
bool ListArtifactsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListArtifactsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListArtifactsRequest::response(QNetworkReply * const reply) const
{
    return new ListArtifactsResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::ListArtifactsRequestPrivate
 * \brief The ListArtifactsRequestPrivate class provides private implementation for ListArtifactsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListArtifactsRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
ListArtifactsRequestPrivate::ListArtifactsRequestPrivate(
    const AmplifyRequest::Action action, ListArtifactsRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListArtifactsRequest
 * class' copy constructor.
 */
ListArtifactsRequestPrivate::ListArtifactsRequestPrivate(
    const ListArtifactsRequestPrivate &other, ListArtifactsRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
