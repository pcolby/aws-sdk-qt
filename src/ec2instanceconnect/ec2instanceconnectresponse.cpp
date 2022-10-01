// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ec2instanceconnectresponse.h"
#include "ec2instanceconnectresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2InstanceConnect {

/*!
 * \class QtAws::Ec2InstanceConnect::Ec2InstanceConnectResponse
 * \brief The Ec2InstanceConnectResponse class provides an interface for Ec2InstanceConnect responses.
 *
 * \inmodule QtAwsEc2InstanceConnect
 */

/*!
 * Constructs a Ec2InstanceConnectResponse object with parent \a parent.
 */
Ec2InstanceConnectResponse::Ec2InstanceConnectResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Ec2InstanceConnectResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Ec2InstanceConnectResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Ec2InstanceConnectResponsePrivate.
 */
Ec2InstanceConnectResponse::Ec2InstanceConnectResponse(Ec2InstanceConnectResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Ec2InstanceConnectResponse::parseFailure(QIODevice &response)
{
    //Q_D(Ec2InstanceConnectResponse);
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
 * \class QtAws::Ec2InstanceConnect::Ec2InstanceConnectResponsePrivate
 * \brief The Ec2InstanceConnectResponsePrivate class provides private implementation for Ec2InstanceConnectResponse.
 * \internal
 *
 * \inmodule QtAwsEc2InstanceConnect
 */

/*!
 * Constructs a Ec2InstanceConnectResponsePrivate object with public implementation \a q.
 */
Ec2InstanceConnectResponsePrivate::Ec2InstanceConnectResponsePrivate(
    Ec2InstanceConnectResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Ec2InstanceConnect
} // namespace QtAws
