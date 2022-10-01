// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteendpointrequest.h"
#include "deleteendpointrequest_p.h"
#include "deleteendpointresponse.h"
#include "s3outpostsrequest_p.h"

namespace QtAws {
namespace S3Outposts {

/*!
 * \class QtAws::S3Outposts::DeleteEndpointRequest
 * \brief The DeleteEndpointRequest class provides an interface for S3Outposts DeleteEndpoint requests.
 *
 * \inmodule QtAwsS3Outposts
 *
 *  Amazon S3 on Outposts provides access to S3 on Outposts
 *
 * \sa S3OutpostsClient::deleteEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEndpointRequest::DeleteEndpointRequest(const DeleteEndpointRequest &other)
    : S3OutpostsRequest(new DeleteEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEndpointRequest object.
 */
DeleteEndpointRequest::DeleteEndpointRequest()
    : S3OutpostsRequest(new DeleteEndpointRequestPrivate(S3OutpostsRequest::DeleteEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::S3Outposts::DeleteEndpointRequestPrivate
 * \brief The DeleteEndpointRequestPrivate class provides private implementation for DeleteEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a DeleteEndpointRequestPrivate object for S3Outposts \a action,
 * with public implementation \a q.
 */
DeleteEndpointRequestPrivate::DeleteEndpointRequestPrivate(
    const S3OutpostsRequest::Action action, DeleteEndpointRequest * const q)
    : S3OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEndpointRequest
 * class' copy constructor.
 */
DeleteEndpointRequestPrivate::DeleteEndpointRequestPrivate(
    const DeleteEndpointRequestPrivate &other, DeleteEndpointRequest * const q)
    : S3OutpostsRequestPrivate(other, q)
{

}

} // namespace S3Outposts
} // namespace QtAws
