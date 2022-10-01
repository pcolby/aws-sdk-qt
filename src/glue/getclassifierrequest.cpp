// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getclassifierrequest.h"
#include "getclassifierrequest_p.h"
#include "getclassifierresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetClassifierRequest
 * \brief The GetClassifierRequest class provides an interface for Glue GetClassifier requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getClassifier
 */

/*!
 * Constructs a copy of \a other.
 */
GetClassifierRequest::GetClassifierRequest(const GetClassifierRequest &other)
    : GlueRequest(new GetClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetClassifierRequest object.
 */
GetClassifierRequest::GetClassifierRequest()
    : GlueRequest(new GetClassifierRequestPrivate(GlueRequest::GetClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool GetClassifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetClassifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetClassifierRequest::response(QNetworkReply * const reply) const
{
    return new GetClassifierResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetClassifierRequestPrivate
 * \brief The GetClassifierRequestPrivate class provides private implementation for GetClassifierRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetClassifierRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetClassifierRequestPrivate::GetClassifierRequestPrivate(
    const GlueRequest::Action action, GetClassifierRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetClassifierRequest
 * class' copy constructor.
 */
GetClassifierRequestPrivate::GetClassifierRequestPrivate(
    const GetClassifierRequestPrivate &other, GetClassifierRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
