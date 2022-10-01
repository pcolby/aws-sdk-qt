// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "swfresponse.h"
#include "swfresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::SwfResponse
 * \brief The SwfResponse class provides an interface for Swf responses.
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a SwfResponse object with parent \a parent.
 */
SwfResponse::SwfResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SwfResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SwfResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SwfResponsePrivate.
 */
SwfResponse::SwfResponse(SwfResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SwfResponse::parseFailure(QIODevice &response)
{
    //Q_D(SwfResponse);
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
 * \class QtAws::Swf::SwfResponsePrivate
 * \brief The SwfResponsePrivate class provides private implementation for SwfResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a SwfResponsePrivate object with public implementation \a q.
 */
SwfResponsePrivate::SwfResponsePrivate(
    SwfResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Swf
} // namespace QtAws
