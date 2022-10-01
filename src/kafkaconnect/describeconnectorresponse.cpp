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
