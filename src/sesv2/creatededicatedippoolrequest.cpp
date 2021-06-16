/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "creatededicatedippoolrequest.h"
#include "creatededicatedippoolrequest_p.h"
#include "creatededicatedippoolresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESV2 {

/*!
 * \class QtAws::SESV2::CreateDedicatedIpPoolRequest
 * \brief The CreateDedicatedIpPoolRequest class provides an interface for SESV2 CreateDedicatedIpPool requests.
 *
 * \inmodule QtAwsSESV2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  Welcome to the Amazon SES API v2 Reference. This guide provides information about the Amazon SES API v2, including
 *  supported operations, data types, parameters, and
 * 
 *  schemas>
 * 
 *  <a href="https://aws.amazon.com/pinpoint">Amazon SES</a> is an AWS service that you can use to send email messages to
 *  your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to also review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 * 
 *  programmatically>
 * 
 *  The Amazon SES API v2 is available in several AWS Regions and it provides an endpoint for each of these Regions. For a
 *  list of all the Regions and endpoints where the API is currently available, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#ses_region">AWS Service Endpoints</a> in the <i>Amazon
 *  Web Services General Reference</i>. To learn more about AWS Regions, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html">Managing AWS Regions</a> in the <i>Amazon Web
 *  Services General
 * 
 *  Reference</i>>
 * 
 *  In each Region, AWS maintains multiple Availability Zones. These Availability Zones are physically isolated from each
 *  other, but are united by private, low-latency, high-throughput, and highly redundant network connections. These
 *  Availability Zones enable us to provide very high levels of availability and redundancy, while also minimizing latency.
 *  To learn more about the number of Availability Zones that are available in each Region, see <a
 *  href="http://aws.amazon.com/about-aws/global-infrastructure/">AWS Global
 *
 * \sa Sesv2Client::createDedicatedIpPool
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDedicatedIpPoolRequest::CreateDedicatedIpPoolRequest(const CreateDedicatedIpPoolRequest &other)
    : Sesv2Request(new CreateDedicatedIpPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDedicatedIpPoolRequest object.
 */
CreateDedicatedIpPoolRequest::CreateDedicatedIpPoolRequest()
    : Sesv2Request(new CreateDedicatedIpPoolRequestPrivate(Sesv2Request::CreateDedicatedIpPoolAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDedicatedIpPoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDedicatedIpPoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDedicatedIpPoolRequest::response(QNetworkReply * const reply) const
{
    return new CreateDedicatedIpPoolResponse(*this, reply);
}

/*!
 * \class QtAws::SESV2::CreateDedicatedIpPoolRequestPrivate
 * \brief The CreateDedicatedIpPoolRequestPrivate class provides private implementation for CreateDedicatedIpPoolRequest.
 * \internal
 *
 * \inmodule QtAwsSESV2
 */

/*!
 * Constructs a CreateDedicatedIpPoolRequestPrivate object for Sesv2 \a action,
 * with public implementation \a q.
 */
CreateDedicatedIpPoolRequestPrivate::CreateDedicatedIpPoolRequestPrivate(
    const Sesv2Request::Action action, CreateDedicatedIpPoolRequest * const q)
    : Sesv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDedicatedIpPoolRequest
 * class' copy constructor.
 */
CreateDedicatedIpPoolRequestPrivate::CreateDedicatedIpPoolRequestPrivate(
    const CreateDedicatedIpPoolRequestPrivate &other, CreateDedicatedIpPoolRequest * const q)
    : Sesv2RequestPrivate(other, q)
{

}

} // namespace SESV2
} // namespace QtAws
