// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "redshiftdataresponse.h"
#include "redshiftdataresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::RedshiftDataResponse
 * \brief The RedshiftDataResponse class provides an interface for RedshiftData responses.
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a RedshiftDataResponse object with parent \a parent.
 */
RedshiftDataResponse::RedshiftDataResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RedshiftDataResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RedshiftDataResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RedshiftDataResponsePrivate.
 */
RedshiftDataResponse::RedshiftDataResponse(RedshiftDataResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RedshiftDataResponse::parseFailure(QIODevice &response)
{
    //Q_D(RedshiftDataResponse);
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
 * \class QtAws::RedshiftData::RedshiftDataResponsePrivate
 * \brief The RedshiftDataResponsePrivate class provides private implementation for RedshiftDataResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a RedshiftDataResponsePrivate object with public implementation \a q.
 */
RedshiftDataResponsePrivate::RedshiftDataResponsePrivate(
    RedshiftDataResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace RedshiftData
} // namespace QtAws
