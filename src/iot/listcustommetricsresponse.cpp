// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcustommetricsresponse.h"
#include "listcustommetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListCustomMetricsResponse
 * \brief The ListCustomMetricsResponse class provides an interace for IoT ListCustomMetrics responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>IoT</fullname>
 * 
 *  IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. You can discover your custom IoT-Data endpoint
 *  to communicate with, configure rules for data processing and integration with other services, organize resources
 *  associated with each device (Registry), configure logging, and create and manage policies and credentials to
 *  authenticate
 * 
 *  devices>
 * 
 *  The service endpoints that expose this API are listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">Amazon Web Services IoT Core Endpoints and
 *  Quotas</a>. You must use the endpoint for the region that has the resources you want to
 * 
 *  access>
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  Services Signature Version 4</a> to sign the request is:
 * 
 *  <i>execute-api</i>>
 * 
 *  For more information about how IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to
 *  Amazon Web Services
 *
 * \sa IoTClient::listCustomMetrics
 */

/*!
 * Constructs a ListCustomMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCustomMetricsResponse::ListCustomMetricsResponse(
        const ListCustomMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListCustomMetricsResponsePrivate(this), parent)
{
    setRequest(new ListCustomMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCustomMetricsRequest * ListCustomMetricsResponse::request() const
{
    Q_D(const ListCustomMetricsResponse);
    return static_cast<const ListCustomMetricsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT ListCustomMetrics \a response.
 */
void ListCustomMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCustomMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::ListCustomMetricsResponsePrivate
 * \brief The ListCustomMetricsResponsePrivate class provides private implementation for ListCustomMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListCustomMetricsResponsePrivate object with public implementation \a q.
 */
ListCustomMetricsResponsePrivate::ListCustomMetricsResponsePrivate(
    ListCustomMetricsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT ListCustomMetrics response element from \a xml.
 */
void ListCustomMetricsResponsePrivate::parseListCustomMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCustomMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
