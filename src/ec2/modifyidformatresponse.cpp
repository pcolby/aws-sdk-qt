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

#include "modifyidformatresponse.h"
#include "modifyidformatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyIdFormatResponse
 * \brief The ModifyIdFormatResponse class provides an interace for EC2 ModifyIdFormat responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::modifyIdFormat
 */

/*!
 * Constructs a ModifyIdFormatResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyIdFormatResponse::ModifyIdFormatResponse(
        const ModifyIdFormatRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ModifyIdFormatResponsePrivate(this), parent)
{
    setRequest(new ModifyIdFormatRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyIdFormatRequest * ModifyIdFormatResponse::request() const
{
    Q_D(const ModifyIdFormatResponse);
    return static_cast<const ModifyIdFormatRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ModifyIdFormat \a response.
 */
void ModifyIdFormatResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyIdFormatResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ModifyIdFormatResponsePrivate
 * \brief The ModifyIdFormatResponsePrivate class provides private implementation for ModifyIdFormatResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyIdFormatResponsePrivate object with public implementation \a q.
 */
ModifyIdFormatResponsePrivate::ModifyIdFormatResponsePrivate(
    ModifyIdFormatResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ModifyIdFormat response element from \a xml.
 */
void ModifyIdFormatResponsePrivate::parseModifyIdFormatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyIdFormatResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
