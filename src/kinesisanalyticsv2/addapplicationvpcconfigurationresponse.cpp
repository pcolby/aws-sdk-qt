// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationvpcconfigurationresponse.h"
#include "addapplicationvpcconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationVpcConfigurationResponse
 * \brief The AddApplicationVpcConfigurationResponse class provides an interace for KinesisAnalyticsV2 AddApplicationVpcConfiguration responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::addApplicationVpcConfiguration
 */

/*!
 * Constructs a AddApplicationVpcConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationVpcConfigurationResponse::AddApplicationVpcConfigurationResponse(
        const AddApplicationVpcConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new AddApplicationVpcConfigurationResponsePrivate(this), parent)
{
    setRequest(new AddApplicationVpcConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddApplicationVpcConfigurationRequest * AddApplicationVpcConfigurationResponse::request() const
{
    Q_D(const AddApplicationVpcConfigurationResponse);
    return static_cast<const AddApplicationVpcConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 AddApplicationVpcConfiguration \a response.
 */
void AddApplicationVpcConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddApplicationVpcConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationVpcConfigurationResponsePrivate
 * \brief The AddApplicationVpcConfigurationResponsePrivate class provides private implementation for AddApplicationVpcConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a AddApplicationVpcConfigurationResponsePrivate object with public implementation \a q.
 */
AddApplicationVpcConfigurationResponsePrivate::AddApplicationVpcConfigurationResponsePrivate(
    AddApplicationVpcConfigurationResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 AddApplicationVpcConfiguration response element from \a xml.
 */
void AddApplicationVpcConfigurationResponsePrivate::parseAddApplicationVpcConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationVpcConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
