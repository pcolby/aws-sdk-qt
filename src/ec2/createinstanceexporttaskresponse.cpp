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

#include "createinstanceexporttaskresponse.h"
#include "createinstanceexporttaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::CreateInstanceExportTaskResponse
 * \brief The CreateInstanceExportTaskResponse class provides an interace for Ec2 CreateInstanceExportTask responses.
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
 * \sa Ec2Client::createInstanceExportTask
 */

/*!
 * Constructs a CreateInstanceExportTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInstanceExportTaskResponse::CreateInstanceExportTaskResponse(
        const CreateInstanceExportTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateInstanceExportTaskResponsePrivate(this), parent)
{
    setRequest(new CreateInstanceExportTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInstanceExportTaskRequest * CreateInstanceExportTaskResponse::request() const
{
    Q_D(const CreateInstanceExportTaskResponse);
    return static_cast<const CreateInstanceExportTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2 CreateInstanceExportTask \a response.
 */
void CreateInstanceExportTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInstanceExportTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::CreateInstanceExportTaskResponsePrivate
 * \brief The CreateInstanceExportTaskResponsePrivate class provides private implementation for CreateInstanceExportTaskResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a CreateInstanceExportTaskResponsePrivate object with public implementation \a q.
 */
CreateInstanceExportTaskResponsePrivate::CreateInstanceExportTaskResponsePrivate(
    CreateInstanceExportTaskResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 CreateInstanceExportTask response element from \a xml.
 */
void CreateInstanceExportTaskResponsePrivate::parseCreateInstanceExportTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInstanceExportTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws
