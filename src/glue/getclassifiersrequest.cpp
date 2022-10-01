// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getclassifiersrequest.h"
#include "getclassifiersrequest_p.h"
#include "getclassifiersresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetClassifiersRequest
 * \brief The GetClassifiersRequest class provides an interface for Glue GetClassifiers requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getClassifiers
 */

/*!
 * Constructs a copy of \a other.
 */
GetClassifiersRequest::GetClassifiersRequest(const GetClassifiersRequest &other)
    : GlueRequest(new GetClassifiersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetClassifiersRequest object.
 */
GetClassifiersRequest::GetClassifiersRequest()
    : GlueRequest(new GetClassifiersRequestPrivate(GlueRequest::GetClassifiersAction, this))
{

}

/*!
 * \reimp
 */
bool GetClassifiersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetClassifiersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetClassifiersRequest::response(QNetworkReply * const reply) const
{
    return new GetClassifiersResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetClassifiersRequestPrivate
 * \brief The GetClassifiersRequestPrivate class provides private implementation for GetClassifiersRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetClassifiersRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetClassifiersRequestPrivate::GetClassifiersRequestPrivate(
    const GlueRequest::Action action, GetClassifiersRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetClassifiersRequest
 * class' copy constructor.
 */
GetClassifiersRequestPrivate::GetClassifiersRequestPrivate(
    const GetClassifiersRequestPrivate &other, GetClassifiersRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
