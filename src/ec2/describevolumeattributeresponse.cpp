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

#include "describevolumeattributeresponse.h"
#include "describevolumeattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVolumeAttributeResponse
 * \brief The DescribeVolumeAttributeResponse class provides an interace for EC2 DescribeVolumeAttribute responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::describeVolumeAttribute
 */

/*!
 * Constructs a DescribeVolumeAttributeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVolumeAttributeResponse::DescribeVolumeAttributeResponse(
        const DescribeVolumeAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVolumeAttributeResponsePrivate(this), parent)
{
    setRequest(new DescribeVolumeAttributeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVolumeAttributeRequest * DescribeVolumeAttributeResponse::request() const
{
    Q_D(const DescribeVolumeAttributeResponse);
    return static_cast<const DescribeVolumeAttributeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeVolumeAttribute \a response.
 */
void DescribeVolumeAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVolumeAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeVolumeAttributeResponsePrivate
 * \brief The DescribeVolumeAttributeResponsePrivate class provides private implementation for DescribeVolumeAttributeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVolumeAttributeResponsePrivate object with public implementation \a q.
 */
DescribeVolumeAttributeResponsePrivate::DescribeVolumeAttributeResponsePrivate(
    DescribeVolumeAttributeResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeVolumeAttribute response element from \a xml.
 */
void DescribeVolumeAttributeResponsePrivate::parseDescribeVolumeAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVolumeAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
