// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecomponentrequest.h"
#include "deletecomponentrequest_p.h"
#include "deletecomponentresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteComponentRequest
 * \brief The DeleteComponentRequest class provides an interface for ImageBuilder DeleteComponent requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteComponent
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteComponentRequest::DeleteComponentRequest(const DeleteComponentRequest &other)
    : ImageBuilderRequest(new DeleteComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteComponentRequest object.
 */
DeleteComponentRequest::DeleteComponentRequest()
    : ImageBuilderRequest(new DeleteComponentRequestPrivate(ImageBuilderRequest::DeleteComponentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteComponentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteComponentResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::DeleteComponentRequestPrivate
 * \brief The DeleteComponentRequestPrivate class provides private implementation for DeleteComponentRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteComponentRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
DeleteComponentRequestPrivate::DeleteComponentRequestPrivate(
    const ImageBuilderRequest::Action action, DeleteComponentRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteComponentRequest
 * class' copy constructor.
 */
DeleteComponentRequestPrivate::DeleteComponentRequestPrivate(
    const DeleteComponentRequestPrivate &other, DeleteComponentRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
