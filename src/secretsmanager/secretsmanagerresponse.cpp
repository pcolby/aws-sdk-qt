// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
