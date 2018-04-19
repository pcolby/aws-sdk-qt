/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    Q_D(CodeBuildResponse);
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
