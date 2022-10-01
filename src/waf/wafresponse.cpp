// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "wafresponse.h"
#include "wafresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::WafResponse
 * \brief The WafResponse class provides an interface for Waf responses.
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a WafResponse object with parent \a parent.
 */
WafResponse::WafResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WafResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WafResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WafResponsePrivate.
 */
WafResponse::WafResponse(WafResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WafResponse::parseFailure(QIODevice &response)
{
    //Q_D(WafResponse);
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
 * \class QtAws::Waf::WafResponsePrivate
 * \brief The WafResponsePrivate class provides private implementation for WafResponse.
 * \internal
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a WafResponsePrivate object with public implementation \a q.
 */
WafResponsePrivate::WafResponsePrivate(
    WafResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Waf
} // namespace QtAws
