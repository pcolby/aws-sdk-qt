/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletenetworkinterfacepermissionresponse.h"
#include "deletenetworkinterfacepermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteNetworkInterfacePermissionResponse
 * \brief The DeleteNetworkInterfacePermissionResponse class provides an interace for EC2 DeleteNetworkInterfacePermission responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::deleteNetworkInterfacePermission
 */

/*!
 * Constructs a DeleteNetworkInterfacePermissionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNetworkInterfacePermissionResponse::DeleteNetworkInterfacePermissionResponse(
        const DeleteNetworkInterfacePermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteNetworkInterfacePermissionResponsePrivate(this), parent)
{
    setRequest(new DeleteNetworkInterfacePermissionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNetworkInterfacePermissionRequest * DeleteNetworkInterfacePermissionResponse::request() const
{
    Q_D(const DeleteNetworkInterfacePermissionResponse);
    return static_cast<const DeleteNetworkInterfacePermissionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteNetworkInterfacePermission \a response.
 */
void DeleteNetworkInterfacePermissionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteNetworkInterfacePermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteNetworkInterfacePermissionResponsePrivate
 * \brief The DeleteNetworkInterfacePermissionResponsePrivate class provides private implementation for DeleteNetworkInterfacePermissionResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteNetworkInterfacePermissionResponsePrivate object with public implementation \a q.
 */
DeleteNetworkInterfacePermissionResponsePrivate::DeleteNetworkInterfacePermissionResponsePrivate(
    DeleteNetworkInterfacePermissionResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteNetworkInterfacePermission response element from \a xml.
 */
void DeleteNetworkInterfacePermissionResponsePrivate::parseDeleteNetworkInterfacePermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNetworkInterfacePermissionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
