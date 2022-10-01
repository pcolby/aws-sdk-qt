// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "codestarconnectionsresponse.h"
#include "codestarconnectionsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStarconnections {

/*!
 * \class QtAws::CodeStarconnections::CodeStarconnectionsResponse
 * \brief The CodeStarconnectionsResponse class provides an interface for CodeStarconnections responses.
 *
 * \inmodule QtAwsCodeStarconnections
 */

/*!
 * Constructs a CodeStarconnectionsResponse object with parent \a parent.
 */
CodeStarconnectionsResponse::CodeStarconnectionsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CodeStarconnectionsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CodeStarconnectionsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeStarconnectionsResponsePrivate.
 */
CodeStarconnectionsResponse::CodeStarconnectionsResponse(CodeStarconnectionsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CodeStarconnectionsResponse::parseFailure(QIODevice &response)
{
    //Q_D(CodeStarconnectionsResponse);
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
 * \class QtAws::CodeStarconnections::CodeStarconnectionsResponsePrivate
 * \brief The CodeStarconnectionsResponsePrivate class provides private implementation for CodeStarconnectionsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeStarconnections
 */

/*!
 * Constructs a CodeStarconnectionsResponsePrivate object with public implementation \a q.
 */
CodeStarconnectionsResponsePrivate::CodeStarconnectionsResponsePrivate(
    CodeStarconnectionsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CodeStarconnections
} // namespace QtAws
