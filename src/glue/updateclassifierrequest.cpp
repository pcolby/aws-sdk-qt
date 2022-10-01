// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclassifierrequest.h"
#include "updateclassifierrequest_p.h"
#include "updateclassifierresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateClassifierRequest
 * \brief The UpdateClassifierRequest class provides an interface for Glue UpdateClassifier requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateClassifier
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateClassifierRequest::UpdateClassifierRequest(const UpdateClassifierRequest &other)
    : GlueRequest(new UpdateClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateClassifierRequest object.
 */
UpdateClassifierRequest::UpdateClassifierRequest()
    : GlueRequest(new UpdateClassifierRequestPrivate(GlueRequest::UpdateClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateClassifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateClassifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClassifierRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClassifierResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateClassifierRequestPrivate
 * \brief The UpdateClassifierRequestPrivate class provides private implementation for UpdateClassifierRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateClassifierRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateClassifierRequestPrivate::UpdateClassifierRequestPrivate(
    const GlueRequest::Action action, UpdateClassifierRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateClassifierRequest
 * class' copy constructor.
 */
UpdateClassifierRequestPrivate::UpdateClassifierRequestPrivate(
    const UpdateClassifierRequestPrivate &other, UpdateClassifierRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
