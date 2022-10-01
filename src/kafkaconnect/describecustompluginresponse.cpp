// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecustompluginresponse.h"
#include "describecustompluginresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::DescribeCustomPluginResponse
 * \brief The DescribeCustomPluginResponse class provides an interace for KafkaConnect DescribeCustomPlugin responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::describeCustomPlugin
 */

/*!
 * Constructs a DescribeCustomPluginResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCustomPluginResponse::DescribeCustomPluginResponse(
        const DescribeCustomPluginRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new DescribeCustomPluginResponsePrivate(this), parent)
{
    setRequest(new DescribeCustomPluginRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCustomPluginRequest * DescribeCustomPluginResponse::request() const
{
    Q_D(const DescribeCustomPluginResponse);
    return static_cast<const DescribeCustomPluginRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect DescribeCustomPlugin \a response.
 */
void DescribeCustomPluginResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCustomPluginResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::DescribeCustomPluginResponsePrivate
 * \brief The DescribeCustomPluginResponsePrivate class provides private implementation for DescribeCustomPluginResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a DescribeCustomPluginResponsePrivate object with public implementation \a q.
 */
DescribeCustomPluginResponsePrivate::DescribeCustomPluginResponsePrivate(
    DescribeCustomPluginResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect DescribeCustomPlugin response element from \a xml.
 */
void DescribeCustomPluginResponsePrivate::parseDescribeCustomPluginResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCustomPluginResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
