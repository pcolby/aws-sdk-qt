// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
