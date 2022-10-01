// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    : QtAws::Core::AwsAbstractResponse(new CognitoSyncResponsePrivate(this), parent)
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
    : QtAws::Core::AwsAbstractResponse(d, parent)
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
    CognitoSyncResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CognitoSync
} // namespace QtAws
