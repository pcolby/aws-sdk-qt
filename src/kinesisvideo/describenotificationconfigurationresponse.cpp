// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenotificationconfigurationresponse.h"
#include "describenotificationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DescribeNotificationConfigurationResponse
 * \brief The DescribeNotificationConfigurationResponse class provides an interace for KinesisVideo DescribeNotificationConfiguration responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::describeNotificationConfiguration
 */

/*!
 * Constructs a DescribeNotificationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNotificationConfigurationResponse::DescribeNotificationConfigurationResponse(
        const DescribeNotificationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new DescribeNotificationConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeNotificationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNotificationConfigurationRequest * DescribeNotificationConfigurationResponse::request() const
{
    Q_D(const DescribeNotificationConfigurationResponse);
    return static_cast<const DescribeNotificationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo DescribeNotificationConfiguration \a response.
 */
void DescribeNotificationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeNotificationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::DescribeNotificationConfigurationResponsePrivate
 * \brief The DescribeNotificationConfigurationResponsePrivate class provides private implementation for DescribeNotificationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DescribeNotificationConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeNotificationConfigurationResponsePrivate::DescribeNotificationConfigurationResponsePrivate(
    DescribeNotificationConfigurationResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo DescribeNotificationConfiguration response element from \a xml.
 */
void DescribeNotificationConfigurationResponsePrivate::parseDescribeNotificationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNotificationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws
