// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mobileresponse.h"
#include "mobileresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::MobileResponse
 * \brief The MobileResponse class provides an interface for Mobile responses.
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a MobileResponse object with parent \a parent.
 */
MobileResponse::MobileResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MobileResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MobileResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MobileResponsePrivate.
 */
MobileResponse::MobileResponse(MobileResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MobileResponse::parseFailure(QIODevice &response)
{
    //Q_D(MobileResponse);
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
 * \class QtAws::Mobile::MobileResponsePrivate
 * \brief The MobileResponsePrivate class provides private implementation for MobileResponse.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a MobileResponsePrivate object with public implementation \a q.
 */
MobileResponsePrivate::MobileResponsePrivate(
    MobileResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Mobile
} // namespace QtAws
