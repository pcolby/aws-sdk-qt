// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemltransformrequest.h"
#include "updatemltransformrequest_p.h"
#include "updatemltransformresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateMLTransformRequest
 * \brief The UpdateMLTransformRequest class provides an interface for Glue UpdateMLTransform requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateMLTransform
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMLTransformRequest::UpdateMLTransformRequest(const UpdateMLTransformRequest &other)
    : GlueRequest(new UpdateMLTransformRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMLTransformRequest object.
 */
UpdateMLTransformRequest::UpdateMLTransformRequest()
    : GlueRequest(new UpdateMLTransformRequestPrivate(GlueRequest::UpdateMLTransformAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMLTransformRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMLTransformResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMLTransformRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMLTransformResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateMLTransformRequestPrivate
 * \brief The UpdateMLTransformRequestPrivate class provides private implementation for UpdateMLTransformRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateMLTransformRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateMLTransformRequestPrivate::UpdateMLTransformRequestPrivate(
    const GlueRequest::Action action, UpdateMLTransformRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMLTransformRequest
 * class' copy constructor.
 */
UpdateMLTransformRequestPrivate::UpdateMLTransformRequestPrivate(
    const UpdateMLTransformRequestPrivate &other, UpdateMLTransformRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
