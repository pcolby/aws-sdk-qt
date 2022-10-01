// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sagemakerresponse.h"
#include "sagemakerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::SageMakerResponse
 * \brief The SageMakerResponse class provides an interface for SageMaker responses.
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a SageMakerResponse object with parent \a parent.
 */
SageMakerResponse::SageMakerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SageMakerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SageMakerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SageMakerResponsePrivate.
 */
SageMakerResponse::SageMakerResponse(SageMakerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SageMakerResponse::parseFailure(QIODevice &response)
{
    //Q_D(SageMakerResponse);
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
 * \class QtAws::SageMaker::SageMakerResponsePrivate
 * \brief The SageMakerResponsePrivate class provides private implementation for SageMakerResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a SageMakerResponsePrivate object with public implementation \a q.
 */
SageMakerResponsePrivate::SageMakerResponsePrivate(
    SageMakerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SageMaker
} // namespace QtAws
