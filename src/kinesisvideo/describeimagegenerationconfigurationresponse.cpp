/*
    Copyright 2013-2021 Paul Colby

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

#include "describeimagegenerationconfigurationresponse.h"
#include "describeimagegenerationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DescribeImageGenerationConfigurationResponse
 * \brief The DescribeImageGenerationConfigurationResponse class provides an interace for KinesisVideo DescribeImageGenerationConfiguration responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::describeImageGenerationConfiguration
 */

/*!
 * Constructs a DescribeImageGenerationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImageGenerationConfigurationResponse::DescribeImageGenerationConfigurationResponse(
        const DescribeImageGenerationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new DescribeImageGenerationConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeImageGenerationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImageGenerationConfigurationRequest * DescribeImageGenerationConfigurationResponse::request() const
{
    Q_D(const DescribeImageGenerationConfigurationResponse);
    return static_cast<const DescribeImageGenerationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo DescribeImageGenerationConfiguration \a response.
 */
void DescribeImageGenerationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImageGenerationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::DescribeImageGenerationConfigurationResponsePrivate
 * \brief The DescribeImageGenerationConfigurationResponsePrivate class provides private implementation for DescribeImageGenerationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DescribeImageGenerationConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeImageGenerationConfigurationResponsePrivate::DescribeImageGenerationConfigurationResponsePrivate(
    DescribeImageGenerationConfigurationResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo DescribeImageGenerationConfiguration response element from \a xml.
 */
void DescribeImageGenerationConfigurationResponsePrivate::parseDescribeImageGenerationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImageGenerationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws
