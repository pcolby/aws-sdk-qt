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

#include "copyfpgaimageresponse.h"
#include "copyfpgaimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CopyFpgaImageResponse
 * \brief The CopyFpgaImageResponse class provides an interace for EC2 CopyFpgaImage responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::copyFpgaImage
 */

/*!
 * Constructs a CopyFpgaImageResponse object for \a reply to \a request, with parent \a parent.
 */
CopyFpgaImageResponse::CopyFpgaImageResponse(
        const CopyFpgaImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CopyFpgaImageResponsePrivate(this), parent)
{
    setRequest(new CopyFpgaImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopyFpgaImageRequest * CopyFpgaImageResponse::request() const
{
    Q_D(const CopyFpgaImageResponse);
    return static_cast<const CopyFpgaImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CopyFpgaImage \a response.
 */
void CopyFpgaImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(CopyFpgaImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CopyFpgaImageResponsePrivate
 * \brief The CopyFpgaImageResponsePrivate class provides private implementation for CopyFpgaImageResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CopyFpgaImageResponsePrivate object with public implementation \a q.
 */
CopyFpgaImageResponsePrivate::CopyFpgaImageResponsePrivate(
    CopyFpgaImageResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CopyFpgaImage response element from \a xml.
 */
void CopyFpgaImageResponsePrivate::parseCopyFpgaImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyFpgaImageResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
