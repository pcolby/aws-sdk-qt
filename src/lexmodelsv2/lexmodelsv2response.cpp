// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lexmodelsv2response.h"
#include "lexmodelsv2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::LexModelsV2Response
 * \brief The LexModelsV2Response class provides an interface for LexModelsV2 responses.
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a LexModelsV2Response object with parent \a parent.
 */
LexModelsV2Response::LexModelsV2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LexModelsV2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LexModelsV2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LexModelsV2ResponsePrivate.
 */
LexModelsV2Response::LexModelsV2Response(LexModelsV2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LexModelsV2Response::parseFailure(QIODevice &response)
{
    //Q_D(LexModelsV2Response);
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
 * \class QtAws::LexModelsV2::LexModelsV2ResponsePrivate
 * \brief The LexModelsV2ResponsePrivate class provides private implementation for LexModelsV2Response.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a LexModelsV2ResponsePrivate object with public implementation \a q.
 */
LexModelsV2ResponsePrivate::LexModelsV2ResponsePrivate(
    LexModelsV2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
