// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotsitewiseresponse.h"
#include "iotsitewiseresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::IoTSiteWiseResponse
 * \brief The IoTSiteWiseResponse class provides an interface for IoTSiteWise responses.
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a IoTSiteWiseResponse object with parent \a parent.
 */
IoTSiteWiseResponse::IoTSiteWiseResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTSiteWiseResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTSiteWiseResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTSiteWiseResponsePrivate.
 */
IoTSiteWiseResponse::IoTSiteWiseResponse(IoTSiteWiseResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTSiteWiseResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTSiteWiseResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::IoTSiteWise::IoTSiteWiseResponsePrivate
 * \brief The IoTSiteWiseResponsePrivate class provides private implementation for IoTSiteWiseResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a IoTSiteWiseResponsePrivate object with public implementation \a q.
 */
IoTSiteWiseResponsePrivate::IoTSiteWiseResponsePrivate(
    IoTSiteWiseResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
