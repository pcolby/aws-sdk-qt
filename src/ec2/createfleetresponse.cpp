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

#include "createfleetresponse.h"
#include "createfleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateFleetResponse
 * \brief The CreateFleetResponse class provides an interace for EC2 CreateFleet responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createFleet
 */

/*!
 * Constructs a CreateFleetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFleetResponse::CreateFleetResponse(
        const CreateFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateFleetResponsePrivate(this), parent)
{
    setRequest(new CreateFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFleetRequest * CreateFleetResponse::request() const
{
    Q_D(const CreateFleetResponse);
    return static_cast<const CreateFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateFleet \a response.
 */
void CreateFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateFleetResponsePrivate
 * \brief The CreateFleetResponsePrivate class provides private implementation for CreateFleetResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateFleetResponsePrivate object with public implementation \a q.
 */
CreateFleetResponsePrivate::CreateFleetResponsePrivate(
    CreateFleetResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateFleet response element from \a xml.
 */
void CreateFleetResponsePrivate::parseCreateFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFleetResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
