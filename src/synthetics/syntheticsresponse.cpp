// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "syntheticsresponse.h"
#include "syntheticsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::SyntheticsResponse
 * \brief The SyntheticsResponse class provides an interface for Synthetics responses.
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a SyntheticsResponse object with parent \a parent.
 */
SyntheticsResponse::SyntheticsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SyntheticsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SyntheticsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SyntheticsResponsePrivate.
 */
SyntheticsResponse::SyntheticsResponse(SyntheticsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SyntheticsResponse::parseFailure(QIODevice &response)
{
    //Q_D(SyntheticsResponse);
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
 * \class QtAws::Synthetics::SyntheticsResponsePrivate
 * \brief The SyntheticsResponsePrivate class provides private implementation for SyntheticsResponse.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a SyntheticsResponsePrivate object with public implementation \a q.
 */
SyntheticsResponsePrivate::SyntheticsResponsePrivate(
    SyntheticsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Synthetics
} // namespace QtAws
