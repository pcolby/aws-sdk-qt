// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworldtemplaterequest.h"
#include "deleteworldtemplaterequest_p.h"
#include "deleteworldtemplateresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteWorldTemplateRequest
 * \brief The DeleteWorldTemplateRequest class provides an interface for RoboMaker DeleteWorldTemplate requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteWorldTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorldTemplateRequest::DeleteWorldTemplateRequest(const DeleteWorldTemplateRequest &other)
    : RoboMakerRequest(new DeleteWorldTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorldTemplateRequest object.
 */
DeleteWorldTemplateRequest::DeleteWorldTemplateRequest()
    : RoboMakerRequest(new DeleteWorldTemplateRequestPrivate(RoboMakerRequest::DeleteWorldTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorldTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorldTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorldTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorldTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DeleteWorldTemplateRequestPrivate
 * \brief The DeleteWorldTemplateRequestPrivate class provides private implementation for DeleteWorldTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteWorldTemplateRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DeleteWorldTemplateRequestPrivate::DeleteWorldTemplateRequestPrivate(
    const RoboMakerRequest::Action action, DeleteWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorldTemplateRequest
 * class' copy constructor.
 */
DeleteWorldTemplateRequestPrivate::DeleteWorldTemplateRequestPrivate(
    const DeleteWorldTemplateRequestPrivate &other, DeleteWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
