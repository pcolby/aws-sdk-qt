// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesourcelocationrequest.h"
#include "describesourcelocationrequest_p.h"
#include "describesourcelocationresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DescribeSourceLocationRequest
 * \brief The DescribeSourceLocationRequest class provides an interface for MediaTailor DescribeSourceLocation requests.
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
 * \sa MediaTailorClient::describeSourceLocation
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSourceLocationRequest::DescribeSourceLocationRequest(const DescribeSourceLocationRequest &other)
    : MediaTailorRequest(new DescribeSourceLocationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSourceLocationRequest object.
 */
DescribeSourceLocationRequest::DescribeSourceLocationRequest()
    : MediaTailorRequest(new DescribeSourceLocationRequestPrivate(MediaTailorRequest::DescribeSourceLocationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSourceLocationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSourceLocationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSourceLocationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSourceLocationResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::DescribeSourceLocationRequestPrivate
 * \brief The DescribeSourceLocationRequestPrivate class provides private implementation for DescribeSourceLocationRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DescribeSourceLocationRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
DescribeSourceLocationRequestPrivate::DescribeSourceLocationRequestPrivate(
    const MediaTailorRequest::Action action, DescribeSourceLocationRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSourceLocationRequest
 * class' copy constructor.
 */
DescribeSourceLocationRequestPrivate::DescribeSourceLocationRequestPrivate(
    const DescribeSourceLocationRequestPrivate &other, DescribeSourceLocationRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
