// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "qldbresponse.h"
#include "qldbresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::QldbResponse
 * \brief The QldbResponse class provides an interface for Qldb responses.
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a QldbResponse object with parent \a parent.
 */
QldbResponse::QldbResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new QldbResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a QldbResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from QldbResponsePrivate.
 */
QldbResponse::QldbResponse(QldbResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void QldbResponse::parseFailure(QIODevice &response)
{
    //Q_D(QldbResponse);
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
 * \class QtAws::Qldb::QldbResponsePrivate
 * \brief The QldbResponsePrivate class provides private implementation for QldbResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a QldbResponsePrivate object with public implementation \a q.
 */
QldbResponsePrivate::QldbResponsePrivate(
    QldbResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Qldb
} // namespace QtAws
