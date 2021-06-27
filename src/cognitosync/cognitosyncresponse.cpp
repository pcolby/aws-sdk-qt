/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cognitosyncresponse.h"
#include "cognitosyncresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/*!
 * \class QtAws::CognitoSync::CognitoSyncResponse
 * \brief The CognitoSyncResponse class provides an interface for CognitoSync responses.
 *
 * \inmodule QtAwsCognitoSync
 */

/*!
 * Constructs a CognitoSyncResponse object with parent \a parent.
 */
CognitoSyncResponse::CognitoSyncResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new CognitoSyncResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a CognitoSyncResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CognitoSyncResponsePrivate.
 */
CognitoSyncResponse::CognitoSyncResponse(CognitoSyncResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void CognitoSyncResponse::parseFailure(QIODevice &response)
{
    //Q_D(CognitoSyncResponse);
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
 * \class QtAws::CognitoSync::CognitoSyncResponsePrivate
 * \brief The CognitoSyncResponsePrivate class provides private implementation for CognitoSyncResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoSync
 */

/*!
 * Constructs a CognitoSyncResponsePrivate object with public implementation \a q.
 */
CognitoSyncResponsePrivate::CognitoSyncResponsePrivate(
    CognitoSyncResponse * const q) : q_ptr(q)
{

}

} // namespace CognitoSync
} // namespace QtAws
