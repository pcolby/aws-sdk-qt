// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworldtemplaterequest.h"
#include "updateworldtemplaterequest_p.h"
#include "updateworldtemplateresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::UpdateWorldTemplateRequest
 * \brief The UpdateWorldTemplateRequest class provides an interface for RoboMaker UpdateWorldTemplate requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::updateWorldTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorldTemplateRequest::UpdateWorldTemplateRequest(const UpdateWorldTemplateRequest &other)
    : RoboMakerRequest(new UpdateWorldTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorldTemplateRequest object.
 */
UpdateWorldTemplateRequest::UpdateWorldTemplateRequest()
    : RoboMakerRequest(new UpdateWorldTemplateRequestPrivate(RoboMakerRequest::UpdateWorldTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorldTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorldTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorldTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorldTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::UpdateWorldTemplateRequestPrivate
 * \brief The UpdateWorldTemplateRequestPrivate class provides private implementation for UpdateWorldTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a UpdateWorldTemplateRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
UpdateWorldTemplateRequestPrivate::UpdateWorldTemplateRequestPrivate(
    const RoboMakerRequest::Action action, UpdateWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorldTemplateRequest
 * class' copy constructor.
 */
UpdateWorldTemplateRequestPrivate::UpdateWorldTemplateRequestPrivate(
    const UpdateWorldTemplateRequestPrivate &other, UpdateWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
