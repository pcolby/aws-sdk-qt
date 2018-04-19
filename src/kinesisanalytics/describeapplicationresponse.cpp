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

#include "describeapplicationresponse.h"
#include "describeapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DescribeApplicationResponse
 * \brief The DescribeApplicationResponse class provides an interace for KinesisAnalytics DescribeApplication responses.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::describeApplication
 */

/*!
 * Constructs a DescribeApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeApplicationResponse::DescribeApplicationResponse(
        const DescribeApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DescribeApplicationResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeApplicationRequest * DescribeApplicationResponse::request() const
{
    Q_D(const DescribeApplicationResponse);
    return static_cast<const DescribeApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics DescribeApplication \a response.
 */
void DescribeApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::DescribeApplicationResponsePrivate
 * \brief The DescribeApplicationResponsePrivate class provides private implementation for DescribeApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DescribeApplicationResponsePrivate object with public implementation \a q.
 */
DescribeApplicationResponsePrivate::DescribeApplicationResponsePrivate(
    DescribeApplicationResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics DescribeApplication response element from \a xml.
 */
void DescribeApplicationResponsePrivate::parseDescribeApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
