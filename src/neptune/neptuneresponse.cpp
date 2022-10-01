// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "neptuneresponse.h"
#include "neptuneresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::NeptuneResponse
 * \brief The NeptuneResponse class provides an interface for Neptune responses.
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a NeptuneResponse object with parent \a parent.
 */
NeptuneResponse::NeptuneResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new NeptuneResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a NeptuneResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from NeptuneResponsePrivate.
 */
NeptuneResponse::NeptuneResponse(NeptuneResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void NeptuneResponse::parseFailure(QIODevice &response)
{
    //Q_D(NeptuneResponse);
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
 * \class QtAws::Neptune::NeptuneResponsePrivate
 * \brief The NeptuneResponsePrivate class provides private implementation for NeptuneResponse.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a NeptuneResponsePrivate object with public implementation \a q.
 */
NeptuneResponsePrivate::NeptuneResponsePrivate(
    NeptuneResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Neptune
} // namespace QtAws
