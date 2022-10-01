// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ecrresponse.h"
#include "ecrresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::EcrResponse
 * \brief The EcrResponse class provides an interface for Ecr responses.
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a EcrResponse object with parent \a parent.
 */
EcrResponse::EcrResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EcrResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EcrResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EcrResponsePrivate.
 */
EcrResponse::EcrResponse(EcrResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EcrResponse::parseFailure(QIODevice &response)
{
    //Q_D(EcrResponse);
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
 * \class QtAws::Ecr::EcrResponsePrivate
 * \brief The EcrResponsePrivate class provides private implementation for EcrResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a EcrResponsePrivate object with public implementation \a q.
 */
EcrResponsePrivate::EcrResponsePrivate(
    EcrResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Ecr
} // namespace QtAws
