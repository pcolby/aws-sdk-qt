// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "glueresponse.h"
#include "glueresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GlueResponse
 * \brief The GlueResponse class provides an interface for Glue responses.
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GlueResponse object with parent \a parent.
 */
GlueResponse::GlueResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GlueResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GlueResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GlueResponsePrivate.
 */
GlueResponse::GlueResponse(GlueResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GlueResponse::parseFailure(QIODevice &response)
{
    //Q_D(GlueResponse);
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
 * \class QtAws::Glue::GlueResponsePrivate
 * \brief The GlueResponsePrivate class provides private implementation for GlueResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GlueResponsePrivate object with public implementation \a q.
 */
GlueResponsePrivate::GlueResponsePrivate(
    GlueResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Glue
} // namespace QtAws
