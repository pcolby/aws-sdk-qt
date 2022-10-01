// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sagemakeredgeresponse.h"
#include "sagemakeredgeresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SagemakerEdge {

/*!
 * \class QtAws::SagemakerEdge::SagemakerEdgeResponse
 * \brief The SagemakerEdgeResponse class provides an interface for SagemakerEdge responses.
 *
 * \inmodule QtAwsSagemakerEdge
 */

/*!
 * Constructs a SagemakerEdgeResponse object with parent \a parent.
 */
SagemakerEdgeResponse::SagemakerEdgeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SagemakerEdgeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SagemakerEdgeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SagemakerEdgeResponsePrivate.
 */
SagemakerEdgeResponse::SagemakerEdgeResponse(SagemakerEdgeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SagemakerEdgeResponse::parseFailure(QIODevice &response)
{
    //Q_D(SagemakerEdgeResponse);
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
 * \class QtAws::SagemakerEdge::SagemakerEdgeResponsePrivate
 * \brief The SagemakerEdgeResponsePrivate class provides private implementation for SagemakerEdgeResponse.
 * \internal
 *
 * \inmodule QtAwsSagemakerEdge
 */

/*!
 * Constructs a SagemakerEdgeResponsePrivate object with public implementation \a q.
 */
SagemakerEdgeResponsePrivate::SagemakerEdgeResponsePrivate(
    SagemakerEdgeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SagemakerEdge
} // namespace QtAws
