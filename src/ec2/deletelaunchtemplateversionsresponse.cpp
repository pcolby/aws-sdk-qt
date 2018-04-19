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

#include "deletelaunchtemplateversionsresponse.h"
#include "deletelaunchtemplateversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteLaunchTemplateVersionsResponse
 * \brief The DeleteLaunchTemplateVersionsResponse class provides an interace for EC2 DeleteLaunchTemplateVersions responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteLaunchTemplateVersions
 */

/*!
 * Constructs a DeleteLaunchTemplateVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLaunchTemplateVersionsResponse::DeleteLaunchTemplateVersionsResponse(
        const DeleteLaunchTemplateVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteLaunchTemplateVersionsResponsePrivate(this), parent)
{
    setRequest(new DeleteLaunchTemplateVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLaunchTemplateVersionsRequest * DeleteLaunchTemplateVersionsResponse::request() const
{
    Q_D(const DeleteLaunchTemplateVersionsResponse);
    return static_cast<const DeleteLaunchTemplateVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteLaunchTemplateVersions \a response.
 */
void DeleteLaunchTemplateVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteLaunchTemplateVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteLaunchTemplateVersionsResponsePrivate
 * \brief The DeleteLaunchTemplateVersionsResponsePrivate class provides private implementation for DeleteLaunchTemplateVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteLaunchTemplateVersionsResponsePrivate object with public implementation \a q.
 */
DeleteLaunchTemplateVersionsResponsePrivate::DeleteLaunchTemplateVersionsResponsePrivate(
    DeleteLaunchTemplateVersionsResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteLaunchTemplateVersions response element from \a xml.
 */
void DeleteLaunchTemplateVersionsResponsePrivate::parseDeleteLaunchTemplateVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLaunchTemplateVersionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
