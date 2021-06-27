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

#include "deleteapplicationinputprocessingconfigurationresponse.h"
#include "deleteapplicationinputprocessingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationInputProcessingConfigurationResponse
 * \brief The DeleteApplicationInputProcessingConfigurationResponse class provides an interace for KinesisAnalytics DeleteApplicationInputProcessingConfiguration responses.
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
 * \sa KinesisAnalyticsClient::deleteApplicationInputProcessingConfiguration
 */

/*!
 * Constructs a DeleteApplicationInputProcessingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApplicationInputProcessingConfigurationResponse::DeleteApplicationInputProcessingConfigurationResponse(
        const DeleteApplicationInputProcessingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DeleteApplicationInputProcessingConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationInputProcessingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApplicationInputProcessingConfigurationRequest * DeleteApplicationInputProcessingConfigurationResponse::request() const
{
    return static_cast<const DeleteApplicationInputProcessingConfigurationRequest *>(KinesisAnalyticsResponse::request());
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics DeleteApplicationInputProcessingConfiguration \a response.
 */
void DeleteApplicationInputProcessingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApplicationInputProcessingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationInputProcessingConfigurationResponsePrivate
 * \brief The DeleteApplicationInputProcessingConfigurationResponsePrivate class provides private implementation for DeleteApplicationInputProcessingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DeleteApplicationInputProcessingConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteApplicationInputProcessingConfigurationResponsePrivate::DeleteApplicationInputProcessingConfigurationResponsePrivate(
    DeleteApplicationInputProcessingConfigurationResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics DeleteApplicationInputProcessingConfiguration response element from \a xml.
 */
void DeleteApplicationInputProcessingConfigurationResponsePrivate::parseDeleteApplicationInputProcessingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationInputProcessingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
