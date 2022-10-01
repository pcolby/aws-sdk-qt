// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "shieldresponse.h"
#include "shieldresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::ShieldResponse
 * \brief The ShieldResponse class provides an interface for Shield responses.
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a ShieldResponse object with parent \a parent.
 */
ShieldResponse::ShieldResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ShieldResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ShieldResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ShieldResponsePrivate.
 */
ShieldResponse::ShieldResponse(ShieldResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ShieldResponse::parseFailure(QIODevice &response)
{
    //Q_D(ShieldResponse);
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
 * \class QtAws::Shield::ShieldResponsePrivate
 * \brief The ShieldResponsePrivate class provides private implementation for ShieldResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a ShieldResponsePrivate object with public implementation \a q.
 */
ShieldResponsePrivate::ShieldResponsePrivate(
    ShieldResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Shield
} // namespace QtAws
