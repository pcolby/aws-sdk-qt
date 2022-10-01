// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lookoutequipmentresponse.h"
#include "lookoutequipmentresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::LookoutEquipmentResponse
 * \brief The LookoutEquipmentResponse class provides an interface for LookoutEquipment responses.
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a LookoutEquipmentResponse object with parent \a parent.
 */
LookoutEquipmentResponse::LookoutEquipmentResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LookoutEquipmentResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LookoutEquipmentResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LookoutEquipmentResponsePrivate.
 */
LookoutEquipmentResponse::LookoutEquipmentResponse(LookoutEquipmentResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LookoutEquipmentResponse::parseFailure(QIODevice &response)
{
    //Q_D(LookoutEquipmentResponse);
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
 * \class QtAws::LookoutEquipment::LookoutEquipmentResponsePrivate
 * \brief The LookoutEquipmentResponsePrivate class provides private implementation for LookoutEquipmentResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a LookoutEquipmentResponsePrivate object with public implementation \a q.
 */
LookoutEquipmentResponsePrivate::LookoutEquipmentResponsePrivate(
    LookoutEquipmentResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
