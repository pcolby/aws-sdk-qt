// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mediaconnectresponse.h"
#include "mediaconnectresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::MediaConnectResponse
 * \brief The MediaConnectResponse class provides an interface for MediaConnect responses.
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a MediaConnectResponse object with parent \a parent.
 */
MediaConnectResponse::MediaConnectResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MediaConnectResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MediaConnectResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaConnectResponsePrivate.
 */
MediaConnectResponse::MediaConnectResponse(MediaConnectResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MediaConnectResponse::parseFailure(QIODevice &response)
{
    //Q_D(MediaConnectResponse);
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
 * \class QtAws::MediaConnect::MediaConnectResponsePrivate
 * \brief The MediaConnectResponsePrivate class provides private implementation for MediaConnectResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a MediaConnectResponsePrivate object with public implementation \a q.
 */
MediaConnectResponsePrivate::MediaConnectResponsePrivate(
    MediaConnectResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MediaConnect
} // namespace QtAws
