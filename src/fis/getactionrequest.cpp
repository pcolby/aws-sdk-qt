// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getactionrequest.h"
#include "getactionrequest_p.h"
#include "getactionresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::GetActionRequest
 * \brief The GetActionRequest class provides an interface for Fis GetAction requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::getAction
 */

/*!
 * Constructs a copy of \a other.
 */
GetActionRequest::GetActionRequest(const GetActionRequest &other)
    : FisRequest(new GetActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetActionRequest object.
 */
GetActionRequest::GetActionRequest()
    : FisRequest(new GetActionRequestPrivate(FisRequest::GetActionAction, this))
{

}

/*!
 * \reimp
 */
bool GetActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetActionRequest::response(QNetworkReply * const reply) const
{
    return new GetActionResponse(*this, reply);
}

/*!
 * \class QtAws::Fis::GetActionRequestPrivate
 * \brief The GetActionRequestPrivate class provides private implementation for GetActionRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a GetActionRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
GetActionRequestPrivate::GetActionRequestPrivate(
    const FisRequest::Action action, GetActionRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetActionRequest
 * class' copy constructor.
 */
GetActionRequestPrivate::GetActionRequestPrivate(
    const GetActionRequestPrivate &other, GetActionRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace Fis
} // namespace QtAws
