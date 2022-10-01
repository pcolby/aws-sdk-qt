// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rdsdataresponse.h"
#include "rdsdataresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace RdsData {

/*!
 * \class QtAws::RdsData::RdsDataResponse
 * \brief The RdsDataResponse class provides an interface for RdsData responses.
 *
 * \inmodule QtAwsRdsData
 */

/*!
 * Constructs a RdsDataResponse object with parent \a parent.
 */
RdsDataResponse::RdsDataResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RdsDataResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RdsDataResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RdsDataResponsePrivate.
 */
RdsDataResponse::RdsDataResponse(RdsDataResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RdsDataResponse::parseFailure(QIODevice &response)
{
    //Q_D(RdsDataResponse);
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
 * \class QtAws::RdsData::RdsDataResponsePrivate
 * \brief The RdsDataResponsePrivate class provides private implementation for RdsDataResponse.
 * \internal
 *
 * \inmodule QtAwsRdsData
 */

/*!
 * Constructs a RdsDataResponsePrivate object with public implementation \a q.
 */
RdsDataResponsePrivate::RdsDataResponsePrivate(
    RdsDataResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace RdsData
} // namespace QtAws
