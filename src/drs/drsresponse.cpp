// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "drsresponse.h"
#include "drsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DrsResponse
 * \brief The DrsResponse class provides an interface for Drs responses.
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DrsResponse object with parent \a parent.
 */
DrsResponse::DrsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DrsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DrsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DrsResponsePrivate.
 */
DrsResponse::DrsResponse(DrsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DrsResponse::parseFailure(QIODevice &response)
{
    //Q_D(DrsResponse);
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
 * \class QtAws::Drs::DrsResponsePrivate
 * \brief The DrsResponsePrivate class provides private implementation for DrsResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DrsResponsePrivate object with public implementation \a q.
 */
DrsResponsePrivate::DrsResponsePrivate(
    DrsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Drs
} // namespace QtAws
