// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelimagecreationrequest.h"
#include "cancelimagecreationrequest_p.h"
#include "cancelimagecreationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CancelImageCreationRequest
 * \brief The CancelImageCreationRequest class provides an interface for ImageBuilder CancelImageCreation requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::cancelImageCreation
 */

/*!
 * Constructs a copy of \a other.
 */
CancelImageCreationRequest::CancelImageCreationRequest(const CancelImageCreationRequest &other)
    : ImageBuilderRequest(new CancelImageCreationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelImageCreationRequest object.
 */
CancelImageCreationRequest::CancelImageCreationRequest()
    : ImageBuilderRequest(new CancelImageCreationRequestPrivate(ImageBuilderRequest::CancelImageCreationAction, this))
{

}

/*!
 * \reimp
 */
bool CancelImageCreationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelImageCreationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelImageCreationRequest::response(QNetworkReply * const reply) const
{
    return new CancelImageCreationResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::CancelImageCreationRequestPrivate
 * \brief The CancelImageCreationRequestPrivate class provides private implementation for CancelImageCreationRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CancelImageCreationRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
CancelImageCreationRequestPrivate::CancelImageCreationRequestPrivate(
    const ImageBuilderRequest::Action action, CancelImageCreationRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelImageCreationRequest
 * class' copy constructor.
 */
CancelImageCreationRequestPrivate::CancelImageCreationRequestPrivate(
    const CancelImageCreationRequestPrivate &other, CancelImageCreationRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
