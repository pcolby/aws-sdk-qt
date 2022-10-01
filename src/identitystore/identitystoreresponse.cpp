// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "identitystoreresponse.h"
#include "identitystoreresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::IdentityStoreResponse
 * \brief The IdentityStoreResponse class provides an interface for IdentityStore responses.
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a IdentityStoreResponse object with parent \a parent.
 */
IdentityStoreResponse::IdentityStoreResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IdentityStoreResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IdentityStoreResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IdentityStoreResponsePrivate.
 */
IdentityStoreResponse::IdentityStoreResponse(IdentityStoreResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IdentityStoreResponse::parseFailure(QIODevice &response)
{
    //Q_D(IdentityStoreResponse);
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
 * \class QtAws::IdentityStore::IdentityStoreResponsePrivate
 * \brief The IdentityStoreResponsePrivate class provides private implementation for IdentityStoreResponse.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a IdentityStoreResponsePrivate object with public implementation \a q.
 */
IdentityStoreResponsePrivate::IdentityStoreResponsePrivate(
    IdentityStoreResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IdentityStore
} // namespace QtAws
