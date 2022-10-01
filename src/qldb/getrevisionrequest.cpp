// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrevisionrequest.h"
#include "getrevisionrequest_p.h"
#include "getrevisionresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::GetRevisionRequest
 * \brief The GetRevisionRequest class provides an interface for Qldb GetRevision requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::getRevision
 */

/*!
 * Constructs a copy of \a other.
 */
GetRevisionRequest::GetRevisionRequest(const GetRevisionRequest &other)
    : QldbRequest(new GetRevisionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRevisionRequest object.
 */
GetRevisionRequest::GetRevisionRequest()
    : QldbRequest(new GetRevisionRequestPrivate(QldbRequest::GetRevisionAction, this))
{

}

/*!
 * \reimp
 */
bool GetRevisionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRevisionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRevisionRequest::response(QNetworkReply * const reply) const
{
    return new GetRevisionResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::GetRevisionRequestPrivate
 * \brief The GetRevisionRequestPrivate class provides private implementation for GetRevisionRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a GetRevisionRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
GetRevisionRequestPrivate::GetRevisionRequestPrivate(
    const QldbRequest::Action action, GetRevisionRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRevisionRequest
 * class' copy constructor.
 */
GetRevisionRequestPrivate::GetRevisionRequestPrivate(
    const GetRevisionRequestPrivate &other, GetRevisionRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
