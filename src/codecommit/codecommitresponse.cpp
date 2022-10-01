// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
