// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ramresponse.h"
#include "ramresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::RamResponse
 * \brief The RamResponse class provides an interface for Ram responses.
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a RamResponse object with parent \a parent.
 */
RamResponse::RamResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RamResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RamResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RamResponsePrivate.
 */
RamResponse::RamResponse(RamResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RamResponse::parseFailure(QIODevice &response)
{
    //Q_D(RamResponse);
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
 * \class QtAws::Ram::RamResponsePrivate
 * \brief The RamResponsePrivate class provides private implementation for RamResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a RamResponsePrivate object with public implementation \a q.
 */
RamResponsePrivate::RamResponsePrivate(
    RamResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Ram
} // namespace QtAws
