// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createexperiencerequest.h"
#include "createexperiencerequest_p.h"
#include "createexperienceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateExperienceRequest
 * \brief The CreateExperienceRequest class provides an interface for Kendra CreateExperience requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createExperience
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExperienceRequest::CreateExperienceRequest(const CreateExperienceRequest &other)
    : KendraRequest(new CreateExperienceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExperienceRequest object.
 */
CreateExperienceRequest::CreateExperienceRequest()
    : KendraRequest(new CreateExperienceRequestPrivate(KendraRequest::CreateExperienceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExperienceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExperienceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExperienceRequest::response(QNetworkReply * const reply) const
{
    return new CreateExperienceResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::CreateExperienceRequestPrivate
 * \brief The CreateExperienceRequestPrivate class provides private implementation for CreateExperienceRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateExperienceRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
CreateExperienceRequestPrivate::CreateExperienceRequestPrivate(
    const KendraRequest::Action action, CreateExperienceRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExperienceRequest
 * class' copy constructor.
 */
CreateExperienceRequestPrivate::CreateExperienceRequestPrivate(
    const CreateExperienceRequestPrivate &other, CreateExperienceRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
