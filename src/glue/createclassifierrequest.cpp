// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createclassifierrequest.h"
#include "createclassifierrequest_p.h"
#include "createclassifierresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateClassifierRequest
 * \brief The CreateClassifierRequest class provides an interface for Glue CreateClassifier requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createClassifier
 */

/*!
 * Constructs a copy of \a other.
 */
CreateClassifierRequest::CreateClassifierRequest(const CreateClassifierRequest &other)
    : GlueRequest(new CreateClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateClassifierRequest object.
 */
CreateClassifierRequest::CreateClassifierRequest()
    : GlueRequest(new CreateClassifierRequestPrivate(GlueRequest::CreateClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool CreateClassifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateClassifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateClassifierRequest::response(QNetworkReply * const reply) const
{
    return new CreateClassifierResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateClassifierRequestPrivate
 * \brief The CreateClassifierRequestPrivate class provides private implementation for CreateClassifierRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateClassifierRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateClassifierRequestPrivate::CreateClassifierRequestPrivate(
    const GlueRequest::Action action, CreateClassifierRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateClassifierRequest
 * class' copy constructor.
 */
CreateClassifierRequestPrivate::CreateClassifierRequestPrivate(
    const CreateClassifierRequestPrivate &other, CreateClassifierRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
