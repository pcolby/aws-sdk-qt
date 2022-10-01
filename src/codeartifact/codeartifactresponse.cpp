// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "codeartifactresponse.h"
#include "codeartifactresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeArtifact {

/*!
 * \class QtAws::CodeArtifact::CodeArtifactResponse
 * \brief The CodeArtifactResponse class provides an interface for CodeArtifact responses.
 *
 * \inmodule QtAwsCodeArtifact
 */

/*!
 * Constructs a CodeArtifactResponse object with parent \a parent.
 */
CodeArtifactResponse::CodeArtifactResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CodeArtifactResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CodeArtifactResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeArtifactResponsePrivate.
 */
CodeArtifactResponse::CodeArtifactResponse(CodeArtifactResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CodeArtifactResponse::parseFailure(QIODevice &response)
{
    //Q_D(CodeArtifactResponse);
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
 * \class QtAws::CodeArtifact::CodeArtifactResponsePrivate
 * \brief The CodeArtifactResponsePrivate class provides private implementation for CodeArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsCodeArtifact
 */

/*!
 * Constructs a CodeArtifactResponsePrivate object with public implementation \a q.
 */
CodeArtifactResponsePrivate::CodeArtifactResponsePrivate(
    CodeArtifactResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CodeArtifact
} // namespace QtAws
