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

#include "addapplicationcloudwatchloggingoptionresponse.h"
#include "addapplicationcloudwatchloggingoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationCloudWatchLoggingOptionResponse
 * \brief The AddApplicationCloudWatchLoggingOptionResponse class provides an interace for KinesisAnalytics AddApplicationCloudWatchLoggingOption responses.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::addApplicationCloudWatchLoggingOption
 */

/*!
 * Constructs a AddApplicationCloudWatchLoggingOptionResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationCloudWatchLoggingOptionResponse::AddApplicationCloudWatchLoggingOptionResponse(
        const AddApplicationCloudWatchLoggingOptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationCloudWatchLoggingOptionResponsePrivate(this), parent)
{
    setRequest(new AddApplicationCloudWatchLoggingOptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddApplicationCloudWatchLoggingOptionRequest * AddApplicationCloudWatchLoggingOptionResponse::request() const
{
    Q_D(const AddApplicationCloudWatchLoggingOptionResponse);
    return static_cast<const AddApplicationCloudWatchLoggingOptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics AddApplicationCloudWatchLoggingOption \a response.
 */
void AddApplicationCloudWatchLoggingOptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddApplicationCloudWatchLoggingOptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationCloudWatchLoggingOptionResponsePrivate
 * \brief The AddApplicationCloudWatchLoggingOptionResponsePrivate class provides private implementation for AddApplicationCloudWatchLoggingOptionResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationCloudWatchLoggingOptionResponsePrivate object with public implementation \a q.
 */
AddApplicationCloudWatchLoggingOptionResponsePrivate::AddApplicationCloudWatchLoggingOptionResponsePrivate(
    AddApplicationCloudWatchLoggingOptionResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics AddApplicationCloudWatchLoggingOption response element from \a xml.
 */
void AddApplicationCloudWatchLoggingOptionResponsePrivate::parseAddApplicationCloudWatchLoggingOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationCloudWatchLoggingOptionResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
