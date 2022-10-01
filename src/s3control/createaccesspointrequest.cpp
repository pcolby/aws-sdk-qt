// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccesspointrequest.h"
#include "createaccesspointrequest_p.h"
#include "createaccesspointresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::CreateAccessPointRequest
 * \brief The CreateAccessPointRequest class provides an interface for S3Control CreateAccessPoint requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::createAccessPoint
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAccessPointRequest::CreateAccessPointRequest(const CreateAccessPointRequest &other)
    : S3ControlRequest(new CreateAccessPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAccessPointRequest object.
 */
CreateAccessPointRequest::CreateAccessPointRequest()
    : S3ControlRequest(new CreateAccessPointRequestPrivate(S3ControlRequest::CreateAccessPointAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAccessPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAccessPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAccessPointRequest::response(QNetworkReply * const reply) const
{
    return new CreateAccessPointResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::CreateAccessPointRequestPrivate
 * \brief The CreateAccessPointRequestPrivate class provides private implementation for CreateAccessPointRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a CreateAccessPointRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
CreateAccessPointRequestPrivate::CreateAccessPointRequestPrivate(
    const S3ControlRequest::Action action, CreateAccessPointRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAccessPointRequest
 * class' copy constructor.
 */
CreateAccessPointRequestPrivate::CreateAccessPointRequestPrivate(
    const CreateAccessPointRequestPrivate &other, CreateAccessPointRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
