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

#include "addapplicationinputresponse.h"
#include "addapplicationinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputResponse
 * \brief The AddApplicationInputResponse class provides an interace for KinesisAnalytics AddApplicationInput responses.
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
 * \sa KinesisAnalyticsClient::addApplicationInput
 */

/*!
 * Constructs a AddApplicationInputResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationInputResponse::AddApplicationInputResponse(
        const AddApplicationInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationInputResponsePrivate(this), parent)
{
    setRequest(new AddApplicationInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddApplicationInputRequest * AddApplicationInputResponse::request() const
{
    return static_cast<const AddApplicationInputRequest *>(KinesisAnalyticsResponse::request());
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics AddApplicationInput \a response.
 */
void AddApplicationInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddApplicationInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputResponsePrivate
 * \brief The AddApplicationInputResponsePrivate class provides private implementation for AddApplicationInputResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationInputResponsePrivate object with public implementation \a q.
 */
AddApplicationInputResponsePrivate::AddApplicationInputResponsePrivate(
    AddApplicationInputResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics AddApplicationInput response element from \a xml.
 */
void AddApplicationInputResponsePrivate::parseAddApplicationInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
