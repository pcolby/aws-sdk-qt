// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putpublicaccessblockrequest.h"
#include "putpublicaccessblockrequest_p.h"
#include "putpublicaccessblockresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutPublicAccessBlockRequest
 * \brief The PutPublicAccessBlockRequest class provides an interface for S3Control PutPublicAccessBlock requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putPublicAccessBlock
 */

/*!
 * Constructs a copy of \a other.
 */
PutPublicAccessBlockRequest::PutPublicAccessBlockRequest(const PutPublicAccessBlockRequest &other)
    : S3ControlRequest(new PutPublicAccessBlockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutPublicAccessBlockRequest object.
 */
PutPublicAccessBlockRequest::PutPublicAccessBlockRequest()
    : S3ControlRequest(new PutPublicAccessBlockRequestPrivate(S3ControlRequest::PutPublicAccessBlockAction, this))
{

}

/*!
 * \reimp
 */
bool PutPublicAccessBlockRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutPublicAccessBlockResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutPublicAccessBlockRequest::response(QNetworkReply * const reply) const
{
    return new PutPublicAccessBlockResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::PutPublicAccessBlockRequestPrivate
 * \brief The PutPublicAccessBlockRequestPrivate class provides private implementation for PutPublicAccessBlockRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutPublicAccessBlockRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
PutPublicAccessBlockRequestPrivate::PutPublicAccessBlockRequestPrivate(
    const S3ControlRequest::Action action, PutPublicAccessBlockRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutPublicAccessBlockRequest
 * class' copy constructor.
 */
PutPublicAccessBlockRequestPrivate::PutPublicAccessBlockRequestPrivate(
    const PutPublicAccessBlockRequestPrivate &other, PutPublicAccessBlockRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
