// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmltransformsrequest.h"
#include "listmltransformsrequest_p.h"
#include "listmltransformsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListMLTransformsRequest
 * \brief The ListMLTransformsRequest class provides an interface for Glue ListMLTransforms requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listMLTransforms
 */

/*!
 * Constructs a copy of \a other.
 */
ListMLTransformsRequest::ListMLTransformsRequest(const ListMLTransformsRequest &other)
    : GlueRequest(new ListMLTransformsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMLTransformsRequest object.
 */
ListMLTransformsRequest::ListMLTransformsRequest()
    : GlueRequest(new ListMLTransformsRequestPrivate(GlueRequest::ListMLTransformsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMLTransformsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMLTransformsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMLTransformsRequest::response(QNetworkReply * const reply) const
{
    return new ListMLTransformsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListMLTransformsRequestPrivate
 * \brief The ListMLTransformsRequestPrivate class provides private implementation for ListMLTransformsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListMLTransformsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListMLTransformsRequestPrivate::ListMLTransformsRequestPrivate(
    const GlueRequest::Action action, ListMLTransformsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMLTransformsRequest
 * class' copy constructor.
 */
ListMLTransformsRequestPrivate::ListMLTransformsRequestPrivate(
    const ListMLTransformsRequestPrivate &other, ListMLTransformsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
