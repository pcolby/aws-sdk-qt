// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationinputprocessingconfigurationresponse.h"
#include "deleteapplicationinputprocessingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationInputProcessingConfigurationResponse
 * \brief The DeleteApplicationInputProcessingConfigurationResponse class provides an interace for KinesisAnalyticsV2 DeleteApplicationInputProcessingConfiguration responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::deleteApplicationInputProcessingConfiguration
 */

/*!
 * Constructs a DeleteApplicationInputProcessingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApplicationInputProcessingConfigurationResponse::DeleteApplicationInputProcessingConfigurationResponse(
        const DeleteApplicationInputProcessingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new DeleteApplicationInputProcessingConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationInputProcessingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApplicationInputProcessingConfigurationRequest * DeleteApplicationInputProcessingConfigurationResponse::request() const
{
    Q_D(const DeleteApplicationInputProcessingConfigurationResponse);
    return static_cast<const DeleteApplicationInputProcessingConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 DeleteApplicationInputProcessingConfiguration \a response.
 */
void DeleteApplicationInputProcessingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApplicationInputProcessingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationInputProcessingConfigurationResponsePrivate
 * \brief The DeleteApplicationInputProcessingConfigurationResponsePrivate class provides private implementation for DeleteApplicationInputProcessingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationInputProcessingConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteApplicationInputProcessingConfigurationResponsePrivate::DeleteApplicationInputProcessingConfigurationResponsePrivate(
    DeleteApplicationInputProcessingConfigurationResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 DeleteApplicationInputProcessingConfiguration response element from \a xml.
 */
void DeleteApplicationInputProcessingConfigurationResponsePrivate::parseDeleteApplicationInputProcessingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationInputProcessingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
