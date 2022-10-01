// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "elasticsearchresponse.h"
#include "elasticsearchresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::ElasticsearchResponse
 * \brief The ElasticsearchResponse class provides an interface for Elasticsearch responses.
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ElasticsearchResponse object with parent \a parent.
 */
ElasticsearchResponse::ElasticsearchResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ElasticsearchResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ElasticsearchResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticsearchResponsePrivate.
 */
ElasticsearchResponse::ElasticsearchResponse(ElasticsearchResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ElasticsearchResponse::parseFailure(QIODevice &response)
{
    //Q_D(ElasticsearchResponse);
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
 * \class QtAws::Elasticsearch::ElasticsearchResponsePrivate
 * \brief The ElasticsearchResponsePrivate class provides private implementation for ElasticsearchResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ElasticsearchResponsePrivate object with public implementation \a q.
 */
ElasticsearchResponsePrivate::ElasticsearchResponsePrivate(
    ElasticsearchResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
