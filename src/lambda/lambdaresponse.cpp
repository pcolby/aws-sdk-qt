// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lambdaresponse.h"
#include "lambdaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::LambdaResponse
 * \brief The LambdaResponse class provides an interface for Lambda responses.
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a LambdaResponse object with parent \a parent.
 */
LambdaResponse::LambdaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LambdaResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LambdaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LambdaResponsePrivate.
 */
LambdaResponse::LambdaResponse(LambdaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LambdaResponse::parseFailure(QIODevice &response)
{
    //Q_D(LambdaResponse);
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
 * \class QtAws::Lambda::LambdaResponsePrivate
 * \brief The LambdaResponsePrivate class provides private implementation for LambdaResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a LambdaResponsePrivate object with public implementation \a q.
 */
LambdaResponsePrivate::LambdaResponsePrivate(
    LambdaResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Lambda
} // namespace QtAws
