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

#include "modifyimageattributeresponse.h"
#include "modifyimageattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyImageAttributeResponse
 * \brief The ModifyImageAttributeResponse class provides an interace for EC2 ModifyImageAttribute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::modifyImageAttribute
 */

/*!
 * Constructs a ModifyImageAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyImageAttributeResponse::ModifyImageAttributeResponse(
        const ModifyImageAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ModifyImageAttributeResponsePrivate(this), parent)
{
    setRequest(new ModifyImageAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyImageAttributeRequest * ModifyImageAttributeResponse::request() const
{
    Q_D(const ModifyImageAttributeResponse);
    return static_cast<const ModifyImageAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ModifyImageAttribute \a response.
 */
void ModifyImageAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyImageAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ModifyImageAttributeResponsePrivate
 * \brief The ModifyImageAttributeResponsePrivate class provides private implementation for ModifyImageAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyImageAttributeResponsePrivate object with public implementation \a q.
 */
ModifyImageAttributeResponsePrivate::ModifyImageAttributeResponsePrivate(
    ModifyImageAttributeResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ModifyImageAttribute response element from \a xml.
 */
void ModifyImageAttributeResponsePrivate::parseModifyImageAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyImageAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
