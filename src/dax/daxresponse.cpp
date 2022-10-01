// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "daxresponse.h"
#include "daxresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DaxResponse
 * \brief The DaxResponse class provides an interface for Dax responses.
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DaxResponse object with parent \a parent.
 */
DaxResponse::DaxResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DaxResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DaxResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DaxResponsePrivate.
 */
DaxResponse::DaxResponse(DaxResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DaxResponse::parseFailure(QIODevice &response)
{
    //Q_D(DaxResponse);
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
 * \class QtAws::Dax::DaxResponsePrivate
 * \brief The DaxResponsePrivate class provides private implementation for DaxResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DaxResponsePrivate object with public implementation \a q.
 */
DaxResponsePrivate::DaxResponsePrivate(
    DaxResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Dax
} // namespace QtAws
