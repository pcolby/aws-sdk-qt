// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "finspacedataresponse.h"
#include "finspacedataresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::FinspaceDataResponse
 * \brief The FinspaceDataResponse class provides an interface for FinspaceData responses.
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a FinspaceDataResponse object with parent \a parent.
 */
FinspaceDataResponse::FinspaceDataResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new FinspaceDataResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a FinspaceDataResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FinspaceDataResponsePrivate.
 */
FinspaceDataResponse::FinspaceDataResponse(FinspaceDataResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void FinspaceDataResponse::parseFailure(QIODevice &response)
{
    //Q_D(FinspaceDataResponse);
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
 * \class QtAws::FinspaceData::FinspaceDataResponsePrivate
 * \brief The FinspaceDataResponsePrivate class provides private implementation for FinspaceDataResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a FinspaceDataResponsePrivate object with public implementation \a q.
 */
FinspaceDataResponsePrivate::FinspaceDataResponsePrivate(
    FinspaceDataResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace FinspaceData
} // namespace QtAws
