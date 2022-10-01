// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "alexaforbusinessresponse.h"
#include "alexaforbusinessresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AlexaForBusinessResponse
 * \brief The AlexaForBusinessResponse class provides an interface for AlexaForBusiness responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AlexaForBusinessResponse object with parent \a parent.
 */
AlexaForBusinessResponse::AlexaForBusinessResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AlexaForBusinessResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AlexaForBusinessResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AlexaForBusinessResponsePrivate.
 */
AlexaForBusinessResponse::AlexaForBusinessResponse(AlexaForBusinessResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AlexaForBusinessResponse::parseFailure(QIODevice &response)
{
    //Q_D(AlexaForBusinessResponse);
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
 * \class QtAws::AlexaForBusiness::AlexaForBusinessResponsePrivate
 * \brief The AlexaForBusinessResponsePrivate class provides private implementation for AlexaForBusinessResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AlexaForBusinessResponsePrivate object with public implementation \a q.
 */
AlexaForBusinessResponsePrivate::AlexaForBusinessResponsePrivate(
    AlexaForBusinessResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
