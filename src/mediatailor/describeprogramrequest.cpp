// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprogramrequest.h"
#include "describeprogramrequest_p.h"
#include "describeprogramresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DescribeProgramRequest
 * \brief The DescribeProgramRequest class provides an interface for MediaTailor DescribeProgram requests.
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
 * \sa MediaTailorClient::describeProgram
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProgramRequest::DescribeProgramRequest(const DescribeProgramRequest &other)
    : MediaTailorRequest(new DescribeProgramRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProgramRequest object.
 */
DescribeProgramRequest::DescribeProgramRequest()
    : MediaTailorRequest(new DescribeProgramRequestPrivate(MediaTailorRequest::DescribeProgramAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProgramRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProgramResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProgramRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProgramResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::DescribeProgramRequestPrivate
 * \brief The DescribeProgramRequestPrivate class provides private implementation for DescribeProgramRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DescribeProgramRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
DescribeProgramRequestPrivate::DescribeProgramRequestPrivate(
    const MediaTailorRequest::Action action, DescribeProgramRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProgramRequest
 * class' copy constructor.
 */
DescribeProgramRequestPrivate::DescribeProgramRequestPrivate(
    const DescribeProgramRequestPrivate &other, DescribeProgramRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
