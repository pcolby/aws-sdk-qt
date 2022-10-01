// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchresponse.h"
#include "batchresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::BatchResponse
 * \brief The BatchResponse class provides an interface for Batch responses.
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a BatchResponse object with parent \a parent.
 */
BatchResponse::BatchResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new BatchResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a BatchResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BatchResponsePrivate.
 */
BatchResponse::BatchResponse(BatchResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void BatchResponse::parseFailure(QIODevice &response)
{
    //Q_D(BatchResponse);
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
 * \class QtAws::Batch::BatchResponsePrivate
 * \brief The BatchResponsePrivate class provides private implementation for BatchResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a BatchResponsePrivate object with public implementation \a q.
 */
BatchResponsePrivate::BatchResponsePrivate(
    BatchResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Batch
} // namespace QtAws
