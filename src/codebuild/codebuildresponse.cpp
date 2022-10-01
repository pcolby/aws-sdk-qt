// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "codebuildresponse.h"
#include "codebuildresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::CodeBuildResponse
 * \brief The CodeBuildResponse class provides an interface for CodeBuild responses.
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a CodeBuildResponse object with parent \a parent.
 */
CodeBuildResponse::CodeBuildResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CodeBuildResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CodeBuildResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeBuildResponsePrivate.
 */
CodeBuildResponse::CodeBuildResponse(CodeBuildResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CodeBuildResponse::parseFailure(QIODevice &response)
{
    //Q_D(CodeBuildResponse);
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
 * \class QtAws::CodeBuild::CodeBuildResponsePrivate
 * \brief The CodeBuildResponsePrivate class provides private implementation for CodeBuildResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a CodeBuildResponsePrivate object with public implementation \a q.
 */
CodeBuildResponsePrivate::CodeBuildResponsePrivate(
    CodeBuildResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CodeBuild
} // namespace QtAws
