// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "connectcontactlensresponse.h"
#include "connectcontactlensresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectContactLens {

/*!
 * \class QtAws::ConnectContactLens::ConnectContactLensResponse
 * \brief The ConnectContactLensResponse class provides an interface for ConnectContactLens responses.
 *
 * \inmodule QtAwsConnectContactLens
 */

/*!
 * Constructs a ConnectContactLensResponse object with parent \a parent.
 */
ConnectContactLensResponse::ConnectContactLensResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ConnectContactLensResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ConnectContactLensResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConnectContactLensResponsePrivate.
 */
ConnectContactLensResponse::ConnectContactLensResponse(ConnectContactLensResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ConnectContactLensResponse::parseFailure(QIODevice &response)
{
    //Q_D(ConnectContactLensResponse);
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
 * \class QtAws::ConnectContactLens::ConnectContactLensResponsePrivate
 * \brief The ConnectContactLensResponsePrivate class provides private implementation for ConnectContactLensResponse.
 * \internal
 *
 * \inmodule QtAwsConnectContactLens
 */

/*!
 * Constructs a ConnectContactLensResponsePrivate object with public implementation \a q.
 */
ConnectContactLensResponsePrivate::ConnectContactLensResponsePrivate(
    ConnectContactLensResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ConnectContactLens
} // namespace QtAws
