// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "publishresponse.h"
#include "publishresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::PublishResponse
 * \brief The PublishResponse class provides an interace for IoTDataPlane Publish responses.
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
 * \sa IoTDataPlaneClient::publish
 */

/*!
 * Constructs a PublishResponse object for \a reply to \a request, with parent \a parent.
 */
PublishResponse::PublishResponse(
        const PublishRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDataPlaneResponse(new PublishResponsePrivate(this), parent)
{
    setRequest(new PublishRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PublishRequest * PublishResponse::request() const
{
    Q_D(const PublishResponse);
    return static_cast<const PublishRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTDataPlane Publish \a response.
 */
void PublishResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PublishResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTDataPlane::PublishResponsePrivate
 * \brief The PublishResponsePrivate class provides private implementation for PublishResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a PublishResponsePrivate object with public implementation \a q.
 */
PublishResponsePrivate::PublishResponsePrivate(
    PublishResponse * const q) : IoTDataPlaneResponsePrivate(q)
{

}

/*!
 * Parses a IoTDataPlane Publish response element from \a xml.
 */
void PublishResponsePrivate::parsePublishResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTDataPlane
} // namespace QtAws
