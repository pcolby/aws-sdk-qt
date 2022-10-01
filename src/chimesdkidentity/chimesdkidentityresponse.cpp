// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "chimesdkidentityresponse.h"
#include "chimesdkidentityresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::ChimeSdkIdentityResponse
 * \brief The ChimeSdkIdentityResponse class provides an interface for ChimeSdkIdentity responses.
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a ChimeSdkIdentityResponse object with parent \a parent.
 */
ChimeSdkIdentityResponse::ChimeSdkIdentityResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ChimeSdkIdentityResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ChimeSdkIdentityResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ChimeSdkIdentityResponsePrivate.
 */
ChimeSdkIdentityResponse::ChimeSdkIdentityResponse(ChimeSdkIdentityResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ChimeSdkIdentityResponse::parseFailure(QIODevice &response)
{
    //Q_D(ChimeSdkIdentityResponse);
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
 * \class QtAws::ChimeSdkIdentity::ChimeSdkIdentityResponsePrivate
 * \brief The ChimeSdkIdentityResponsePrivate class provides private implementation for ChimeSdkIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a ChimeSdkIdentityResponsePrivate object with public implementation \a q.
 */
ChimeSdkIdentityResponsePrivate::ChimeSdkIdentityResponsePrivate(
    ChimeSdkIdentityResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
