// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcomponentrequest.h"
#include "createcomponentrequest_p.h"
#include "createcomponentresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateComponentRequest
 * \brief The CreateComponentRequest class provides an interface for ImageBuilder CreateComponent requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createComponent
 */

/*!
 * Constructs a copy of \a other.
 */
CreateComponentRequest::CreateComponentRequest(const CreateComponentRequest &other)
    : ImageBuilderRequest(new CreateComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateComponentRequest object.
 */
CreateComponentRequest::CreateComponentRequest()
    : ImageBuilderRequest(new CreateComponentRequestPrivate(ImageBuilderRequest::CreateComponentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateComponentRequest::response(QNetworkReply * const reply) const
{
    return new CreateComponentResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::CreateComponentRequestPrivate
 * \brief The CreateComponentRequestPrivate class provides private implementation for CreateComponentRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateComponentRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
CreateComponentRequestPrivate::CreateComponentRequestPrivate(
    const ImageBuilderRequest::Action action, CreateComponentRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateComponentRequest
 * class' copy constructor.
 */
CreateComponentRequestPrivate::CreateComponentRequestPrivate(
    const CreateComponentRequestPrivate &other, CreateComponentRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
