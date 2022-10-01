// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesourcelocationrequest.h"
#include "updatesourcelocationrequest_p.h"
#include "updatesourcelocationresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::UpdateSourceLocationRequest
 * \brief The UpdateSourceLocationRequest class provides an interface for MediaTailor UpdateSourceLocation requests.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad insertion and linear channels. With MediaTailor,
 *  you can assemble existing content into a linear stream and serve targeted ads to viewers while maintaining broadcast
 *  quality in over-the-top (OTT) video applications. For information about using the service, including detailed
 *  information about the settings covered in this guide, see the <a
 *  href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental MediaTailor User
 * 
 *  Guide</a>>
 * 
 *  Through the SDKs and the CLI you manage AWS Elemental MediaTailor configurations and channels the same as you do through
 *  the console. For example, you specify ad insertion behavior and mapping information for the origin server and the ad
 *  decision server
 *
 * \sa MediaTailorClient::updateSourceLocation
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSourceLocationRequest::UpdateSourceLocationRequest(const UpdateSourceLocationRequest &other)
    : MediaTailorRequest(new UpdateSourceLocationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSourceLocationRequest object.
 */
UpdateSourceLocationRequest::UpdateSourceLocationRequest()
    : MediaTailorRequest(new UpdateSourceLocationRequestPrivate(MediaTailorRequest::UpdateSourceLocationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSourceLocationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSourceLocationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSourceLocationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSourceLocationResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::UpdateSourceLocationRequestPrivate
 * \brief The UpdateSourceLocationRequestPrivate class provides private implementation for UpdateSourceLocationRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a UpdateSourceLocationRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
UpdateSourceLocationRequestPrivate::UpdateSourceLocationRequestPrivate(
    const MediaTailorRequest::Action action, UpdateSourceLocationRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSourceLocationRequest
 * class' copy constructor.
 */
UpdateSourceLocationRequestPrivate::UpdateSourceLocationRequestPrivate(
    const UpdateSourceLocationRequestPrivate &other, UpdateSourceLocationRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
