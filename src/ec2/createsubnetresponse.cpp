/*
    Copyright 2013-2018 Paul Colby

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

#include "createsubnetresponse.h"
#include "createsubnetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateSubnetResponse
 * \brief The CreateSubnetResponse class provides an interace for EC2 CreateSubnet responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createSubnet
 */

/*!
 * Constructs a CreateSubnetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSubnetResponse::CreateSubnetResponse(
        const CreateSubnetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateSubnetResponsePrivate(this), parent)
{
    setRequest(new CreateSubnetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSubnetRequest * CreateSubnetResponse::request() const
{
    Q_D(const CreateSubnetResponse);
    return static_cast<const CreateSubnetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateSubnet \a response.
 */
void CreateSubnetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSubnetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateSubnetResponsePrivate
 * \brief The CreateSubnetResponsePrivate class provides private implementation for CreateSubnetResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateSubnetResponsePrivate object with public implementation \a q.
 */
CreateSubnetResponsePrivate::CreateSubnetResponsePrivate(
    CreateSubnetResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateSubnet response element from \a xml.
 */
void CreateSubnetResponsePrivate::parseCreateSubnetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSubnetResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
