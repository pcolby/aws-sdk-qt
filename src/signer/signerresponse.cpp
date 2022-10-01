// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "signerresponse.h"
#include "signerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Signer {

/*!
 * \class QtAws::Signer::SignerResponse
 * \brief The SignerResponse class provides an interface for Signer responses.
 *
 * \inmodule QtAwsSigner
 */

/*!
 * Constructs a SignerResponse object with parent \a parent.
 */
SignerResponse::SignerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SignerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SignerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SignerResponsePrivate.
 */
SignerResponse::SignerResponse(SignerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SignerResponse::parseFailure(QIODevice &response)
{
    //Q_D(SignerResponse);
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
 * \class QtAws::Signer::SignerResponsePrivate
 * \brief The SignerResponsePrivate class provides private implementation for SignerResponse.
 * \internal
 *
 * \inmodule QtAwsSigner
 */

/*!
 * Constructs a SignerResponsePrivate object with public implementation \a q.
 */
SignerResponsePrivate::SignerResponsePrivate(
    SignerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Signer
} // namespace QtAws
