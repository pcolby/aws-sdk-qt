// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "chimesdkmediapipelinesresponse.h"
#include "chimesdkmediapipelinesresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::ChimeSdkMediaPipelinesResponse
 * \brief The ChimeSdkMediaPipelinesResponse class provides an interface for ChimeSdkMediaPipelines responses.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a ChimeSdkMediaPipelinesResponse object with parent \a parent.
 */
ChimeSdkMediaPipelinesResponse::ChimeSdkMediaPipelinesResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ChimeSdkMediaPipelinesResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ChimeSdkMediaPipelinesResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ChimeSdkMediaPipelinesResponsePrivate.
 */
ChimeSdkMediaPipelinesResponse::ChimeSdkMediaPipelinesResponse(ChimeSdkMediaPipelinesResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ChimeSdkMediaPipelinesResponse::parseFailure(QIODevice &response)
{
    //Q_D(ChimeSdkMediaPipelinesResponse);
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
 * \class QtAws::ChimeSdkMediaPipelines::ChimeSdkMediaPipelinesResponsePrivate
 * \brief The ChimeSdkMediaPipelinesResponsePrivate class provides private implementation for ChimeSdkMediaPipelinesResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a ChimeSdkMediaPipelinesResponsePrivate object with public implementation \a q.
 */
ChimeSdkMediaPipelinesResponsePrivate::ChimeSdkMediaPipelinesResponsePrivate(
    ChimeSdkMediaPipelinesResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
