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

#include "deletefleetsresponse.h"
#include "deletefleetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteFleetsResponse
 * \brief The DeleteFleetsResponse class provides an interace for EC2 DeleteFleets responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteFleets
 */

/*!
 * Constructs a DeleteFleetsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFleetsResponse::DeleteFleetsResponse(
        const DeleteFleetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteFleetsResponsePrivate(this), parent)
{
    setRequest(new DeleteFleetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFleetsRequest * DeleteFleetsResponse::request() const
{
    Q_D(const DeleteFleetsResponse);
    return static_cast<const DeleteFleetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteFleets \a response.
 */
void DeleteFleetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFleetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteFleetsResponsePrivate
 * \brief The DeleteFleetsResponsePrivate class provides private implementation for DeleteFleetsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteFleetsResponsePrivate object with public implementation \a q.
 */
DeleteFleetsResponsePrivate::DeleteFleetsResponsePrivate(
    DeleteFleetsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteFleets response element from \a xml.
 */
void DeleteFleetsResponsePrivate::parseDeleteFleetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFleetsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
