// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kmsresponse.h"
#include "kmsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kms {

/*!
 * \class QtAws::Kms::KmsResponse
 * \brief The KmsResponse class provides an interface for Kms responses.
 *
 * \inmodule QtAwsKms
 */

/*!
 * Constructs a KmsResponse object with parent \a parent.
 */
KmsResponse::KmsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new KmsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a KmsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KmsResponsePrivate.
 */
KmsResponse::KmsResponse(KmsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void KmsResponse::parseFailure(QIODevice &response)
{
    //Q_D(KmsResponse);
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
 * \class QtAws::Kms::KmsResponsePrivate
 * \brief The KmsResponsePrivate class provides private implementation for KmsResponse.
 * \internal
 *
 * \inmodule QtAwsKms
 */

/*!
 * Constructs a KmsResponsePrivate object with public implementation \a q.
 */
KmsResponsePrivate::KmsResponsePrivate(
    KmsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Kms
} // namespace QtAws
