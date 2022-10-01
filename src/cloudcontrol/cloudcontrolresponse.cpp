// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudcontrolresponse.h"
#include "cloudcontrolresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::CloudControlResponse
 * \brief The CloudControlResponse class provides an interface for CloudControl responses.
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a CloudControlResponse object with parent \a parent.
 */
CloudControlResponse::CloudControlResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudControlResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudControlResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudControlResponsePrivate.
 */
CloudControlResponse::CloudControlResponse(CloudControlResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudControlResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudControlResponse);
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
 * \class QtAws::CloudControl::CloudControlResponsePrivate
 * \brief The CloudControlResponsePrivate class provides private implementation for CloudControlResponse.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a CloudControlResponsePrivate object with public implementation \a q.
 */
CloudControlResponsePrivate::CloudControlResponsePrivate(
    CloudControlResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudControl
} // namespace QtAws
