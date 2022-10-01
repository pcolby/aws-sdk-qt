// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ssmincidentsresponse.h"
#include "ssmincidentsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::SsmIncidentsResponse
 * \brief The SsmIncidentsResponse class provides an interface for SsmIncidents responses.
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a SsmIncidentsResponse object with parent \a parent.
 */
SsmIncidentsResponse::SsmIncidentsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SsmIncidentsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SsmIncidentsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsmIncidentsResponsePrivate.
 */
SsmIncidentsResponse::SsmIncidentsResponse(SsmIncidentsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SsmIncidentsResponse::parseFailure(QIODevice &response)
{
    //Q_D(SsmIncidentsResponse);
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
 * \class QtAws::SsmIncidents::SsmIncidentsResponsePrivate
 * \brief The SsmIncidentsResponsePrivate class provides private implementation for SsmIncidentsResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a SsmIncidentsResponsePrivate object with public implementation \a q.
 */
SsmIncidentsResponsePrivate::SsmIncidentsResponsePrivate(
    SsmIncidentsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
