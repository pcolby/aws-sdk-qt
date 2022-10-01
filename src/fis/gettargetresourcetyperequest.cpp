// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettargetresourcetyperequest.h"
#include "gettargetresourcetyperequest_p.h"
#include "gettargetresourcetyperesponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::GetTargetResourceTypeRequest
 * \brief The GetTargetResourceTypeRequest class provides an interface for Fis GetTargetResourceType requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::getTargetResourceType
 */

/*!
 * Constructs a copy of \a other.
 */
GetTargetResourceTypeRequest::GetTargetResourceTypeRequest(const GetTargetResourceTypeRequest &other)
    : FisRequest(new GetTargetResourceTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTargetResourceTypeRequest object.
 */
GetTargetResourceTypeRequest::GetTargetResourceTypeRequest()
    : FisRequest(new GetTargetResourceTypeRequestPrivate(FisRequest::GetTargetResourceTypeAction, this))
{

}

/*!
 * \reimp
 */
bool GetTargetResourceTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTargetResourceTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTargetResourceTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetTargetResourceTypeResponse(*this, reply);
}

/*!
 * \class QtAws::Fis::GetTargetResourceTypeRequestPrivate
 * \brief The GetTargetResourceTypeRequestPrivate class provides private implementation for GetTargetResourceTypeRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a GetTargetResourceTypeRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
GetTargetResourceTypeRequestPrivate::GetTargetResourceTypeRequestPrivate(
    const FisRequest::Action action, GetTargetResourceTypeRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTargetResourceTypeRequest
 * class' copy constructor.
 */
GetTargetResourceTypeRequestPrivate::GetTargetResourceTypeRequestPrivate(
    const GetTargetResourceTypeRequestPrivate &other, GetTargetResourceTypeRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace Fis
} // namespace QtAws
