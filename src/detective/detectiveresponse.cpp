// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectiveresponse.h"
#include "detectiveresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Detective {

/*!
 * \class QtAws::Detective::DetectiveResponse
 * \brief The DetectiveResponse class provides an interface for Detective responses.
 *
 * \inmodule QtAwsDetective
 */

/*!
 * Constructs a DetectiveResponse object with parent \a parent.
 */
DetectiveResponse::DetectiveResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DetectiveResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DetectiveResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DetectiveResponsePrivate.
 */
DetectiveResponse::DetectiveResponse(DetectiveResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DetectiveResponse::parseFailure(QIODevice &response)
{
    //Q_D(DetectiveResponse);
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
 * \class QtAws::Detective::DetectiveResponsePrivate
 * \brief The DetectiveResponsePrivate class provides private implementation for DetectiveResponse.
 * \internal
 *
 * \inmodule QtAwsDetective
 */

/*!
 * Constructs a DetectiveResponsePrivate object with public implementation \a q.
 */
DetectiveResponsePrivate::DetectiveResponsePrivate(
    DetectiveResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Detective
} // namespace QtAws
