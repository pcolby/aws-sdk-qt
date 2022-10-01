// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
