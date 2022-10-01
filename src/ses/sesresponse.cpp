// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sesresponse.h"
#include "sesresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SesResponse
 * \brief The SesResponse class provides an interface for Ses responses.
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SesResponse object with parent \a parent.
 */
SesResponse::SesResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SesResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SesResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SesResponsePrivate.
 */
SesResponse::SesResponse(SesResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SesResponse::parseFailure(QIODevice &response)
{
    //Q_D(SesResponse);
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
 * \class QtAws::Ses::SesResponsePrivate
 * \brief The SesResponsePrivate class provides private implementation for SesResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SesResponsePrivate object with public implementation \a q.
 */
SesResponsePrivate::SesResponsePrivate(
    SesResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Ses
} // namespace QtAws
