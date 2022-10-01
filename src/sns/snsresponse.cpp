// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "snsresponse.h"
#include "snsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::SnsResponse
 * \brief The SnsResponse class provides an interface for Sns responses.
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a SnsResponse object with parent \a parent.
 */
SnsResponse::SnsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SnsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SnsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SnsResponsePrivate.
 */
SnsResponse::SnsResponse(SnsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SnsResponse::parseFailure(QIODevice &response)
{
    //Q_D(SnsResponse);
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
 * \class QtAws::Sns::SnsResponsePrivate
 * \brief The SnsResponsePrivate class provides private implementation for SnsResponse.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a SnsResponsePrivate object with public implementation \a q.
 */
SnsResponsePrivate::SnsResponsePrivate(
    SnsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Sns
} // namespace QtAws
