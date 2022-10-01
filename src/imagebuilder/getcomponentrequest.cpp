// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcomponentrequest.h"
#include "getcomponentrequest_p.h"
#include "getcomponentresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetComponentRequest
 * \brief The GetComponentRequest class provides an interface for ImageBuilder GetComponent requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getComponent
 */

/*!
 * Constructs a copy of \a other.
 */
GetComponentRequest::GetComponentRequest(const GetComponentRequest &other)
    : ImageBuilderRequest(new GetComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetComponentRequest object.
 */
GetComponentRequest::GetComponentRequest()
    : ImageBuilderRequest(new GetComponentRequestPrivate(ImageBuilderRequest::GetComponentAction, this))
{

}

/*!
 * \reimp
 */
bool GetComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetComponentRequest::response(QNetworkReply * const reply) const
{
    return new GetComponentResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::GetComponentRequestPrivate
 * \brief The GetComponentRequestPrivate class provides private implementation for GetComponentRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetComponentRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetComponentRequestPrivate::GetComponentRequestPrivate(
    const ImageBuilderRequest::Action action, GetComponentRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetComponentRequest
 * class' copy constructor.
 */
GetComponentRequestPrivate::GetComponentRequestPrivate(
    const GetComponentRequestPrivate &other, GetComponentRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
