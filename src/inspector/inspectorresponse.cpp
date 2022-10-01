// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "inspectorresponse.h"
#include "inspectorresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::InspectorResponse
 * \brief The InspectorResponse class provides an interface for Inspector responses.
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a InspectorResponse object with parent \a parent.
 */
InspectorResponse::InspectorResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new InspectorResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a InspectorResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from InspectorResponsePrivate.
 */
InspectorResponse::InspectorResponse(InspectorResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void InspectorResponse::parseFailure(QIODevice &response)
{
    //Q_D(InspectorResponse);
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
 * \class QtAws::Inspector::InspectorResponsePrivate
 * \brief The InspectorResponsePrivate class provides private implementation for InspectorResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a InspectorResponsePrivate object with public implementation \a q.
 */
InspectorResponsePrivate::InspectorResponsePrivate(
    InspectorResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Inspector
} // namespace QtAws
