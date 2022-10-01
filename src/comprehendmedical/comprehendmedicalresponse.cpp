// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "comprehendmedicalresponse.h"
#include "comprehendmedicalresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ComprehendMedicalResponse
 * \brief The ComprehendMedicalResponse class provides an interface for ComprehendMedical responses.
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ComprehendMedicalResponse object with parent \a parent.
 */
ComprehendMedicalResponse::ComprehendMedicalResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ComprehendMedicalResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ComprehendMedicalResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ComprehendMedicalResponsePrivate.
 */
ComprehendMedicalResponse::ComprehendMedicalResponse(ComprehendMedicalResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ComprehendMedicalResponse::parseFailure(QIODevice &response)
{
    //Q_D(ComprehendMedicalResponse);
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
 * \class QtAws::ComprehendMedical::ComprehendMedicalResponsePrivate
 * \brief The ComprehendMedicalResponsePrivate class provides private implementation for ComprehendMedicalResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ComprehendMedicalResponsePrivate object with public implementation \a q.
 */
ComprehendMedicalResponsePrivate::ComprehendMedicalResponsePrivate(
    ComprehendMedicalResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
