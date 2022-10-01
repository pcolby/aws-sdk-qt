// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccesspointsforobjectlambdarequest.h"
#include "listaccesspointsforobjectlambdarequest_p.h"
#include "listaccesspointsforobjectlambdaresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListAccessPointsForObjectLambdaRequest
 * \brief The ListAccessPointsForObjectLambdaRequest class provides an interface for S3Control ListAccessPointsForObjectLambda requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listAccessPointsForObjectLambda
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccessPointsForObjectLambdaRequest::ListAccessPointsForObjectLambdaRequest(const ListAccessPointsForObjectLambdaRequest &other)
    : S3ControlRequest(new ListAccessPointsForObjectLambdaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccessPointsForObjectLambdaRequest object.
 */
ListAccessPointsForObjectLambdaRequest::ListAccessPointsForObjectLambdaRequest()
    : S3ControlRequest(new ListAccessPointsForObjectLambdaRequestPrivate(S3ControlRequest::ListAccessPointsForObjectLambdaAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccessPointsForObjectLambdaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccessPointsForObjectLambdaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccessPointsForObjectLambdaRequest::response(QNetworkReply * const reply) const
{
    return new ListAccessPointsForObjectLambdaResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::ListAccessPointsForObjectLambdaRequestPrivate
 * \brief The ListAccessPointsForObjectLambdaRequestPrivate class provides private implementation for ListAccessPointsForObjectLambdaRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListAccessPointsForObjectLambdaRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
ListAccessPointsForObjectLambdaRequestPrivate::ListAccessPointsForObjectLambdaRequestPrivate(
    const S3ControlRequest::Action action, ListAccessPointsForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccessPointsForObjectLambdaRequest
 * class' copy constructor.
 */
ListAccessPointsForObjectLambdaRequestPrivate::ListAccessPointsForObjectLambdaRequestPrivate(
    const ListAccessPointsForObjectLambdaRequestPrivate &other, ListAccessPointsForObjectLambdaRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
