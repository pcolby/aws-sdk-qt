// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mediastoredataresponse.h"
#include "mediastoredataresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::MediaStoreDataResponse
 * \brief The MediaStoreDataResponse class provides an interface for MediaStoreData responses.
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a MediaStoreDataResponse object with parent \a parent.
 */
MediaStoreDataResponse::MediaStoreDataResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MediaStoreDataResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MediaStoreDataResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaStoreDataResponsePrivate.
 */
MediaStoreDataResponse::MediaStoreDataResponse(MediaStoreDataResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MediaStoreDataResponse::parseFailure(QIODevice &response)
{
    //Q_D(MediaStoreDataResponse);
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
 * \class QtAws::MediaStoreData::MediaStoreDataResponsePrivate
 * \brief The MediaStoreDataResponsePrivate class provides private implementation for MediaStoreDataResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a MediaStoreDataResponsePrivate object with public implementation \a q.
 */
MediaStoreDataResponsePrivate::MediaStoreDataResponsePrivate(
    MediaStoreDataResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MediaStoreData
} // namespace QtAws
