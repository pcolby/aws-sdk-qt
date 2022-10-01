// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprogramrequest.h"
#include "createprogramrequest_p.h"
#include "createprogramresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::CreateProgramRequest
 * \brief The CreateProgramRequest class provides an interface for MediaTailor CreateProgram requests.
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
 * \sa MediaTailorClient::createProgram
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProgramRequest::CreateProgramRequest(const CreateProgramRequest &other)
    : MediaTailorRequest(new CreateProgramRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProgramRequest object.
 */
CreateProgramRequest::CreateProgramRequest()
    : MediaTailorRequest(new CreateProgramRequestPrivate(MediaTailorRequest::CreateProgramAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProgramRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProgramResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProgramRequest::response(QNetworkReply * const reply) const
{
    return new CreateProgramResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::CreateProgramRequestPrivate
 * \brief The CreateProgramRequestPrivate class provides private implementation for CreateProgramRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a CreateProgramRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
CreateProgramRequestPrivate::CreateProgramRequestPrivate(
    const MediaTailorRequest::Action action, CreateProgramRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProgramRequest
 * class' copy constructor.
 */
CreateProgramRequestPrivate::CreateProgramRequestPrivate(
    const CreateProgramRequestPrivate &other, CreateProgramRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
