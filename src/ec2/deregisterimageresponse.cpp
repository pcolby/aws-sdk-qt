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

#include "deregisterimageresponse.h"
#include "deregisterimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeregisterImageResponse
 * \brief The DeregisterImageResponse class provides an interace for EC2 DeregisterImage responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::deregisterImage
 */

/*!
 * Constructs a DeregisterImageResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterImageResponse::DeregisterImageResponse(
        const DeregisterImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeregisterImageResponsePrivate(this), parent)
{
    setRequest(new DeregisterImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterImageRequest * DeregisterImageResponse::request() const
{
    Q_D(const DeregisterImageResponse);
    return static_cast<const DeregisterImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeregisterImage \a response.
 */
void DeregisterImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeregisterImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeregisterImageResponsePrivate
 * \brief The DeregisterImageResponsePrivate class provides private implementation for DeregisterImageResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeregisterImageResponsePrivate object with public implementation \a q.
 */
DeregisterImageResponsePrivate::DeregisterImageResponsePrivate(
    DeregisterImageResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeregisterImage response element from \a xml.
 */
void DeregisterImageResponsePrivate::parseDeregisterImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterImageResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
