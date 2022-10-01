/*
    Copyright 2013-2021 Paul Colby

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

#include "opensearchresponse.h"
#include "opensearchresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::OpenSearchResponse
 * \brief The OpenSearchResponse class provides an interface for OpenSearch responses.
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a OpenSearchResponse object with parent \a parent.
 */
OpenSearchResponse::OpenSearchResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new OpenSearchResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a OpenSearchResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from OpenSearchResponsePrivate.
 */
OpenSearchResponse::OpenSearchResponse(OpenSearchResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void OpenSearchResponse::parseFailure(QIODevice &response)
{
    //Q_D(OpenSearchResponse);
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
 * \class QtAws::OpenSearch::OpenSearchResponsePrivate
 * \brief The OpenSearchResponsePrivate class provides private implementation for OpenSearchResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a OpenSearchResponsePrivate object with public implementation \a q.
 */
OpenSearchResponsePrivate::OpenSearchResponsePrivate(
    OpenSearchResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace OpenSearch
} // namespace QtAws
