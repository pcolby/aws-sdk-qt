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

#include "modifysnapshotattributeresponse.h"
#include "modifysnapshotattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifySnapshotAttributeResponse
 * \brief The ModifySnapshotAttributeResponse class provides an interace for EC2 ModifySnapshotAttribute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::modifySnapshotAttribute
 */

/*!
 * Constructs a ModifySnapshotAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
ModifySnapshotAttributeResponse::ModifySnapshotAttributeResponse(
        const ModifySnapshotAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ModifySnapshotAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifySnapshotAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifySnapshotAttributeRequest * ModifySnapshotAttributeResponse::request() const
{
    Q_D(const ModifySnapshotAttributeResponse);
    return static_cast<const ModifySnapshotAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ModifySnapshotAttribute \a response.
 */
void ModifySnapshotAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifySnapshotAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ModifySnapshotAttributeResponsePrivate
 * \brief The ModifySnapshotAttributeResponsePrivate class provides private implementation for ModifySnapshotAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifySnapshotAttributeResponsePrivate object with public implementation \a q.
 */
ModifySnapshotAttributeResponsePrivate::ModifySnapshotAttributeResponsePrivate(
    ModifySnapshotAttributeResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ModifySnapshotAttribute response element from \a xml.
 */
void ModifySnapshotAttributeResponsePrivate::parseModifySnapshotAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifySnapshotAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
