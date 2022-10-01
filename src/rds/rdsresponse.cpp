// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rdsresponse.h"
#include "rdsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rds {

/*!
 * \class QtAws::Rds::RdsResponse
 * \brief The RdsResponse class provides an interface for Rds responses.
 *
 * \inmodule QtAwsRds
 */

/*!
 * Constructs a RdsResponse object with parent \a parent.
 */
RdsResponse::RdsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RdsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RdsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RdsResponsePrivate.
 */
RdsResponse::RdsResponse(RdsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RdsResponse::parseFailure(QIODevice &response)
{
    //Q_D(RdsResponse);
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
 * \class QtAws::Rds::RdsResponsePrivate
 * \brief The RdsResponsePrivate class provides private implementation for RdsResponse.
 * \internal
 *
 * \inmodule QtAwsRds
 */

/*!
 * Constructs a RdsResponsePrivate object with public implementation \a q.
 */
RdsResponsePrivate::RdsResponsePrivate(
    RdsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Rds
} // namespace QtAws
