// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DescribeLoggingOptionsResponse);
    return static_cast<const DescribeLoggingOptionsRequest *>(d->request);
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
