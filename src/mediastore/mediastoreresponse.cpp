// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mediastoreresponse.h"
#include "mediastoreresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::MediaStoreResponse
 * \brief The MediaStoreResponse class provides an interface for MediaStore responses.
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a MediaStoreResponse object with parent \a parent.
 */
MediaStoreResponse::MediaStoreResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MediaStoreResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MediaStoreResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaStoreResponsePrivate.
 */
MediaStoreResponse::MediaStoreResponse(MediaStoreResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MediaStoreResponse::parseFailure(QIODevice &response)
{
    //Q_D(MediaStoreResponse);
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
 * \class QtAws::MediaStore::MediaStoreResponsePrivate
 * \brief The MediaStoreResponsePrivate class provides private implementation for MediaStoreResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a MediaStoreResponsePrivate object with public implementation \a q.
 */
MediaStoreResponsePrivate::MediaStoreResponsePrivate(
    MediaStoreResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MediaStore
} // namespace QtAws
