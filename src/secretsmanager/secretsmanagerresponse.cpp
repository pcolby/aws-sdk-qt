/*
    Copyright 2013-2020 Paul Colby

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

#include "secretsmanagerresponse.h"
#include "secretsmanagerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/*!
 * \class QtAws::SecretsManager::SecretsManagerResponse
 * \brief The SecretsManagerResponse class provides an interface for SecretsManager responses.
 *
 * \inmodule QtAwsSecretsManager
 */

/*!
 * Constructs a SecretsManagerResponse object with parent \a parent.
 */
SecretsManagerResponse::SecretsManagerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SecretsManagerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SecretsManagerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SecretsManagerResponsePrivate.
 */
SecretsManagerResponse::SecretsManagerResponse(SecretsManagerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SecretsManagerResponse::parseFailure(QIODevice &response)
{
    //Q_D(SecretsManagerResponse);
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
 * \class QtAws::SecretsManager::SecretsManagerResponsePrivate
 * \brief The SecretsManagerResponsePrivate class provides private implementation for SecretsManagerResponse.
 * \internal
 *
 * \inmodule QtAwsSecretsManager
 */

/*!
 * Constructs a SecretsManagerResponsePrivate object with public implementation \a q.
 */
SecretsManagerResponsePrivate::SecretsManagerResponsePrivate(
    SecretsManagerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SecretsManager
} // namespace QtAws
