// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lexruntimeresponse.h"
#include "lexruntimeresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntime {

/*!
 * \class QtAws::LexRuntime::LexRuntimeResponse
 * \brief The LexRuntimeResponse class provides an interface for LexRuntime responses.
 *
 * \inmodule QtAwsLexRuntime
 */

/*!
 * Constructs a LexRuntimeResponse object with parent \a parent.
 */
LexRuntimeResponse::LexRuntimeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LexRuntimeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LexRuntimeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LexRuntimeResponsePrivate.
 */
LexRuntimeResponse::LexRuntimeResponse(LexRuntimeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LexRuntimeResponse::parseFailure(QIODevice &response)
{
    //Q_D(LexRuntimeResponse);
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
 * \class QtAws::LexRuntime::LexRuntimeResponsePrivate
 * \brief The LexRuntimeResponsePrivate class provides private implementation for LexRuntimeResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntime
 */

/*!
 * Constructs a LexRuntimeResponsePrivate object with public implementation \a q.
 */
LexRuntimeResponsePrivate::LexRuntimeResponsePrivate(
    LexRuntimeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace LexRuntime
} // namespace QtAws
