// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudtrailresponse.h"
#include "cloudtrailresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::CloudTrailResponse
 * \brief The CloudTrailResponse class provides an interface for CloudTrail responses.
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a CloudTrailResponse object with parent \a parent.
 */
CloudTrailResponse::CloudTrailResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudTrailResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudTrailResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudTrailResponsePrivate.
 */
CloudTrailResponse::CloudTrailResponse(CloudTrailResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudTrailResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudTrailResponse);
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
 * \class QtAws::CloudTrail::CloudTrailResponsePrivate
 * \brief The CloudTrailResponsePrivate class provides private implementation for CloudTrailResponse.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a CloudTrailResponsePrivate object with public implementation \a q.
 */
CloudTrailResponsePrivate::CloudTrailResponsePrivate(
    CloudTrailResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudTrail
} // namespace QtAws
