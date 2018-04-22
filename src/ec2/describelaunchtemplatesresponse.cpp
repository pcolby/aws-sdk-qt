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

#include "describelaunchtemplatesresponse.h"
#include "describelaunchtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeLaunchTemplatesResponse
 * \brief The DescribeLaunchTemplatesResponse class provides an interace for EC2 DescribeLaunchTemplates responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeLaunchTemplates
 */

/*!
 * Constructs a DescribeLaunchTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLaunchTemplatesResponse::DescribeLaunchTemplatesResponse(
        const DescribeLaunchTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeLaunchTemplatesResponsePrivate(this), parent)
{
    setRequest(new DescribeLaunchTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLaunchTemplatesRequest * DescribeLaunchTemplatesResponse::request() const
{
    Q_D(const DescribeLaunchTemplatesResponse);
    return static_cast<const DescribeLaunchTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeLaunchTemplates \a response.
 */
void DescribeLaunchTemplatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeLaunchTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeLaunchTemplatesResponsePrivate
 * \brief The DescribeLaunchTemplatesResponsePrivate class provides private implementation for DescribeLaunchTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeLaunchTemplatesResponsePrivate object with public implementation \a q.
 */
DescribeLaunchTemplatesResponsePrivate::DescribeLaunchTemplatesResponsePrivate(
    DescribeLaunchTemplatesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeLaunchTemplates response element from \a xml.
 */
void DescribeLaunchTemplatesResponsePrivate::parseDescribeLaunchTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLaunchTemplatesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
