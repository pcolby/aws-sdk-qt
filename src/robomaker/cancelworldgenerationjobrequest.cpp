// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelworldgenerationjobrequest.h"
#include "cancelworldgenerationjobrequest_p.h"
#include "cancelworldgenerationjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelWorldGenerationJobRequest
 * \brief The CancelWorldGenerationJobRequest class provides an interface for RoboMaker CancelWorldGenerationJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelWorldGenerationJob
 */

/*!
 * Constructs a copy of \a other.
 */
CancelWorldGenerationJobRequest::CancelWorldGenerationJobRequest(const CancelWorldGenerationJobRequest &other)
    : RoboMakerRequest(new CancelWorldGenerationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelWorldGenerationJobRequest object.
 */
CancelWorldGenerationJobRequest::CancelWorldGenerationJobRequest()
    : RoboMakerRequest(new CancelWorldGenerationJobRequestPrivate(RoboMakerRequest::CancelWorldGenerationJobAction, this))
{

}

/*!
 * \reimp
 */
bool CancelWorldGenerationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelWorldGenerationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelWorldGenerationJobRequest::response(QNetworkReply * const reply) const
{
    return new CancelWorldGenerationJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CancelWorldGenerationJobRequestPrivate
 * \brief The CancelWorldGenerationJobRequestPrivate class provides private implementation for CancelWorldGenerationJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelWorldGenerationJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CancelWorldGenerationJobRequestPrivate::CancelWorldGenerationJobRequestPrivate(
    const RoboMakerRequest::Action action, CancelWorldGenerationJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelWorldGenerationJobRequest
 * class' copy constructor.
 */
CancelWorldGenerationJobRequestPrivate::CancelWorldGenerationJobRequestPrivate(
    const CancelWorldGenerationJobRequestPrivate &other, CancelWorldGenerationJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
