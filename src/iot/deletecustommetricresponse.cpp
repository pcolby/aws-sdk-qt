// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecustommetricresponse.h"
#include "deletecustommetricresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DeleteCustomMetricResponse
 * \brief The DeleteCustomMetricResponse class provides an interace for IoT DeleteCustomMetric responses.
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
 * \sa IoTClient::deleteCustomMetric
 */

/*!
 * Constructs a DeleteCustomMetricResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCustomMetricResponse::DeleteCustomMetricResponse(
        const DeleteCustomMetricRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteCustomMetricResponsePrivate(this), parent)
{
    setRequest(new DeleteCustomMetricRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCustomMetricRequest * DeleteCustomMetricResponse::request() const
{
    Q_D(const DeleteCustomMetricResponse);
    return static_cast<const DeleteCustomMetricRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DeleteCustomMetric \a response.
 */
void DeleteCustomMetricResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCustomMetricResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DeleteCustomMetricResponsePrivate
 * \brief The DeleteCustomMetricResponsePrivate class provides private implementation for DeleteCustomMetricResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DeleteCustomMetricResponsePrivate object with public implementation \a q.
 */
DeleteCustomMetricResponsePrivate::DeleteCustomMetricResponsePrivate(
    DeleteCustomMetricResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DeleteCustomMetric response element from \a xml.
 */
void DeleteCustomMetricResponsePrivate::parseDeleteCustomMetricResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCustomMetricResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
