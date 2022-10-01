// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "s3controlresponse.h"
#include "s3controlresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::S3ControlResponse
 * \brief The S3ControlResponse class provides an interface for S3Control responses.
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a S3ControlResponse object with parent \a parent.
 */
S3ControlResponse::S3ControlResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new S3ControlResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a S3ControlResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from S3ControlResponsePrivate.
 */
S3ControlResponse::S3ControlResponse(S3ControlResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void S3ControlResponse::parseFailure(QIODevice &response)
{
    //Q_D(S3ControlResponse);
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
 * \class QtAws::S3Control::S3ControlResponsePrivate
 * \brief The S3ControlResponsePrivate class provides private implementation for S3ControlResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a S3ControlResponsePrivate object with public implementation \a q.
 */
S3ControlResponsePrivate::S3ControlResponsePrivate(
    S3ControlResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace S3Control
} // namespace QtAws
