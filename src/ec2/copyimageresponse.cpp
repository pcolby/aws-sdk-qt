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

#include "copyimageresponse.h"
#include "copyimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CopyImageResponse
 * \brief The CopyImageResponse class provides an interace for EC2 CopyImage responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::copyImage
 */

/*!
 * Constructs a CopyImageResponse object for \a reply to \a request, with parent \a parent.
 */
CopyImageResponse::CopyImageResponse(
        const CopyImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CopyImageResponsePrivate(this), parent)
{
    setRequest(new CopyImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopyImageRequest * CopyImageResponse::request() const
{
    Q_D(const CopyImageResponse);
    return static_cast<const CopyImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CopyImage \a response.
 */
void CopyImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(CopyImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CopyImageResponsePrivate
 * \brief The CopyImageResponsePrivate class provides private implementation for CopyImageResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CopyImageResponsePrivate object with public implementation \a q.
 */
CopyImageResponsePrivate::CopyImageResponsePrivate(
    CopyImageResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CopyImage response element from \a xml.
 */
void CopyImageResponsePrivate::parseCopyImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyImageResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
