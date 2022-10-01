// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listretainedmessagesresponse.h"
#include "listretainedmessagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::ListRetainedMessagesResponse
 * \brief The ListRetainedMessagesResponse class provides an interace for IoTDataPlane ListRetainedMessages responses.
 *
 * \inmodule QtAwsIoTDataPlane
 *
 *  <fullname>IoT data</fullname>
 * 
 *  IoT data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. It implements a broker for applications and
 *  things to publish messages over HTTP (Publish) and retrieve, update, and delete shadows. A shadow is a persistent
 *  representation of your things and their state in the Amazon Web Services
 * 
 *  cloud>
 * 
 *  Find the endpoint address for actions in IoT data by running this CLI
 * 
 *  command>
 * 
 *  <code>aws iot describe-endpoint --endpoint-type iot:Data-ATS</code>
 * 
 *  </p
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  ServicesSignature Version 4</a> to sign requests is:
 *
 * \sa IoTDataPlaneClient::listRetainedMessages
 */

/*!
 * Constructs a ListRetainedMessagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListRetainedMessagesResponse::ListRetainedMessagesResponse(
        const ListRetainedMessagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDataPlaneResponse(new ListRetainedMessagesResponsePrivate(this), parent)
{
    setRequest(new ListRetainedMessagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRetainedMessagesRequest * ListRetainedMessagesResponse::request() const
{
    Q_D(const ListRetainedMessagesResponse);
    return static_cast<const ListRetainedMessagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTDataPlane ListRetainedMessages \a response.
 */
void ListRetainedMessagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRetainedMessagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTDataPlane::ListRetainedMessagesResponsePrivate
 * \brief The ListRetainedMessagesResponsePrivate class provides private implementation for ListRetainedMessagesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a ListRetainedMessagesResponsePrivate object with public implementation \a q.
 */
ListRetainedMessagesResponsePrivate::ListRetainedMessagesResponsePrivate(
    ListRetainedMessagesResponse * const q) : IoTDataPlaneResponsePrivate(q)
{

}

/*!
 * Parses a IoTDataPlane ListRetainedMessages response element from \a xml.
 */
void ListRetainedMessagesResponsePrivate::parseListRetainedMessagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRetainedMessagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTDataPlane
} // namespace QtAws
