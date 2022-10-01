// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "managedblockchainresponse.h"
#include "managedblockchainresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ManagedBlockchainResponse
 * \brief The ManagedBlockchainResponse class provides an interface for ManagedBlockchain responses.
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ManagedBlockchainResponse object with parent \a parent.
 */
ManagedBlockchainResponse::ManagedBlockchainResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ManagedBlockchainResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ManagedBlockchainResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ManagedBlockchainResponsePrivate.
 */
ManagedBlockchainResponse::ManagedBlockchainResponse(ManagedBlockchainResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ManagedBlockchainResponse::parseFailure(QIODevice &response)
{
    //Q_D(ManagedBlockchainResponse);
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
 * \class QtAws::ManagedBlockchain::ManagedBlockchainResponsePrivate
 * \brief The ManagedBlockchainResponsePrivate class provides private implementation for ManagedBlockchainResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ManagedBlockchainResponsePrivate object with public implementation \a q.
 */
ManagedBlockchainResponsePrivate::ManagedBlockchainResponsePrivate(
    ManagedBlockchainResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
