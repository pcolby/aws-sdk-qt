// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstudiorequest.h"
#include "createstudiorequest_p.h"
#include "createstudioresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::CreateStudioRequest
 * \brief The CreateStudioRequest class provides an interface for Emr CreateStudio requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::createStudio
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStudioRequest::CreateStudioRequest(const CreateStudioRequest &other)
    : EmrRequest(new CreateStudioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStudioRequest object.
 */
CreateStudioRequest::CreateStudioRequest()
    : EmrRequest(new CreateStudioRequestPrivate(EmrRequest::CreateStudioAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStudioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStudioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStudioRequest::response(QNetworkReply * const reply) const
{
    return new CreateStudioResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::CreateStudioRequestPrivate
 * \brief The CreateStudioRequestPrivate class provides private implementation for CreateStudioRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a CreateStudioRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
CreateStudioRequestPrivate::CreateStudioRequestPrivate(
    const EmrRequest::Action action, CreateStudioRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStudioRequest
 * class' copy constructor.
 */
CreateStudioRequestPrivate::CreateStudioRequestPrivate(
    const CreateStudioRequestPrivate &other, CreateStudioRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
