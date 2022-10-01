// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "finspaceresponse.h"
#include "finspaceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Finspace {

/*!
 * \class QtAws::Finspace::FinspaceResponse
 * \brief The FinspaceResponse class provides an interface for Finspace responses.
 *
 * \inmodule QtAwsFinspace
 */

/*!
 * Constructs a FinspaceResponse object with parent \a parent.
 */
FinspaceResponse::FinspaceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new FinspaceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a FinspaceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FinspaceResponsePrivate.
 */
FinspaceResponse::FinspaceResponse(FinspaceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void FinspaceResponse::parseFailure(QIODevice &response)
{
    //Q_D(FinspaceResponse);
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
 * \class QtAws::Finspace::FinspaceResponsePrivate
 * \brief The FinspaceResponsePrivate class provides private implementation for FinspaceResponse.
 * \internal
 *
 * \inmodule QtAwsFinspace
 */

/*!
 * Constructs a FinspaceResponsePrivate object with public implementation \a q.
 */
FinspaceResponsePrivate::FinspaceResponsePrivate(
    FinspaceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Finspace
} // namespace QtAws
