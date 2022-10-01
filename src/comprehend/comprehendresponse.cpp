// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "comprehendresponse.h"
#include "comprehendresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ComprehendResponse
 * \brief The ComprehendResponse class provides an interface for Comprehend responses.
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ComprehendResponse object with parent \a parent.
 */
ComprehendResponse::ComprehendResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ComprehendResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ComprehendResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ComprehendResponsePrivate.
 */
ComprehendResponse::ComprehendResponse(ComprehendResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ComprehendResponse::parseFailure(QIODevice &response)
{
    //Q_D(ComprehendResponse);
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
 * \class QtAws::Comprehend::ComprehendResponsePrivate
 * \brief The ComprehendResponsePrivate class provides private implementation for ComprehendResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ComprehendResponsePrivate object with public implementation \a q.
 */
ComprehendResponsePrivate::ComprehendResponsePrivate(
    ComprehendResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Comprehend
} // namespace QtAws
