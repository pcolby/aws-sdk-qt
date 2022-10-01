// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdigestrequest.h"
#include "getdigestrequest_p.h"
#include "getdigestresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::GetDigestRequest
 * \brief The GetDigestRequest class provides an interface for Qldb GetDigest requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::getDigest
 */

/*!
 * Constructs a copy of \a other.
 */
GetDigestRequest::GetDigestRequest(const GetDigestRequest &other)
    : QldbRequest(new GetDigestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDigestRequest object.
 */
GetDigestRequest::GetDigestRequest()
    : QldbRequest(new GetDigestRequestPrivate(QldbRequest::GetDigestAction, this))
{

}

/*!
 * \reimp
 */
bool GetDigestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDigestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDigestRequest::response(QNetworkReply * const reply) const
{
    return new GetDigestResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::GetDigestRequestPrivate
 * \brief The GetDigestRequestPrivate class provides private implementation for GetDigestRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a GetDigestRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
GetDigestRequestPrivate::GetDigestRequestPrivate(
    const QldbRequest::Action action, GetDigestRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDigestRequest
 * class' copy constructor.
 */
GetDigestRequestPrivate::GetDigestRequestPrivate(
    const GetDigestRequestPrivate &other, GetDigestRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
