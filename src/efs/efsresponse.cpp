// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "efsresponse.h"
#include "efsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::EfsResponse
 * \brief The EfsResponse class provides an interface for Efs responses.
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a EfsResponse object with parent \a parent.
 */
EfsResponse::EfsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EfsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EfsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EfsResponsePrivate.
 */
EfsResponse::EfsResponse(EfsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EfsResponse::parseFailure(QIODevice &response)
{
    //Q_D(EfsResponse);
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
 * \class QtAws::Efs::EfsResponsePrivate
 * \brief The EfsResponsePrivate class provides private implementation for EfsResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a EfsResponsePrivate object with public implementation \a q.
 */
EfsResponsePrivate::EfsResponsePrivate(
    EfsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Efs
} // namespace QtAws
