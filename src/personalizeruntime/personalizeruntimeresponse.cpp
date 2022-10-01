// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "personalizeruntimeresponse.h"
#include "personalizeruntimeresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace PersonalizeRuntime {

/*!
 * \class QtAws::PersonalizeRuntime::PersonalizeRuntimeResponse
 * \brief The PersonalizeRuntimeResponse class provides an interface for PersonalizeRuntime responses.
 *
 * \inmodule QtAwsPersonalizeRuntime
 */

/*!
 * Constructs a PersonalizeRuntimeResponse object with parent \a parent.
 */
PersonalizeRuntimeResponse::PersonalizeRuntimeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PersonalizeRuntimeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a PersonalizeRuntimeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PersonalizeRuntimeResponsePrivate.
 */
PersonalizeRuntimeResponse::PersonalizeRuntimeResponse(PersonalizeRuntimeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void PersonalizeRuntimeResponse::parseFailure(QIODevice &response)
{
    //Q_D(PersonalizeRuntimeResponse);
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
 * \class QtAws::PersonalizeRuntime::PersonalizeRuntimeResponsePrivate
 * \brief The PersonalizeRuntimeResponsePrivate class provides private implementation for PersonalizeRuntimeResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalizeRuntime
 */

/*!
 * Constructs a PersonalizeRuntimeResponsePrivate object with public implementation \a q.
 */
PersonalizeRuntimeResponsePrivate::PersonalizeRuntimeResponsePrivate(
    PersonalizeRuntimeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace PersonalizeRuntime
} // namespace QtAws
