// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "braketresponse.h"
#include "braketresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::BraketResponse
 * \brief The BraketResponse class provides an interface for Braket responses.
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a BraketResponse object with parent \a parent.
 */
BraketResponse::BraketResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new BraketResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a BraketResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BraketResponsePrivate.
 */
BraketResponse::BraketResponse(BraketResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void BraketResponse::parseFailure(QIODevice &response)
{
    //Q_D(BraketResponse);
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
 * \class QtAws::Braket::BraketResponsePrivate
 * \brief The BraketResponsePrivate class provides private implementation for BraketResponse.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a BraketResponsePrivate object with public implementation \a q.
 */
BraketResponsePrivate::BraketResponsePrivate(
    BraketResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Braket
} // namespace QtAws
