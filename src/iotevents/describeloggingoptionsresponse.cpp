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

#include "describeloggingoptionsresponse.h"
#include "describeloggingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DescribeLoggingOptionsResponse
 * \brief The DescribeLoggingOptionsResponse class provides an interace for IoTEvents DescribeLoggingOptions responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::describeLoggingOptions
 */

/*!
 * Constructs a DescribeLoggingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLoggingOptionsResponse::DescribeLoggingOptionsResponse(
        const DescribeLoggingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new DescribeLoggingOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeLoggingOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLoggingOptionsRequest * DescribeLoggingOptionsResponse::request() const
{
    return static_cast<const DescribeLoggingOptionsRequest *>(IoTEventsResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTEvents DescribeLoggingOptions \a response.
 */
void DescribeLoggingOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLoggingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::DescribeLoggingOptionsResponsePrivate
 * \brief The DescribeLoggingOptionsResponsePrivate class provides private implementation for DescribeLoggingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DescribeLoggingOptionsResponsePrivate object with public implementation \a q.
 */
DescribeLoggingOptionsResponsePrivate::DescribeLoggingOptionsResponsePrivate(
    DescribeLoggingOptionsResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents DescribeLoggingOptions response element from \a xml.
 */
void DescribeLoggingOptionsResponsePrivate::parseDescribeLoggingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoggingOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
