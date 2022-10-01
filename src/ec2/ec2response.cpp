// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ec2response.h"
#include "ec2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::Ec2Response
 * \brief The Ec2Response class provides an interface for Ec2 responses.
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a Ec2Response object with parent \a parent.
 */
Ec2Response::Ec2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Ec2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Ec2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Ec2ResponsePrivate.
 */
Ec2Response::Ec2Response(Ec2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Ec2Response::parseFailure(QIODevice &response)
{
    //Q_D(Ec2Response);
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
 * \class QtAws::Ec2::Ec2ResponsePrivate
 * \brief The Ec2ResponsePrivate class provides private implementation for Ec2Response.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a Ec2ResponsePrivate object with public implementation \a q.
 */
Ec2ResponsePrivate::Ec2ResponsePrivate(
    Ec2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Ec2
} // namespace QtAws
