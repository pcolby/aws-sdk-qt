// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteclassifierrequest.h"
#include "deleteclassifierrequest_p.h"
#include "deleteclassifierresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteClassifierRequest
 * \brief The DeleteClassifierRequest class provides an interface for Glue DeleteClassifier requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteClassifier
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteClassifierRequest::DeleteClassifierRequest(const DeleteClassifierRequest &other)
    : GlueRequest(new DeleteClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteClassifierRequest object.
 */
DeleteClassifierRequest::DeleteClassifierRequest()
    : GlueRequest(new DeleteClassifierRequestPrivate(GlueRequest::DeleteClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteClassifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteClassifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteClassifierRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClassifierResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteClassifierRequestPrivate
 * \brief The DeleteClassifierRequestPrivate class provides private implementation for DeleteClassifierRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteClassifierRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteClassifierRequestPrivate::DeleteClassifierRequestPrivate(
    const GlueRequest::Action action, DeleteClassifierRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteClassifierRequest
 * class' copy constructor.
 */
DeleteClassifierRequestPrivate::DeleteClassifierRequestPrivate(
    const DeleteClassifierRequestPrivate &other, DeleteClassifierRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
