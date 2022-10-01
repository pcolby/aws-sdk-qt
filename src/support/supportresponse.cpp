// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "supportresponse.h"
#include "supportresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Support {

/*!
 * \class QtAws::Support::SupportResponse
 * \brief The SupportResponse class provides an interface for Support responses.
 *
 * \inmodule QtAwsSupport
 */

/*!
 * Constructs a SupportResponse object with parent \a parent.
 */
SupportResponse::SupportResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SupportResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SupportResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SupportResponsePrivate.
 */
SupportResponse::SupportResponse(SupportResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SupportResponse::parseFailure(QIODevice &response)
{
    //Q_D(SupportResponse);
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
 * \class QtAws::Support::SupportResponsePrivate
 * \brief The SupportResponsePrivate class provides private implementation for SupportResponse.
 * \internal
 *
 * \inmodule QtAwsSupport
 */

/*!
 * Constructs a SupportResponsePrivate object with public implementation \a q.
 */
SupportResponsePrivate::SupportResponsePrivate(
    SupportResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Support
} // namespace QtAws
