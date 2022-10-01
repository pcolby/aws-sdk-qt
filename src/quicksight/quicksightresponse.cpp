// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "quicksightresponse.h"
#include "quicksightresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::QuickSightResponse
 * \brief The QuickSightResponse class provides an interface for QuickSight responses.
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a QuickSightResponse object with parent \a parent.
 */
QuickSightResponse::QuickSightResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new QuickSightResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a QuickSightResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from QuickSightResponsePrivate.
 */
QuickSightResponse::QuickSightResponse(QuickSightResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void QuickSightResponse::parseFailure(QIODevice &response)
{
    //Q_D(QuickSightResponse);
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
 * \class QtAws::QuickSight::QuickSightResponsePrivate
 * \brief The QuickSightResponsePrivate class provides private implementation for QuickSightResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a QuickSightResponsePrivate object with public implementation \a q.
 */
QuickSightResponsePrivate::QuickSightResponsePrivate(
    QuickSightResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace QuickSight
} // namespace QtAws
