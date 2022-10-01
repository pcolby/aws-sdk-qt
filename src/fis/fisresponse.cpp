// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "fisresponse.h"
#include "fisresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::FisResponse
 * \brief The FisResponse class provides an interface for Fis responses.
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a FisResponse object with parent \a parent.
 */
FisResponse::FisResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new FisResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a FisResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FisResponsePrivate.
 */
FisResponse::FisResponse(FisResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void FisResponse::parseFailure(QIODevice &response)
{
    //Q_D(FisResponse);
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
 * \class QtAws::Fis::FisResponsePrivate
 * \brief The FisResponsePrivate class provides private implementation for FisResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a FisResponsePrivate object with public implementation \a q.
 */
FisResponsePrivate::FisResponsePrivate(
    FisResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Fis
} // namespace QtAws
