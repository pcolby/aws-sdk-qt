// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getscreendatarequest.h"
#include "getscreendatarequest_p.h"
#include "getscreendataresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::GetScreenDataRequest
 * \brief The GetScreenDataRequest class provides an interface for Honeycode GetScreenData requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::getScreenData
 */

/*!
 * Constructs a copy of \a other.
 */
GetScreenDataRequest::GetScreenDataRequest(const GetScreenDataRequest &other)
    : HoneycodeRequest(new GetScreenDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetScreenDataRequest object.
 */
GetScreenDataRequest::GetScreenDataRequest()
    : HoneycodeRequest(new GetScreenDataRequestPrivate(HoneycodeRequest::GetScreenDataAction, this))
{

}

/*!
 * \reimp
 */
bool GetScreenDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetScreenDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetScreenDataRequest::response(QNetworkReply * const reply) const
{
    return new GetScreenDataResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::GetScreenDataRequestPrivate
 * \brief The GetScreenDataRequestPrivate class provides private implementation for GetScreenDataRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a GetScreenDataRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
GetScreenDataRequestPrivate::GetScreenDataRequestPrivate(
    const HoneycodeRequest::Action action, GetScreenDataRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetScreenDataRequest
 * class' copy constructor.
 */
GetScreenDataRequestPrivate::GetScreenDataRequestPrivate(
    const GetScreenDataRequestPrivate &other, GetScreenDataRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
