// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "fmsresponse.h"
#include "fmsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::FmsResponse
 * \brief The FmsResponse class provides an interface for Fms responses.
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a FmsResponse object with parent \a parent.
 */
FmsResponse::FmsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new FmsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a FmsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FmsResponsePrivate.
 */
FmsResponse::FmsResponse(FmsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void FmsResponse::parseFailure(QIODevice &response)
{
    //Q_D(FmsResponse);
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
 * \class QtAws::Fms::FmsResponsePrivate
 * \brief The FmsResponsePrivate class provides private implementation for FmsResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a FmsResponsePrivate object with public implementation \a q.
 */
FmsResponsePrivate::FmsResponsePrivate(
    FmsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Fms
} // namespace QtAws
