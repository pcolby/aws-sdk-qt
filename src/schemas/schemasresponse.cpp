// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "schemasresponse.h"
#include "schemasresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::SchemasResponse
 * \brief The SchemasResponse class provides an interface for Schemas responses.
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a SchemasResponse object with parent \a parent.
 */
SchemasResponse::SchemasResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SchemasResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SchemasResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SchemasResponsePrivate.
 */
SchemasResponse::SchemasResponse(SchemasResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SchemasResponse::parseFailure(QIODevice &response)
{
    //Q_D(SchemasResponse);
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
 * \class QtAws::Schemas::SchemasResponsePrivate
 * \brief The SchemasResponsePrivate class provides private implementation for SchemasResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a SchemasResponsePrivate object with public implementation \a q.
 */
SchemasResponsePrivate::SchemasResponsePrivate(
    SchemasResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Schemas
} // namespace QtAws
