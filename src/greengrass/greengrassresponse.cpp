// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "greengrassresponse.h"
#include "greengrassresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GreengrassResponse
 * \brief The GreengrassResponse class provides an interface for Greengrass responses.
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GreengrassResponse object with parent \a parent.
 */
GreengrassResponse::GreengrassResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GreengrassResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GreengrassResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GreengrassResponsePrivate.
 */
GreengrassResponse::GreengrassResponse(GreengrassResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GreengrassResponse::parseFailure(QIODevice &response)
{
    //Q_D(GreengrassResponse);
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
 * \class QtAws::Greengrass::GreengrassResponsePrivate
 * \brief The GreengrassResponsePrivate class provides private implementation for GreengrassResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GreengrassResponsePrivate object with public implementation \a q.
 */
GreengrassResponsePrivate::GreengrassResponsePrivate(
    GreengrassResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Greengrass
} // namespace QtAws
