/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    Q_D(CloudSearchResponse);
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
