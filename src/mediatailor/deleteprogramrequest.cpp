// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprogramrequest.h"
#include "deleteprogramrequest_p.h"
#include "deleteprogramresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DeleteProgramRequest
 * \brief The DeleteProgramRequest class provides an interface for MediaTailor DeleteProgram requests.
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
 * \sa MediaTailorClient::deleteProgram
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProgramRequest::DeleteProgramRequest(const DeleteProgramRequest &other)
    : MediaTailorRequest(new DeleteProgramRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProgramRequest object.
 */
DeleteProgramRequest::DeleteProgramRequest()
    : MediaTailorRequest(new DeleteProgramRequestPrivate(MediaTailorRequest::DeleteProgramAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProgramRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProgramResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProgramRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProgramResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::DeleteProgramRequestPrivate
 * \brief The DeleteProgramRequestPrivate class provides private implementation for DeleteProgramRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DeleteProgramRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
DeleteProgramRequestPrivate::DeleteProgramRequestPrivate(
    const MediaTailorRequest::Action action, DeleteProgramRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProgramRequest
 * class' copy constructor.
 */
DeleteProgramRequestPrivate::DeleteProgramRequestPrivate(
    const DeleteProgramRequestPrivate &other, DeleteProgramRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
