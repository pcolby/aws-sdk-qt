// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifycapacityreservationresponse.h"
#include "modifycapacityreservationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::ModifyCapacityReservationResponse
 * \brief The ModifyCapacityReservationResponse class provides an interace for Ec2 ModifyCapacityReservation responses.
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
 * \sa Ec2Client::modifyCapacityReservation
 */

/*!
 * Constructs a ModifyCapacityReservationResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyCapacityReservationResponse::ModifyCapacityReservationResponse(
        const ModifyCapacityReservationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ModifyCapacityReservationResponsePrivate(this), parent)
{
    setRequest(new ModifyCapacityReservationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyCapacityReservationRequest * ModifyCapacityReservationResponse::request() const
{
    Q_D(const ModifyCapacityReservationResponse);
    return static_cast<const ModifyCapacityReservationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2 ModifyCapacityReservation \a response.
 */
void ModifyCapacityReservationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyCapacityReservationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::ModifyCapacityReservationResponsePrivate
 * \brief The ModifyCapacityReservationResponsePrivate class provides private implementation for ModifyCapacityReservationResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a ModifyCapacityReservationResponsePrivate object with public implementation \a q.
 */
ModifyCapacityReservationResponsePrivate::ModifyCapacityReservationResponsePrivate(
    ModifyCapacityReservationResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 ModifyCapacityReservation response element from \a xml.
 */
void ModifyCapacityReservationResponsePrivate::parseModifyCapacityReservationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyCapacityReservationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws
