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

#include "backupgatewayresponse.h"
#include "backupgatewayresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::BackupGatewayResponse
 * \brief The BackupGatewayResponse class provides an interface for BackupGateway responses.
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a BackupGatewayResponse object with parent \a parent.
 */
BackupGatewayResponse::BackupGatewayResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new BackupGatewayResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a BackupGatewayResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BackupGatewayResponsePrivate.
 */
BackupGatewayResponse::BackupGatewayResponse(BackupGatewayResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void BackupGatewayResponse::parseFailure(QIODevice &response)
{
    //Q_D(BackupGatewayResponse);
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
 * \class QtAws::BackupGateway::BackupGatewayResponsePrivate
 * \brief The BackupGatewayResponsePrivate class provides private implementation for BackupGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a BackupGatewayResponsePrivate object with public implementation \a q.
 */
BackupGatewayResponsePrivate::BackupGatewayResponsePrivate(
    BackupGatewayResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace BackupGateway
} // namespace QtAws
