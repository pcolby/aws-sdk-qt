// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcompliancedetailrequest.h"
#include "getcompliancedetailrequest_p.h"
#include "getcompliancedetailresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetComplianceDetailRequest
 * \brief The GetComplianceDetailRequest class provides an interface for Fms GetComplianceDetail requests.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::getComplianceDetail
 */

/*!
 * Constructs a copy of \a other.
 */
GetComplianceDetailRequest::GetComplianceDetailRequest(const GetComplianceDetailRequest &other)
    : FmsRequest(new GetComplianceDetailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetComplianceDetailRequest object.
 */
GetComplianceDetailRequest::GetComplianceDetailRequest()
    : FmsRequest(new GetComplianceDetailRequestPrivate(FmsRequest::GetComplianceDetailAction, this))
{

}

/*!
 * \reimp
 */
bool GetComplianceDetailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetComplianceDetailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetComplianceDetailRequest::response(QNetworkReply * const reply) const
{
    return new GetComplianceDetailResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::GetComplianceDetailRequestPrivate
 * \brief The GetComplianceDetailRequestPrivate class provides private implementation for GetComplianceDetailRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetComplianceDetailRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
GetComplianceDetailRequestPrivate::GetComplianceDetailRequestPrivate(
    const FmsRequest::Action action, GetComplianceDetailRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetComplianceDetailRequest
 * class' copy constructor.
 */
GetComplianceDetailRequestPrivate::GetComplianceDetailRequestPrivate(
    const GetComplianceDetailRequestPrivate &other, GetComplianceDetailRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
