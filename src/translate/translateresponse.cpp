// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "translateresponse.h"
#include "translateresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::TranslateResponse
 * \brief The TranslateResponse class provides an interface for Translate responses.
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a TranslateResponse object with parent \a parent.
 */
TranslateResponse::TranslateResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new TranslateResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a TranslateResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TranslateResponsePrivate.
 */
TranslateResponse::TranslateResponse(TranslateResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void TranslateResponse::parseFailure(QIODevice &response)
{
    //Q_D(TranslateResponse);
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
 * \class QtAws::Translate::TranslateResponsePrivate
 * \brief The TranslateResponsePrivate class provides private implementation for TranslateResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a TranslateResponsePrivate object with public implementation \a q.
 */
TranslateResponsePrivate::TranslateResponsePrivate(
    TranslateResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Translate
} // namespace QtAws
