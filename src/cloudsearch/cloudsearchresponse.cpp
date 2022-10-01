// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudsearchresponse.h"
#include "cloudsearchresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::CloudSearchResponse
 * \brief The CloudSearchResponse class provides an interface for CloudSearch responses.
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a CloudSearchResponse object with parent \a parent.
 */
CloudSearchResponse::CloudSearchResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudSearchResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudSearchResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudSearchResponsePrivate.
 */
CloudSearchResponse::CloudSearchResponse(CloudSearchResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudSearchResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudSearchResponse);
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
 * \class QtAws::CloudSearch::CloudSearchResponsePrivate
 * \brief The CloudSearchResponsePrivate class provides private implementation for CloudSearchResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a CloudSearchResponsePrivate object with public implementation \a q.
 */
CloudSearchResponsePrivate::CloudSearchResponsePrivate(
    CloudSearchResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudSearch
} // namespace QtAws
