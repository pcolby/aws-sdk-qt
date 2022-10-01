// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworldtemplatebodyrequest.h"
#include "getworldtemplatebodyrequest_p.h"
#include "getworldtemplatebodyresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::GetWorldTemplateBodyRequest
 * \brief The GetWorldTemplateBodyRequest class provides an interface for RoboMaker GetWorldTemplateBody requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::getWorldTemplateBody
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorldTemplateBodyRequest::GetWorldTemplateBodyRequest(const GetWorldTemplateBodyRequest &other)
    : RoboMakerRequest(new GetWorldTemplateBodyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorldTemplateBodyRequest object.
 */
GetWorldTemplateBodyRequest::GetWorldTemplateBodyRequest()
    : RoboMakerRequest(new GetWorldTemplateBodyRequestPrivate(RoboMakerRequest::GetWorldTemplateBodyAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorldTemplateBodyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorldTemplateBodyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorldTemplateBodyRequest::response(QNetworkReply * const reply) const
{
    return new GetWorldTemplateBodyResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::GetWorldTemplateBodyRequestPrivate
 * \brief The GetWorldTemplateBodyRequestPrivate class provides private implementation for GetWorldTemplateBodyRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a GetWorldTemplateBodyRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
GetWorldTemplateBodyRequestPrivate::GetWorldTemplateBodyRequestPrivate(
    const RoboMakerRequest::Action action, GetWorldTemplateBodyRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorldTemplateBodyRequest
 * class' copy constructor.
 */
GetWorldTemplateBodyRequestPrivate::GetWorldTemplateBodyRequestPrivate(
    const GetWorldTemplateBodyRequestPrivate &other, GetWorldTemplateBodyRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
