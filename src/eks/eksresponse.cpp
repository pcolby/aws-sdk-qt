// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "eksresponse.h"
#include "eksresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::EksResponse
 * \brief The EksResponse class provides an interface for Eks responses.
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a EksResponse object with parent \a parent.
 */
EksResponse::EksResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EksResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EksResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EksResponsePrivate.
 */
EksResponse::EksResponse(EksResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EksResponse::parseFailure(QIODevice &response)
{
    //Q_D(EksResponse);
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
 * \class QtAws::Eks::EksResponsePrivate
 * \brief The EksResponsePrivate class provides private implementation for EksResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a EksResponsePrivate object with public implementation \a q.
 */
EksResponsePrivate::EksResponsePrivate(
    EksResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Eks
} // namespace QtAws
