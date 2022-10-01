// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "amplifybackendresponse.h"
#include "amplifybackendresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::AmplifyBackendResponse
 * \brief The AmplifyBackendResponse class provides an interface for AmplifyBackend responses.
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a AmplifyBackendResponse object with parent \a parent.
 */
AmplifyBackendResponse::AmplifyBackendResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AmplifyBackendResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AmplifyBackendResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AmplifyBackendResponsePrivate.
 */
AmplifyBackendResponse::AmplifyBackendResponse(AmplifyBackendResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AmplifyBackendResponse::parseFailure(QIODevice &response)
{
    //Q_D(AmplifyBackendResponse);
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
 * \class QtAws::AmplifyBackend::AmplifyBackendResponsePrivate
 * \brief The AmplifyBackendResponsePrivate class provides private implementation for AmplifyBackendResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a AmplifyBackendResponsePrivate object with public implementation \a q.
 */
AmplifyBackendResponsePrivate::AmplifyBackendResponsePrivate(
    AmplifyBackendResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AmplifyBackend
} // namespace QtAws
