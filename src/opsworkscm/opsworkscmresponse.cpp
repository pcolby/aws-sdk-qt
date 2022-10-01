// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "opsworkscmresponse.h"
#include "opsworkscmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorksCm {

/*!
 * \class QtAws::OpsWorksCm::OpsWorksCmResponse
 * \brief The OpsWorksCmResponse class provides an interface for OpsWorksCm responses.
 *
 * \inmodule QtAwsOpsWorksCm
 */

/*!
 * Constructs a OpsWorksCmResponse object with parent \a parent.
 */
OpsWorksCmResponse::OpsWorksCmResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new OpsWorksCmResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a OpsWorksCmResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from OpsWorksCmResponsePrivate.
 */
OpsWorksCmResponse::OpsWorksCmResponse(OpsWorksCmResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void OpsWorksCmResponse::parseFailure(QIODevice &response)
{
    //Q_D(OpsWorksCmResponse);
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
 * \class QtAws::OpsWorksCm::OpsWorksCmResponsePrivate
 * \brief The OpsWorksCmResponsePrivate class provides private implementation for OpsWorksCmResponse.
 * \internal
 *
 * \inmodule QtAwsOpsWorksCm
 */

/*!
 * Constructs a OpsWorksCmResponsePrivate object with public implementation \a q.
 */
OpsWorksCmResponsePrivate::OpsWorksCmResponsePrivate(
    OpsWorksCmResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace OpsWorksCm
} // namespace QtAws
