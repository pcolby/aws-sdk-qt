// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "codedeployresponse.h"
#include "codedeployresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/*!
 * \class QtAws::CodeDeploy::CodeDeployResponse
 * \brief The CodeDeployResponse class provides an interface for CodeDeploy responses.
 *
 * \inmodule QtAwsCodeDeploy
 */

/*!
 * Constructs a CodeDeployResponse object with parent \a parent.
 */
CodeDeployResponse::CodeDeployResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CodeDeployResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CodeDeployResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeDeployResponsePrivate.
 */
CodeDeployResponse::CodeDeployResponse(CodeDeployResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CodeDeployResponse::parseFailure(QIODevice &response)
{
    //Q_D(CodeDeployResponse);
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
 * \class QtAws::CodeDeploy::CodeDeployResponsePrivate
 * \brief The CodeDeployResponsePrivate class provides private implementation for CodeDeployResponse.
 * \internal
 *
 * \inmodule QtAwsCodeDeploy
 */

/*!
 * Constructs a CodeDeployResponsePrivate object with public implementation \a q.
 */
CodeDeployResponsePrivate::CodeDeployResponsePrivate(
    CodeDeployResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
