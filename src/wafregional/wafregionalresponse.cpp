// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "wafregionalresponse.h"
#include "wafregionalresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WafRegional {

/*!
 * \class QtAws::WafRegional::WafRegionalResponse
 * \brief The WafRegionalResponse class provides an interface for WafRegional responses.
 *
 * \inmodule QtAwsWafRegional
 */

/*!
 * Constructs a WafRegionalResponse object with parent \a parent.
 */
WafRegionalResponse::WafRegionalResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WafRegionalResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WafRegionalResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WafRegionalResponsePrivate.
 */
WafRegionalResponse::WafRegionalResponse(WafRegionalResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WafRegionalResponse::parseFailure(QIODevice &response)
{
    //Q_D(WafRegionalResponse);
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
 * \class QtAws::WafRegional::WafRegionalResponsePrivate
 * \brief The WafRegionalResponsePrivate class provides private implementation for WafRegionalResponse.
 * \internal
 *
 * \inmodule QtAwsWafRegional
 */

/*!
 * Constructs a WafRegionalResponsePrivate object with public implementation \a q.
 */
WafRegionalResponsePrivate::WafRegionalResponsePrivate(
    WafRegionalResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace WafRegional
} // namespace QtAws
