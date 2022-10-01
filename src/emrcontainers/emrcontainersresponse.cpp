// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "emrcontainersresponse.h"
#include "emrcontainersresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::EmrcontainersResponse
 * \brief The EmrcontainersResponse class provides an interface for Emrcontainers responses.
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a EmrcontainersResponse object with parent \a parent.
 */
EmrcontainersResponse::EmrcontainersResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EmrcontainersResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EmrcontainersResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EmrcontainersResponsePrivate.
 */
EmrcontainersResponse::EmrcontainersResponse(EmrcontainersResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EmrcontainersResponse::parseFailure(QIODevice &response)
{
    //Q_D(EmrcontainersResponse);
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
 * \class QtAws::Emrcontainers::EmrcontainersResponsePrivate
 * \brief The EmrcontainersResponsePrivate class provides private implementation for EmrcontainersResponse.
 * \internal
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a EmrcontainersResponsePrivate object with public implementation \a q.
 */
EmrcontainersResponsePrivate::EmrcontainersResponsePrivate(
    EmrcontainersResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Emrcontainers
} // namespace QtAws
