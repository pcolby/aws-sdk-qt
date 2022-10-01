// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifycapacityreservationfleetrequest.h"
#include "modifycapacityreservationfleetrequest_p.h"
#include "modifycapacityreservationfleetresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::ModifyCapacityReservationFleetRequest
 * \brief The ModifyCapacityReservationFleetRequest class provides an interface for Ec2 ModifyCapacityReservationFleet requests.
 *
 * \inmodule QtAwsEc2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the Amazon Web Services
 *  Cloud. Using Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *  faster. Amazon Virtual Private Cloud (Amazon VPC) enables you to provision a logically isolated section of the Amazon
 *  Web Services Cloud where you can launch Amazon Web Services resources in a virtual network that you've defined. Amazon
 *  Elastic Block Store (Amazon EBS) provides block level storage volumes for use with EC2 instances. EBS volumes are highly
 *  available and reliable storage volumes that can be attached to any running instance and used like a hard
 * 
 *  drive>
 * 
 *  To learn more, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon EC2: <a href="http://aws.amazon.com/ec2">AmazonEC2 product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon EBS: <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ebs">Amazon EBS documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon VPC: <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon Web Services VPN: <a href="http://aws.amazon.com/vpn">Amazon Web Services VPN product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpn">Amazon Web Services VPN documentation</a>
 *
 * \sa Ec2Client::modifyCapacityReservationFleet
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyCapacityReservationFleetRequest::ModifyCapacityReservationFleetRequest(const ModifyCapacityReservationFleetRequest &other)
    : Ec2Request(new ModifyCapacityReservationFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyCapacityReservationFleetRequest object.
 */
ModifyCapacityReservationFleetRequest::ModifyCapacityReservationFleetRequest()
    : Ec2Request(new ModifyCapacityReservationFleetRequestPrivate(Ec2Request::ModifyCapacityReservationFleetAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyCapacityReservationFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyCapacityReservationFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyCapacityReservationFleetRequest::response(QNetworkReply * const reply) const
{
    return new ModifyCapacityReservationFleetResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::ModifyCapacityReservationFleetRequestPrivate
 * \brief The ModifyCapacityReservationFleetRequestPrivate class provides private implementation for ModifyCapacityReservationFleetRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a ModifyCapacityReservationFleetRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
ModifyCapacityReservationFleetRequestPrivate::ModifyCapacityReservationFleetRequestPrivate(
    const Ec2Request::Action action, ModifyCapacityReservationFleetRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyCapacityReservationFleetRequest
 * class' copy constructor.
 */
ModifyCapacityReservationFleetRequestPrivate::ModifyCapacityReservationFleetRequestPrivate(
    const ModifyCapacityReservationFleetRequestPrivate &other, ModifyCapacityReservationFleetRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
