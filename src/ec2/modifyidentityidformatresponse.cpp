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

#include "modifyidentityidformatresponse.h"
#include "modifyidentityidformatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyIdentityIdFormatResponse
 * \brief The ModifyIdentityIdFormatResponse class provides an interace for EC2 ModifyIdentityIdFormat responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::modifyIdentityIdFormat
 */

/*!
 * Constructs a ModifyIdentityIdFormatResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyIdentityIdFormatResponse::ModifyIdentityIdFormatResponse(
        const ModifyIdentityIdFormatRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ModifyIdentityIdFormatResponsePrivate(this), parent)
{
    setRequest(new ModifyIdentityIdFormatRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyIdentityIdFormatRequest * ModifyIdentityIdFormatResponse::request() const
{
    Q_D(const ModifyIdentityIdFormatResponse);
    return static_cast<const ModifyIdentityIdFormatRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ModifyIdentityIdFormat \a response.
 */
void ModifyIdentityIdFormatResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyIdentityIdFormatResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ModifyIdentityIdFormatResponsePrivate
 * \brief The ModifyIdentityIdFormatResponsePrivate class provides private implementation for ModifyIdentityIdFormatResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyIdentityIdFormatResponsePrivate object with public implementation \a q.
 */
ModifyIdentityIdFormatResponsePrivate::ModifyIdentityIdFormatResponsePrivate(
    ModifyIdentityIdFormatResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ModifyIdentityIdFormat response element from \a xml.
 */
void ModifyIdentityIdFormatResponsePrivate::parseModifyIdentityIdFormatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyIdentityIdFormatResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
