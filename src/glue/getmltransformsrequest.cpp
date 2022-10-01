// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmltransformsrequest.h"
#include "getmltransformsrequest_p.h"
#include "getmltransformsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMLTransformsRequest
 * \brief The GetMLTransformsRequest class provides an interface for Glue GetMLTransforms requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getMLTransforms
 */

/*!
 * Constructs a copy of \a other.
 */
GetMLTransformsRequest::GetMLTransformsRequest(const GetMLTransformsRequest &other)
    : GlueRequest(new GetMLTransformsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMLTransformsRequest object.
 */
GetMLTransformsRequest::GetMLTransformsRequest()
    : GlueRequest(new GetMLTransformsRequestPrivate(GlueRequest::GetMLTransformsAction, this))
{

}

/*!
 * \reimp
 */
bool GetMLTransformsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMLTransformsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMLTransformsRequest::response(QNetworkReply * const reply) const
{
    return new GetMLTransformsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetMLTransformsRequestPrivate
 * \brief The GetMLTransformsRequestPrivate class provides private implementation for GetMLTransformsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMLTransformsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetMLTransformsRequestPrivate::GetMLTransformsRequestPrivate(
    const GlueRequest::Action action, GetMLTransformsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMLTransformsRequest
 * class' copy constructor.
 */
GetMLTransformsRequestPrivate::GetMLTransformsRequestPrivate(
    const GetMLTransformsRequestPrivate &other, GetMLTransformsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
