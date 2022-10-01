// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmltransformrequest.h"
#include "createmltransformrequest_p.h"
#include "createmltransformresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateMLTransformRequest
 * \brief The CreateMLTransformRequest class provides an interface for Glue CreateMLTransform requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createMLTransform
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMLTransformRequest::CreateMLTransformRequest(const CreateMLTransformRequest &other)
    : GlueRequest(new CreateMLTransformRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMLTransformRequest object.
 */
CreateMLTransformRequest::CreateMLTransformRequest()
    : GlueRequest(new CreateMLTransformRequestPrivate(GlueRequest::CreateMLTransformAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMLTransformRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMLTransformResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMLTransformRequest::response(QNetworkReply * const reply) const
{
    return new CreateMLTransformResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateMLTransformRequestPrivate
 * \brief The CreateMLTransformRequestPrivate class provides private implementation for CreateMLTransformRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateMLTransformRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateMLTransformRequestPrivate::CreateMLTransformRequestPrivate(
    const GlueRequest::Action action, CreateMLTransformRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMLTransformRequest
 * class' copy constructor.
 */
CreateMLTransformRequestPrivate::CreateMLTransformRequestPrivate(
    const CreateMLTransformRequestPrivate &other, CreateMLTransformRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
