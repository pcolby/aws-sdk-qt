// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "keyspacesresponse.h"
#include "keyspacesresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Keyspaces {

/*!
 * \class QtAws::Keyspaces::KeyspacesResponse
 * \brief The KeyspacesResponse class provides an interface for Keyspaces responses.
 *
 * \inmodule QtAwsKeyspaces
 */

/*!
 * Constructs a KeyspacesResponse object with parent \a parent.
 */
KeyspacesResponse::KeyspacesResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new KeyspacesResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a KeyspacesResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KeyspacesResponsePrivate.
 */
KeyspacesResponse::KeyspacesResponse(KeyspacesResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void KeyspacesResponse::parseFailure(QIODevice &response)
{
    //Q_D(KeyspacesResponse);
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
 * \class QtAws::Keyspaces::KeyspacesResponsePrivate
 * \brief The KeyspacesResponsePrivate class provides private implementation for KeyspacesResponse.
 * \internal
 *
 * \inmodule QtAwsKeyspaces
 */

/*!
 * Constructs a KeyspacesResponsePrivate object with public implementation \a q.
 */
KeyspacesResponsePrivate::KeyspacesResponsePrivate(
    KeyspacesResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Keyspaces
} // namespace QtAws
