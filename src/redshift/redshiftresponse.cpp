// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "redshiftresponse.h"
#include "redshiftresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::RedshiftResponse
 * \brief The RedshiftResponse class provides an interface for Redshift responses.
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a RedshiftResponse object with parent \a parent.
 */
RedshiftResponse::RedshiftResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RedshiftResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RedshiftResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RedshiftResponsePrivate.
 */
RedshiftResponse::RedshiftResponse(RedshiftResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RedshiftResponse::parseFailure(QIODevice &response)
{
    //Q_D(RedshiftResponse);
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
 * \class QtAws::Redshift::RedshiftResponsePrivate
 * \brief The RedshiftResponsePrivate class provides private implementation for RedshiftResponse.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a RedshiftResponsePrivate object with public implementation \a q.
 */
RedshiftResponsePrivate::RedshiftResponsePrivate(
    RedshiftResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Redshift
} // namespace QtAws
