// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describevodsourcerequest.h"
#include "describevodsourcerequest_p.h"
#include "describevodsourceresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DescribeVodSourceRequest
 * \brief The DescribeVodSourceRequest class provides an interface for MediaTailor DescribeVodSource requests.
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
 * \sa MediaTailorClient::describeVodSource
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeVodSourceRequest::DescribeVodSourceRequest(const DescribeVodSourceRequest &other)
    : MediaTailorRequest(new DescribeVodSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeVodSourceRequest object.
 */
DescribeVodSourceRequest::DescribeVodSourceRequest()
    : MediaTailorRequest(new DescribeVodSourceRequestPrivate(MediaTailorRequest::DescribeVodSourceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeVodSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeVodSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVodSourceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVodSourceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::DescribeVodSourceRequestPrivate
 * \brief The DescribeVodSourceRequestPrivate class provides private implementation for DescribeVodSourceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DescribeVodSourceRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
DescribeVodSourceRequestPrivate::DescribeVodSourceRequestPrivate(
    const MediaTailorRequest::Action action, DescribeVodSourceRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeVodSourceRequest
 * class' copy constructor.
 */
DescribeVodSourceRequestPrivate::DescribeVodSourceRequestPrivate(
    const DescribeVodSourceRequestPrivate &other, DescribeVodSourceRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
