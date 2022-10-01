// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudhsmresponse.h"
#include "cloudhsmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::CloudHsmResponse
 * \brief The CloudHsmResponse class provides an interface for CloudHsm responses.
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a CloudHsmResponse object with parent \a parent.
 */
CloudHsmResponse::CloudHsmResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudHsmResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudHsmResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudHsmResponsePrivate.
 */
CloudHsmResponse::CloudHsmResponse(CloudHsmResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudHsmResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudHsmResponse);
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
 * \class QtAws::CloudHsm::CloudHsmResponsePrivate
 * \brief The CloudHsmResponsePrivate class provides private implementation for CloudHsmResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a CloudHsmResponsePrivate object with public implementation \a q.
 */
CloudHsmResponsePrivate::CloudHsmResponsePrivate(
    CloudHsmResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudHsm
} // namespace QtAws
