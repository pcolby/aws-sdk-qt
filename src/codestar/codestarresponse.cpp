// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "codestarresponse.h"
#include "codestarresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStar {

/*!
 * \class QtAws::CodeStar::CodeStarResponse
 * \brief The CodeStarResponse class provides an interface for CodeStar responses.
 *
 * \inmodule QtAwsCodeStar
 */

/*!
 * Constructs a CodeStarResponse object with parent \a parent.
 */
CodeStarResponse::CodeStarResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CodeStarResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CodeStarResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeStarResponsePrivate.
 */
CodeStarResponse::CodeStarResponse(CodeStarResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CodeStarResponse::parseFailure(QIODevice &response)
{
    //Q_D(CodeStarResponse);
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
 * \class QtAws::CodeStar::CodeStarResponsePrivate
 * \brief The CodeStarResponsePrivate class provides private implementation for CodeStarResponse.
 * \internal
 *
 * \inmodule QtAwsCodeStar
 */

/*!
 * Constructs a CodeStarResponsePrivate object with public implementation \a q.
 */
CodeStarResponsePrivate::CodeStarResponsePrivate(
    CodeStarResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CodeStar
} // namespace QtAws
