// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "machinelearningresponse.h"
#include "machinelearningresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::MachineLearningResponse
 * \brief The MachineLearningResponse class provides an interface for MachineLearning responses.
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a MachineLearningResponse object with parent \a parent.
 */
MachineLearningResponse::MachineLearningResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MachineLearningResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MachineLearningResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MachineLearningResponsePrivate.
 */
MachineLearningResponse::MachineLearningResponse(MachineLearningResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MachineLearningResponse::parseFailure(QIODevice &response)
{
    //Q_D(MachineLearningResponse);
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
 * \class QtAws::MachineLearning::MachineLearningResponsePrivate
 * \brief The MachineLearningResponsePrivate class provides private implementation for MachineLearningResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a MachineLearningResponsePrivate object with public implementation \a q.
 */
MachineLearningResponsePrivate::MachineLearningResponsePrivate(
    MachineLearningResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MachineLearning
} // namespace QtAws
