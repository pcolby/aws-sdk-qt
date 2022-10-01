// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "athenaresponse.h"
#include "athenaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::AthenaResponse
 * \brief The AthenaResponse class provides an interface for Athena responses.
 *
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a AthenaResponse object with parent \a parent.
 */
AthenaResponse::AthenaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AthenaResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AthenaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AthenaResponsePrivate.
 */
AthenaResponse::AthenaResponse(AthenaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AthenaResponse::parseFailure(QIODevice &response)
{
    //Q_D(AthenaResponse);
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
 * \class QtAws::Athena::AthenaResponsePrivate
 * \brief The AthenaResponsePrivate class provides private implementation for AthenaResponse.
 * \internal
 *
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a AthenaResponsePrivate object with public implementation \a q.
 */
AthenaResponsePrivate::AthenaResponsePrivate(
    AthenaResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Athena
} // namespace QtAws
