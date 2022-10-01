// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconnectorresponse.h"
#include "describeconnectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::DescribeConnectorResponse
 * \brief The DescribeConnectorResponse class provides an interace for KafkaConnect DescribeConnector responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::describeConnector
 */

/*!
 * Constructs a DescribeConnectorResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConnectorResponse::DescribeConnectorResponse(
        const DescribeConnectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new DescribeConnectorResponsePrivate(this), parent)
{
    setRequest(new DescribeConnectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConnectorRequest * DescribeConnectorResponse::request() const
{
    Q_D(const DescribeConnectorResponse);
    return static_cast<const DescribeConnectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect DescribeConnector \a response.
 */
void DescribeConnectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConnectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::DescribeConnectorResponsePrivate
 * \brief The DescribeConnectorResponsePrivate class provides private implementation for DescribeConnectorResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a DescribeConnectorResponsePrivate object with public implementation \a q.
 */
DescribeConnectorResponsePrivate::DescribeConnectorResponsePrivate(
    DescribeConnectorResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect DescribeConnector response element from \a xml.
 */
void DescribeConnectorResponsePrivate::parseDescribeConnectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConnectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
