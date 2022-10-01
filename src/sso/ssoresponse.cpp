// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ssoresponse.h"
#include "ssoresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sso {

/*!
 * \class QtAws::Sso::SsoResponse
 * \brief The SsoResponse class provides an interface for Sso responses.
 *
 * \inmodule QtAwsSso
 */

/*!
 * Constructs a SsoResponse object with parent \a parent.
 */
SsoResponse::SsoResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SsoResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SsoResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsoResponsePrivate.
 */
SsoResponse::SsoResponse(SsoResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SsoResponse::parseFailure(QIODevice &response)
{
    //Q_D(SsoResponse);
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
 * \class QtAws::Sso::SsoResponsePrivate
 * \brief The SsoResponsePrivate class provides private implementation for SsoResponse.
 * \internal
 *
 * \inmodule QtAwsSso
 */

/*!
 * Constructs a SsoResponsePrivate object with public implementation \a q.
 */
SsoResponsePrivate::SsoResponsePrivate(
    SsoResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Sso
} // namespace QtAws
