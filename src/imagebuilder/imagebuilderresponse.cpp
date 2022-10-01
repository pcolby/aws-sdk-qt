// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "imagebuilderresponse.h"
#include "imagebuilderresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ImageBuilderResponse
 * \brief The ImageBuilderResponse class provides an interface for ImageBuilder responses.
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ImageBuilderResponse object with parent \a parent.
 */
ImageBuilderResponse::ImageBuilderResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ImageBuilderResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ImageBuilderResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ImageBuilderResponsePrivate.
 */
ImageBuilderResponse::ImageBuilderResponse(ImageBuilderResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ImageBuilderResponse::parseFailure(QIODevice &response)
{
    //Q_D(ImageBuilderResponse);
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
 * \class QtAws::ImageBuilder::ImageBuilderResponsePrivate
 * \brief The ImageBuilderResponsePrivate class provides private implementation for ImageBuilderResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ImageBuilderResponsePrivate object with public implementation \a q.
 */
ImageBuilderResponsePrivate::ImageBuilderResponsePrivate(
    ImageBuilderResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
