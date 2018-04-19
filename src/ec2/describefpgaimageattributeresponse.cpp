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

#include "describefpgaimageattributeresponse.h"
#include "describefpgaimageattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeFpgaImageAttributeResponse
 * \brief The DescribeFpgaImageAttributeResponse class provides an interace for EC2 DescribeFpgaImageAttribute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeFpgaImageAttribute
 */

/*!
 * Constructs a DescribeFpgaImageAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFpgaImageAttributeResponse::DescribeFpgaImageAttributeResponse(
        const DescribeFpgaImageAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeFpgaImageAttributeResponsePrivate(this), parent)
{
    setRequest(new DescribeFpgaImageAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFpgaImageAttributeRequest * DescribeFpgaImageAttributeResponse::request() const
{
    Q_D(const DescribeFpgaImageAttributeResponse);
    return static_cast<const DescribeFpgaImageAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeFpgaImageAttribute \a response.
 */
void DescribeFpgaImageAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeFpgaImageAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeFpgaImageAttributeResponsePrivate
 * \brief The DescribeFpgaImageAttributeResponsePrivate class provides private implementation for DescribeFpgaImageAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeFpgaImageAttributeResponsePrivate object with public implementation \a q.
 */
DescribeFpgaImageAttributeResponsePrivate::DescribeFpgaImageAttributeResponsePrivate(
    DescribeFpgaImageAttributeResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeFpgaImageAttribute response element from \a xml.
 */
void DescribeFpgaImageAttributeResponsePrivate::parseDescribeFpgaImageAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFpgaImageAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
