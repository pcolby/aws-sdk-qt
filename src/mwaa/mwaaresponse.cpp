// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mwaaresponse.h"
#include "mwaaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mwaa {

/*!
 * \class QtAws::Mwaa::MwaaResponse
 * \brief The MwaaResponse class provides an interface for Mwaa responses.
 *
 * \inmodule QtAwsMwaa
 */

/*!
 * Constructs a MwaaResponse object with parent \a parent.
 */
MwaaResponse::MwaaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MwaaResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MwaaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MwaaResponsePrivate.
 */
MwaaResponse::MwaaResponse(MwaaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MwaaResponse::parseFailure(QIODevice &response)
{
    //Q_D(MwaaResponse);
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
 * \class QtAws::Mwaa::MwaaResponsePrivate
 * \brief The MwaaResponsePrivate class provides private implementation for MwaaResponse.
 * \internal
 *
 * \inmodule QtAwsMwaa
 */

/*!
 * Constructs a MwaaResponsePrivate object with public implementation \a q.
 */
MwaaResponsePrivate::MwaaResponsePrivate(
    MwaaResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Mwaa
} // namespace QtAws
