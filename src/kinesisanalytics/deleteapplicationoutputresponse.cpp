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

#include "deleteapplicationoutputresponse.h"
#include "deleteapplicationoutputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationOutputResponse
 * \brief The DeleteApplicationOutputResponse class provides an interace for KinesisAnalytics DeleteApplicationOutput responses.
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
 * \sa KinesisAnalyticsClient::deleteApplicationOutput
 */

/*!
 * Constructs a DeleteApplicationOutputResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApplicationOutputResponse::DeleteApplicationOutputResponse(
        const DeleteApplicationOutputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DeleteApplicationOutputResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationOutputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApplicationOutputRequest * DeleteApplicationOutputResponse::request() const
{
    Q_D(const DeleteApplicationOutputResponse);
    return static_cast<const DeleteApplicationOutputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics DeleteApplicationOutput \a response.
 */
void DeleteApplicationOutputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApplicationOutputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationOutputResponsePrivate
 * \brief The DeleteApplicationOutputResponsePrivate class provides private implementation for DeleteApplicationOutputResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DeleteApplicationOutputResponsePrivate object with public implementation \a q.
 */
DeleteApplicationOutputResponsePrivate::DeleteApplicationOutputResponsePrivate(
    DeleteApplicationOutputResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics DeleteApplicationOutput response element from \a xml.
 */
void DeleteApplicationOutputResponsePrivate::parseDeleteApplicationOutputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationOutputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
