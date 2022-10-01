// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapplicationmaintenanceconfigurationresponse.h"
#include "updateapplicationmaintenanceconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::UpdateApplicationMaintenanceConfigurationResponse
 * \brief The UpdateApplicationMaintenanceConfigurationResponse class provides an interace for KinesisAnalyticsV2 UpdateApplicationMaintenanceConfiguration responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::updateApplicationMaintenanceConfiguration
 */

/*!
 * Constructs a UpdateApplicationMaintenanceConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApplicationMaintenanceConfigurationResponse::UpdateApplicationMaintenanceConfigurationResponse(
        const UpdateApplicationMaintenanceConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new UpdateApplicationMaintenanceConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateApplicationMaintenanceConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApplicationMaintenanceConfigurationRequest * UpdateApplicationMaintenanceConfigurationResponse::request() const
{
    Q_D(const UpdateApplicationMaintenanceConfigurationResponse);
    return static_cast<const UpdateApplicationMaintenanceConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 UpdateApplicationMaintenanceConfiguration \a response.
 */
void UpdateApplicationMaintenanceConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApplicationMaintenanceConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::UpdateApplicationMaintenanceConfigurationResponsePrivate
 * \brief The UpdateApplicationMaintenanceConfigurationResponsePrivate class provides private implementation for UpdateApplicationMaintenanceConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a UpdateApplicationMaintenanceConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateApplicationMaintenanceConfigurationResponsePrivate::UpdateApplicationMaintenanceConfigurationResponsePrivate(
    UpdateApplicationMaintenanceConfigurationResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 UpdateApplicationMaintenanceConfiguration response element from \a xml.
 */
void UpdateApplicationMaintenanceConfigurationResponsePrivate::parseUpdateApplicationMaintenanceConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApplicationMaintenanceConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
