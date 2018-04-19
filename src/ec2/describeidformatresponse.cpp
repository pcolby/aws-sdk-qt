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

#include "describeidformatresponse.h"
#include "describeidformatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeIdFormatResponse
 * \brief The DescribeIdFormatResponse class provides an interace for EC2 DescribeIdFormat responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::describeIdFormat
 */

/*!
 * Constructs a DescribeIdFormatResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeIdFormatResponse::DescribeIdFormatResponse(
        const DescribeIdFormatRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeIdFormatResponsePrivate(this), parent)
{
    setRequest(new DescribeIdFormatRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeIdFormatRequest * DescribeIdFormatResponse::request() const
{
    Q_D(const DescribeIdFormatResponse);
    return static_cast<const DescribeIdFormatRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeIdFormat \a response.
 */
void DescribeIdFormatResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeIdFormatResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeIdFormatResponsePrivate
 * \brief The DescribeIdFormatResponsePrivate class provides private implementation for DescribeIdFormatResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeIdFormatResponsePrivate object with public implementation \a q.
 */
DescribeIdFormatResponsePrivate::DescribeIdFormatResponsePrivate(
    DescribeIdFormatResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeIdFormat response element from \a xml.
 */
void DescribeIdFormatResponsePrivate::parseDescribeIdFormatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIdFormatResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
