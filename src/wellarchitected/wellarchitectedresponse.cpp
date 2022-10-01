// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "wellarchitectedresponse.h"
#include "wellarchitectedresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::WellArchitectedResponse
 * \brief The WellArchitectedResponse class provides an interface for WellArchitected responses.
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a WellArchitectedResponse object with parent \a parent.
 */
WellArchitectedResponse::WellArchitectedResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WellArchitectedResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WellArchitectedResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WellArchitectedResponsePrivate.
 */
WellArchitectedResponse::WellArchitectedResponse(WellArchitectedResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WellArchitectedResponse::parseFailure(QIODevice &response)
{
    //Q_D(WellArchitectedResponse);
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
 * \class QtAws::WellArchitected::WellArchitectedResponsePrivate
 * \brief The WellArchitectedResponsePrivate class provides private implementation for WellArchitectedResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a WellArchitectedResponsePrivate object with public implementation \a q.
 */
WellArchitectedResponsePrivate::WellArchitectedResponsePrivate(
    WellArchitectedResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace WellArchitected
} // namespace QtAws
