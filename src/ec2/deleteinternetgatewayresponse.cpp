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

#include "deleteinternetgatewayresponse.h"
#include "deleteinternetgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteInternetGatewayResponse
 * \brief The DeleteInternetGatewayResponse class provides an interace for EC2 DeleteInternetGateway responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteInternetGateway
 */

/*!
 * Constructs a DeleteInternetGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInternetGatewayResponse::DeleteInternetGatewayResponse(
        const DeleteInternetGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteInternetGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteInternetGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInternetGatewayRequest * DeleteInternetGatewayResponse::request() const
{
    Q_D(const DeleteInternetGatewayResponse);
    return static_cast<const DeleteInternetGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteInternetGateway \a response.
 */
void DeleteInternetGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInternetGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteInternetGatewayResponsePrivate
 * \brief The DeleteInternetGatewayResponsePrivate class provides private implementation for DeleteInternetGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteInternetGatewayResponsePrivate object with public implementation \a q.
 */
DeleteInternetGatewayResponsePrivate::DeleteInternetGatewayResponsePrivate(
    DeleteInternetGatewayResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteInternetGateway response element from \a xml.
 */
void DeleteInternetGatewayResponsePrivate::parseDeleteInternetGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInternetGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
