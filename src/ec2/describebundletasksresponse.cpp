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

#include "describebundletasksresponse.h"
#include "describebundletasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeBundleTasksResponse
 * \brief The DescribeBundleTasksResponse class provides an interace for EC2 DescribeBundleTasks responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeBundleTasks
 */

/*!
 * Constructs a DescribeBundleTasksResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBundleTasksResponse::DescribeBundleTasksResponse(
        const DescribeBundleTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeBundleTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeBundleTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBundleTasksRequest * DescribeBundleTasksResponse::request() const
{
    Q_D(const DescribeBundleTasksResponse);
    return static_cast<const DescribeBundleTasksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeBundleTasks \a response.
 */
void DescribeBundleTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeBundleTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeBundleTasksResponsePrivate
 * \brief The DescribeBundleTasksResponsePrivate class provides private implementation for DescribeBundleTasksResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeBundleTasksResponsePrivate object with public implementation \a q.
 */
DescribeBundleTasksResponsePrivate::DescribeBundleTasksResponsePrivate(
    DescribeBundleTasksResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeBundleTasks response element from \a xml.
 */
void DescribeBundleTasksResponsePrivate::parseDescribeBundleTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBundleTasksResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
