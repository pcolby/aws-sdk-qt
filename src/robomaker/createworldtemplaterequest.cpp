// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworldtemplaterequest.h"
#include "createworldtemplaterequest_p.h"
#include "createworldtemplateresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateWorldTemplateRequest
 * \brief The CreateWorldTemplateRequest class provides an interface for RoboMaker CreateWorldTemplate requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createWorldTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorldTemplateRequest::CreateWorldTemplateRequest(const CreateWorldTemplateRequest &other)
    : RoboMakerRequest(new CreateWorldTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorldTemplateRequest object.
 */
CreateWorldTemplateRequest::CreateWorldTemplateRequest()
    : RoboMakerRequest(new CreateWorldTemplateRequestPrivate(RoboMakerRequest::CreateWorldTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorldTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorldTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorldTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorldTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateWorldTemplateRequestPrivate
 * \brief The CreateWorldTemplateRequestPrivate class provides private implementation for CreateWorldTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateWorldTemplateRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateWorldTemplateRequestPrivate::CreateWorldTemplateRequestPrivate(
    const RoboMakerRequest::Action action, CreateWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorldTemplateRequest
 * class' copy constructor.
 */
CreateWorldTemplateRequestPrivate::CreateWorldTemplateRequestPrivate(
    const CreateWorldTemplateRequestPrivate &other, CreateWorldTemplateRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
