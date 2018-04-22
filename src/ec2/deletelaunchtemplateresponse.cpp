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

#include "deletelaunchtemplateresponse.h"
#include "deletelaunchtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteLaunchTemplateResponse
 * \brief The DeleteLaunchTemplateResponse class provides an interace for EC2 DeleteLaunchTemplate responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteLaunchTemplate
 */

/*!
 * Constructs a DeleteLaunchTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLaunchTemplateResponse::DeleteLaunchTemplateResponse(
        const DeleteLaunchTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteLaunchTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteLaunchTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLaunchTemplateRequest * DeleteLaunchTemplateResponse::request() const
{
    Q_D(const DeleteLaunchTemplateResponse);
    return static_cast<const DeleteLaunchTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteLaunchTemplate \a response.
 */
void DeleteLaunchTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteLaunchTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteLaunchTemplateResponsePrivate
 * \brief The DeleteLaunchTemplateResponsePrivate class provides private implementation for DeleteLaunchTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteLaunchTemplateResponsePrivate object with public implementation \a q.
 */
DeleteLaunchTemplateResponsePrivate::DeleteLaunchTemplateResponsePrivate(
    DeleteLaunchTemplateResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteLaunchTemplate response element from \a xml.
 */
void DeleteLaunchTemplateResponsePrivate::parseDeleteLaunchTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLaunchTemplateResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
