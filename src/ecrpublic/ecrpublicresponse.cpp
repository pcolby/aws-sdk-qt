// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ecrpublicresponse.h"
#include "ecrpublicresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::EcrPublicResponse
 * \brief The EcrPublicResponse class provides an interface for EcrPublic responses.
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a EcrPublicResponse object with parent \a parent.
 */
EcrPublicResponse::EcrPublicResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EcrPublicResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EcrPublicResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EcrPublicResponsePrivate.
 */
EcrPublicResponse::EcrPublicResponse(EcrPublicResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EcrPublicResponse::parseFailure(QIODevice &response)
{
    //Q_D(EcrPublicResponse);
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
 * \class QtAws::EcrPublic::EcrPublicResponsePrivate
 * \brief The EcrPublicResponsePrivate class provides private implementation for EcrPublicResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a EcrPublicResponsePrivate object with public implementation \a q.
 */
EcrPublicResponsePrivate::EcrPublicResponsePrivate(
    EcrPublicResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace EcrPublic
} // namespace QtAws
