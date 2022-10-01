// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudfrontresponse.h"
#include "cloudfrontresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CloudFrontResponse
 * \brief The CloudFrontResponse class provides an interface for CloudFront responses.
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CloudFrontResponse object with parent \a parent.
 */
CloudFrontResponse::CloudFrontResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudFrontResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudFrontResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudFrontResponsePrivate.
 */
CloudFrontResponse::CloudFrontResponse(CloudFrontResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudFrontResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudFrontResponse);
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
 * \class QtAws::CloudFront::CloudFrontResponsePrivate
 * \brief The CloudFrontResponsePrivate class provides private implementation for CloudFrontResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CloudFrontResponsePrivate object with public implementation \a q.
 */
CloudFrontResponsePrivate::CloudFrontResponsePrivate(
    CloudFrontResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudFront
} // namespace QtAws
