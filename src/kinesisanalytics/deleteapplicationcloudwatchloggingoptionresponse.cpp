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

#include "deleteapplicationcloudwatchloggingoptionresponse.h"
#include "deleteapplicationcloudwatchloggingoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationCloudWatchLoggingOptionResponse
 * \brief The DeleteApplicationCloudWatchLoggingOptionResponse class provides an interace for KinesisAnalytics DeleteApplicationCloudWatchLoggingOption responses.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::deleteApplicationCloudWatchLoggingOption
 */

/*!
 * Constructs a DeleteApplicationCloudWatchLoggingOptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApplicationCloudWatchLoggingOptionResponse::DeleteApplicationCloudWatchLoggingOptionResponse(
        const DeleteApplicationCloudWatchLoggingOptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DeleteApplicationCloudWatchLoggingOptionResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationCloudWatchLoggingOptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApplicationCloudWatchLoggingOptionRequest * DeleteApplicationCloudWatchLoggingOptionResponse::request() const
{
    Q_D(const DeleteApplicationCloudWatchLoggingOptionResponse);
    return static_cast<const DeleteApplicationCloudWatchLoggingOptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics DeleteApplicationCloudWatchLoggingOption \a response.
 */
void DeleteApplicationCloudWatchLoggingOptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApplicationCloudWatchLoggingOptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationCloudWatchLoggingOptionResponsePrivate
 * \brief The DeleteApplicationCloudWatchLoggingOptionResponsePrivate class provides private implementation for DeleteApplicationCloudWatchLoggingOptionResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DeleteApplicationCloudWatchLoggingOptionResponsePrivate object with public implementation \a q.
 */
DeleteApplicationCloudWatchLoggingOptionResponsePrivate::DeleteApplicationCloudWatchLoggingOptionResponsePrivate(
    DeleteApplicationCloudWatchLoggingOptionResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics DeleteApplicationCloudWatchLoggingOption response element from \a xml.
 */
void DeleteApplicationCloudWatchLoggingOptionResponsePrivate::parseDeleteApplicationCloudWatchLoggingOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationCloudWatchLoggingOptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
