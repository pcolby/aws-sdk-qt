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

#include "modifyfpgaimageattributeresponse.h"
#include "modifyfpgaimageattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyFpgaImageAttributeResponse
 * \brief The ModifyFpgaImageAttributeResponse class provides an interace for EC2 ModifyFpgaImageAttribute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::modifyFpgaImageAttribute
 */

/*!
 * Constructs a ModifyFpgaImageAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyFpgaImageAttributeResponse::ModifyFpgaImageAttributeResponse(
        const ModifyFpgaImageAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ModifyFpgaImageAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifyFpgaImageAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyFpgaImageAttributeRequest * ModifyFpgaImageAttributeResponse::request() const
{
    Q_D(const ModifyFpgaImageAttributeResponse);
    return static_cast<const ModifyFpgaImageAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ModifyFpgaImageAttribute \a response.
 */
void ModifyFpgaImageAttributeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyFpgaImageAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ModifyFpgaImageAttributeResponsePrivate
 * \brief The ModifyFpgaImageAttributeResponsePrivate class provides private implementation for ModifyFpgaImageAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyFpgaImageAttributeResponsePrivate object with public implementation \a q.
 */
ModifyFpgaImageAttributeResponsePrivate::ModifyFpgaImageAttributeResponsePrivate(
    ModifyFpgaImageAttributeResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ModifyFpgaImageAttribute response element from \a xml.
 */
void ModifyFpgaImageAttributeResponsePrivate::parseModifyFpgaImageAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyFpgaImageAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
