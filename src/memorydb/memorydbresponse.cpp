// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "memorydbresponse.h"
#include "memorydbresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::MemoryDbResponse
 * \brief The MemoryDbResponse class provides an interface for MemoryDb responses.
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a MemoryDbResponse object with parent \a parent.
 */
MemoryDbResponse::MemoryDbResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MemoryDbResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MemoryDbResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MemoryDbResponsePrivate.
 */
MemoryDbResponse::MemoryDbResponse(MemoryDbResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MemoryDbResponse::parseFailure(QIODevice &response)
{
    //Q_D(MemoryDbResponse);
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
 * \class QtAws::MemoryDb::MemoryDbResponsePrivate
 * \brief The MemoryDbResponsePrivate class provides private implementation for MemoryDbResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a MemoryDbResponsePrivate object with public implementation \a q.
 */
MemoryDbResponsePrivate::MemoryDbResponsePrivate(
    MemoryDbResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MemoryDb
} // namespace QtAws
