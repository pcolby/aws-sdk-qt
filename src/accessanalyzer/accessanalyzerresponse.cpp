// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "accessanalyzerresponse.h"
#include "accessanalyzerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::AccessAnalyzerResponse
 * \brief The AccessAnalyzerResponse class provides an interface for AccessAnalyzer responses.
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a AccessAnalyzerResponse object with parent \a parent.
 */
AccessAnalyzerResponse::AccessAnalyzerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AccessAnalyzerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AccessAnalyzerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AccessAnalyzerResponsePrivate.
 */
AccessAnalyzerResponse::AccessAnalyzerResponse(AccessAnalyzerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AccessAnalyzerResponse::parseFailure(QIODevice &response)
{
    //Q_D(AccessAnalyzerResponse);
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
 * \class QtAws::AccessAnalyzer::AccessAnalyzerResponsePrivate
 * \brief The AccessAnalyzerResponsePrivate class provides private implementation for AccessAnalyzerResponse.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a AccessAnalyzerResponsePrivate object with public implementation \a q.
 */
AccessAnalyzerResponsePrivate::AccessAnalyzerResponsePrivate(
    AccessAnalyzerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
