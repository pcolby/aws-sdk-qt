// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listthingsresponse.h"
#include "listthingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListThingsResponse
 * \brief The ListThingsResponse class provides an interace for IoT ListThings responses.
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
 * \sa IoTClient::listThings
 */

/*!
 * Constructs a ListThingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListThingsResponse::ListThingsResponse(
        const ListThingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListThingsResponsePrivate(this), parent)
{
    setRequest(new ListThingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThingsRequest * ListThingsResponse::request() const
{
    Q_D(const ListThingsResponse);
    return static_cast<const ListThingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT ListThings \a response.
 */
void ListThingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListThingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::ListThingsResponsePrivate
 * \brief The ListThingsResponsePrivate class provides private implementation for ListThingsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListThingsResponsePrivate object with public implementation \a q.
 */
ListThingsResponsePrivate::ListThingsResponsePrivate(
    ListThingsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT ListThings response element from \a xml.
 */
void ListThingsResponsePrivate::parseListThingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
