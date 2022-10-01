// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createchannelrequest.h"
#include "createchannelrequest_p.h"
#include "createchannelresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::CreateChannelRequest
 * \brief The CreateChannelRequest class provides an interface for MediaPackage CreateChannel requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::createChannel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateChannelRequest::CreateChannelRequest(const CreateChannelRequest &other)
    : MediaPackageRequest(new CreateChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateChannelRequest object.
 */
CreateChannelRequest::CreateChannelRequest()
    : MediaPackageRequest(new CreateChannelRequestPrivate(MediaPackageRequest::CreateChannelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateChannelRequest::response(QNetworkReply * const reply) const
{
    return new CreateChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::CreateChannelRequestPrivate
 * \brief The CreateChannelRequestPrivate class provides private implementation for CreateChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a CreateChannelRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
CreateChannelRequestPrivate::CreateChannelRequestPrivate(
    const MediaPackageRequest::Action action, CreateChannelRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateChannelRequest
 * class' copy constructor.
 */
CreateChannelRequestPrivate::CreateChannelRequestPrivate(
    const CreateChannelRequestPrivate &other, CreateChannelRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
