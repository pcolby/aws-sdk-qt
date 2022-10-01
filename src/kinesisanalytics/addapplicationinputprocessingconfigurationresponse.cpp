// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationinputprocessingconfigurationresponse.h"
#include "addapplicationinputprocessingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputProcessingConfigurationResponse
 * \brief The AddApplicationInputProcessingConfigurationResponse class provides an interace for KinesisAnalytics AddApplicationInputProcessingConfiguration responses.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *  <fullname>Amazon Kinesis Analytics</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p <note>
 * 
 *  This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 *  Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 *  href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 * 
 *  Documentation</a>> </note>
 * 
 *  This is the <i>Amazon Kinesis Analytics v1 API Reference</i>. The Amazon Kinesis Analytics Developer Guide provides
 *  additional information.
 *
 * \sa KinesisAnalyticsClient::addApplicationInputProcessingConfiguration
 */

/*!
 * Constructs a AddApplicationInputProcessingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationInputProcessingConfigurationResponse::AddApplicationInputProcessingConfigurationResponse(
        const AddApplicationInputProcessingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationInputProcessingConfigurationResponsePrivate(this), parent)
{
    setRequest(new AddApplicationInputProcessingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddApplicationInputProcessingConfigurationRequest * AddApplicationInputProcessingConfigurationResponse::request() const
{
    Q_D(const AddApplicationInputProcessingConfigurationResponse);
    return static_cast<const AddApplicationInputProcessingConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics AddApplicationInputProcessingConfiguration \a response.
 */
void AddApplicationInputProcessingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddApplicationInputProcessingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputProcessingConfigurationResponsePrivate
 * \brief The AddApplicationInputProcessingConfigurationResponsePrivate class provides private implementation for AddApplicationInputProcessingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationInputProcessingConfigurationResponsePrivate object with public implementation \a q.
 */
AddApplicationInputProcessingConfigurationResponsePrivate::AddApplicationInputProcessingConfigurationResponsePrivate(
    AddApplicationInputProcessingConfigurationResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics AddApplicationInputProcessingConfiguration response element from \a xml.
 */
void AddApplicationInputProcessingConfigurationResponsePrivate::parseAddApplicationInputProcessingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationInputProcessingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
