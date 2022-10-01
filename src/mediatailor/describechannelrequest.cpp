// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelrequest.h"
#include "describechannelrequest_p.h"
#include "describechannelresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DescribeChannelRequest
 * \brief The DescribeChannelRequest class provides an interface for MediaTailor DescribeChannel requests.
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
 * \sa MediaTailorClient::describeChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeChannelRequest::DescribeChannelRequest(const DescribeChannelRequest &other)
    : MediaTailorRequest(new DescribeChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeChannelRequest object.
 */
DescribeChannelRequest::DescribeChannelRequest()
    : MediaTailorRequest(new DescribeChannelRequestPrivate(MediaTailorRequest::DescribeChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeChannelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::DescribeChannelRequestPrivate
 * \brief The DescribeChannelRequestPrivate class provides private implementation for DescribeChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DescribeChannelRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
DescribeChannelRequestPrivate::DescribeChannelRequestPrivate(
    const MediaTailorRequest::Action action, DescribeChannelRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeChannelRequest
 * class' copy constructor.
 */
DescribeChannelRequestPrivate::DescribeChannelRequestPrivate(
    const DescribeChannelRequestPrivate &other, DescribeChannelRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
