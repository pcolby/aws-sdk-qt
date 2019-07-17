/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "codecommitresponse.h"
#include "codecommitresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/*!
 * \class QtAws::CodeCommit::CodeCommitResponse
 * \brief The CodeCommitResponse class provides an interface for CodeCommit responses.
 *
 * \inmodule QtAwsCodeCommit
 */

/*!
 * Constructs a CodeCommitResponse object with parent \a parent.
 */
CodeCommitResponse::CodeCommitResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CodeCommitResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CodeCommitResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeCommitResponsePrivate.
 */
CodeCommitResponse::CodeCommitResponse(CodeCommitResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CodeCommitResponse::parseFailure(QIODevice &response)
{
    //Q_D(CodeCommitResponse);
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
 * \class QtAws::CodeCommit::CodeCommitResponsePrivate
 * \brief The CodeCommitResponsePrivate class provides private implementation for CodeCommitResponse.
 * \internal
 *
 * \inmodule QtAwsCodeCommit
 */

/*!
 * Constructs a CodeCommitResponsePrivate object with public implementation \a q.
 */
CodeCommitResponsePrivate::CodeCommitResponsePrivate(
    CodeCommitResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CodeCommit
} // namespace QtAws
