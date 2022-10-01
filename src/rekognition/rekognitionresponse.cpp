// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rekognitionresponse.h"
#include "rekognitionresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::RekognitionResponse
 * \brief The RekognitionResponse class provides an interface for Rekognition responses.
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a RekognitionResponse object with parent \a parent.
 */
RekognitionResponse::RekognitionResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RekognitionResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RekognitionResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RekognitionResponsePrivate.
 */
RekognitionResponse::RekognitionResponse(RekognitionResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RekognitionResponse::parseFailure(QIODevice &response)
{
    //Q_D(RekognitionResponse);
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
 * \class QtAws::Rekognition::RekognitionResponsePrivate
 * \brief The RekognitionResponsePrivate class provides private implementation for RekognitionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a RekognitionResponsePrivate object with public implementation \a q.
 */
RekognitionResponsePrivate::RekognitionResponsePrivate(
    RekognitionResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Rekognition
} // namespace QtAws
