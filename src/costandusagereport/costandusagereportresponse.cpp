// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "costandusagereportresponse.h"
#include "costandusagereportresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostandUsageReport {

/*!
 * \class QtAws::CostandUsageReport::CostandUsageReportResponse
 * \brief The CostandUsageReportResponse class provides an interface for CostandUsageReport responses.
 *
 * \inmodule QtAwsCostandUsageReport
 */

/*!
 * Constructs a CostandUsageReportResponse object with parent \a parent.
 */
CostandUsageReportResponse::CostandUsageReportResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CostandUsageReportResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CostandUsageReportResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CostandUsageReportResponsePrivate.
 */
CostandUsageReportResponse::CostandUsageReportResponse(CostandUsageReportResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CostandUsageReportResponse::parseFailure(QIODevice &response)
{
    //Q_D(CostandUsageReportResponse);
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
 * \class QtAws::CostandUsageReport::CostandUsageReportResponsePrivate
 * \brief The CostandUsageReportResponsePrivate class provides private implementation for CostandUsageReportResponse.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReport
 */

/*!
 * Constructs a CostandUsageReportResponsePrivate object with public implementation \a q.
 */
CostandUsageReportResponsePrivate::CostandUsageReportResponsePrivate(
    CostandUsageReportResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CostandUsageReport
} // namespace QtAws
