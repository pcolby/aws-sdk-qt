// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "textractresponse.h"
#include "textractresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::TextractResponse
 * \brief The TextractResponse class provides an interface for Textract responses.
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a TextractResponse object with parent \a parent.
 */
TextractResponse::TextractResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new TextractResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a TextractResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TextractResponsePrivate.
 */
TextractResponse::TextractResponse(TextractResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void TextractResponse::parseFailure(QIODevice &response)
{
    //Q_D(TextractResponse);
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
 * \class QtAws::Textract::TextractResponsePrivate
 * \brief The TextractResponsePrivate class provides private implementation for TextractResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a TextractResponsePrivate object with public implementation \a q.
 */
TextractResponsePrivate::TextractResponsePrivate(
    TextractResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Textract
} // namespace QtAws
