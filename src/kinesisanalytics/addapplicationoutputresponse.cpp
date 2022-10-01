// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationoutputresponse.h"
#include "addapplicationoutputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationOutputResponse
 * \brief The AddApplicationOutputResponse class provides an interace for KinesisAnalytics AddApplicationOutput responses.
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
 * \sa KinesisAnalyticsClient::addApplicationOutput
 */

/*!
 * Constructs a AddApplicationOutputResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationOutputResponse::AddApplicationOutputResponse(
        const AddApplicationOutputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationOutputResponsePrivate(this), parent)
{
    setRequest(new AddApplicationOutputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddApplicationOutputRequest * AddApplicationOutputResponse::request() const
{
    Q_D(const AddApplicationOutputResponse);
    return static_cast<const AddApplicationOutputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics AddApplicationOutput \a response.
 */
void AddApplicationOutputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddApplicationOutputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationOutputResponsePrivate
 * \brief The AddApplicationOutputResponsePrivate class provides private implementation for AddApplicationOutputResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationOutputResponsePrivate object with public implementation \a q.
 */
AddApplicationOutputResponsePrivate::AddApplicationOutputResponsePrivate(
    AddApplicationOutputResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics AddApplicationOutput response element from \a xml.
 */
void AddApplicationOutputResponsePrivate::parseAddApplicationOutputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationOutputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
