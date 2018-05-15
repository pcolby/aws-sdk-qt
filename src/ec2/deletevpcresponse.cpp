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

#include "deletevpcresponse.h"
#include "deletevpcresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteVpcResponse
 * \brief The DeleteVpcResponse class provides an interace for EC2 DeleteVpc responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteVpc
 */

/*!
 * Constructs a DeleteVpcResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVpcResponse::DeleteVpcResponse(
        const DeleteVpcRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteVpcResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVpcRequest * DeleteVpcResponse::request() const
{
    Q_D(const DeleteVpcResponse);
    return static_cast<const DeleteVpcRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteVpc \a response.
 */
void DeleteVpcResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVpcResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteVpcResponsePrivate
 * \brief The DeleteVpcResponsePrivate class provides private implementation for DeleteVpcResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteVpcResponsePrivate object with public implementation \a q.
 */
DeleteVpcResponsePrivate::DeleteVpcResponsePrivate(
    DeleteVpcResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteVpc response element from \a xml.
 */
void DeleteVpcResponsePrivate::parseDeleteVpcResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
