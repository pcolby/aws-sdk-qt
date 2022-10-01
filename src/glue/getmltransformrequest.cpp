// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmltransformrequest.h"
#include "getmltransformrequest_p.h"
#include "getmltransformresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMLTransformRequest
 * \brief The GetMLTransformRequest class provides an interface for Glue GetMLTransform requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getMLTransform
 */

/*!
 * Constructs a copy of \a other.
 */
GetMLTransformRequest::GetMLTransformRequest(const GetMLTransformRequest &other)
    : GlueRequest(new GetMLTransformRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMLTransformRequest object.
 */
GetMLTransformRequest::GetMLTransformRequest()
    : GlueRequest(new GetMLTransformRequestPrivate(GlueRequest::GetMLTransformAction, this))
{

}

/*!
 * \reimp
 */
bool GetMLTransformRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMLTransformResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMLTransformRequest::response(QNetworkReply * const reply) const
{
    return new GetMLTransformResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetMLTransformRequestPrivate
 * \brief The GetMLTransformRequestPrivate class provides private implementation for GetMLTransformRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMLTransformRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetMLTransformRequestPrivate::GetMLTransformRequestPrivate(
    const GlueRequest::Action action, GetMLTransformRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMLTransformRequest
 * class' copy constructor.
 */
GetMLTransformRequestPrivate::GetMLTransformRequestPrivate(
    const GetMLTransformRequestPrivate &other, GetMLTransformRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
