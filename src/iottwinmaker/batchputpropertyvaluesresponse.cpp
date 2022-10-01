// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchputpropertyvaluesresponse.h"
#include "batchputpropertyvaluesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::BatchPutPropertyValuesResponse
 * \brief The BatchPutPropertyValuesResponse class provides an interace for IoTTwinMaker BatchPutPropertyValues responses.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::batchPutPropertyValues
 */

/*!
 * Constructs a BatchPutPropertyValuesResponse object for \a reply to \a request, with parent \a parent.
 */
BatchPutPropertyValuesResponse::BatchPutPropertyValuesResponse(
        const BatchPutPropertyValuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTTwinMakerResponse(new BatchPutPropertyValuesResponsePrivate(this), parent)
{
    setRequest(new BatchPutPropertyValuesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchPutPropertyValuesRequest * BatchPutPropertyValuesResponse::request() const
{
    Q_D(const BatchPutPropertyValuesResponse);
    return static_cast<const BatchPutPropertyValuesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTTwinMaker BatchPutPropertyValues \a response.
 */
void BatchPutPropertyValuesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchPutPropertyValuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTTwinMaker::BatchPutPropertyValuesResponsePrivate
 * \brief The BatchPutPropertyValuesResponsePrivate class provides private implementation for BatchPutPropertyValuesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a BatchPutPropertyValuesResponsePrivate object with public implementation \a q.
 */
BatchPutPropertyValuesResponsePrivate::BatchPutPropertyValuesResponsePrivate(
    BatchPutPropertyValuesResponse * const q) : IoTTwinMakerResponsePrivate(q)
{

}

/*!
 * Parses a IoTTwinMaker BatchPutPropertyValues response element from \a xml.
 */
void BatchPutPropertyValuesResponsePrivate::parseBatchPutPropertyValuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchPutPropertyValuesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTTwinMaker
} // namespace QtAws
