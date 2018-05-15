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

#include "modifyfleetresponse.h"
#include "modifyfleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyFleetResponse
 * \brief The ModifyFleetResponse class provides an interace for EC2 ModifyFleet responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::modifyFleet
 */

/*!
 * Constructs a ModifyFleetResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyFleetResponse::ModifyFleetResponse(
        const ModifyFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ModifyFleetResponsePrivate(this), parent)
{
    setRequest(new ModifyFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyFleetRequest * ModifyFleetResponse::request() const
{
    Q_D(const ModifyFleetResponse);
    return static_cast<const ModifyFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ModifyFleet \a response.
 */
void ModifyFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ModifyFleetResponsePrivate
 * \brief The ModifyFleetResponsePrivate class provides private implementation for ModifyFleetResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyFleetResponsePrivate object with public implementation \a q.
 */
ModifyFleetResponsePrivate::ModifyFleetResponsePrivate(
    ModifyFleetResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ModifyFleet response element from \a xml.
 */
void ModifyFleetResponsePrivate::parseModifyFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyFleetResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
