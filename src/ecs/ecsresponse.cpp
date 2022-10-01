// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ecsresponse.h"
#include "ecsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::EcsResponse
 * \brief The EcsResponse class provides an interface for Ecs responses.
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a EcsResponse object with parent \a parent.
 */
EcsResponse::EcsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EcsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EcsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EcsResponsePrivate.
 */
EcsResponse::EcsResponse(EcsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EcsResponse::parseFailure(QIODevice &response)
{
    //Q_D(EcsResponse);
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
 * \class QtAws::Ecs::EcsResponsePrivate
 * \brief The EcsResponsePrivate class provides private implementation for EcsResponse.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a EcsResponsePrivate object with public implementation \a q.
 */
EcsResponsePrivate::EcsResponsePrivate(
    EcsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Ecs
} // namespace QtAws
