// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "emrresponse.h"
#include "emrresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::EmrResponse
 * \brief The EmrResponse class provides an interface for Emr responses.
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a EmrResponse object with parent \a parent.
 */
EmrResponse::EmrResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EmrResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EmrResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EmrResponsePrivate.
 */
EmrResponse::EmrResponse(EmrResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EmrResponse::parseFailure(QIODevice &response)
{
    //Q_D(EmrResponse);
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
 * \class QtAws::Emr::EmrResponsePrivate
 * \brief The EmrResponsePrivate class provides private implementation for EmrResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a EmrResponsePrivate object with public implementation \a q.
 */
EmrResponsePrivate::EmrResponsePrivate(
    EmrResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Emr
} // namespace QtAws
