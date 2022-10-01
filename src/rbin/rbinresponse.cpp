// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rbinresponse.h"
#include "rbinresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rbin {

/*!
 * \class QtAws::Rbin::RbinResponse
 * \brief The RbinResponse class provides an interface for Rbin responses.
 *
 * \inmodule QtAwsRbin
 */

/*!
 * Constructs a RbinResponse object with parent \a parent.
 */
RbinResponse::RbinResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RbinResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RbinResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RbinResponsePrivate.
 */
RbinResponse::RbinResponse(RbinResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RbinResponse::parseFailure(QIODevice &response)
{
    //Q_D(RbinResponse);
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
 * \class QtAws::Rbin::RbinResponsePrivate
 * \brief The RbinResponsePrivate class provides private implementation for RbinResponse.
 * \internal
 *
 * \inmodule QtAwsRbin
 */

/*!
 * Constructs a RbinResponsePrivate object with public implementation \a q.
 */
RbinResponsePrivate::RbinResponsePrivate(
    RbinResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Rbin
} // namespace QtAws
