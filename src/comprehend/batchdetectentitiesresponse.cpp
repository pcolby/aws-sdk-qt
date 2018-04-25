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

#include "batchdetectentitiesresponse.h"
#include "batchdetectentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::BatchDetectEntitiesResponse
 * \brief The BatchDetectEntitiesResponse class provides an interace for Comprehend BatchDetectEntities responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::batchDetectEntities
 */

/*!
 * Constructs a BatchDetectEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDetectEntitiesResponse::BatchDetectEntitiesResponse(
        const BatchDetectEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new BatchDetectEntitiesResponsePrivate(this), parent)
{
    setRequest(new BatchDetectEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDetectEntitiesRequest * BatchDetectEntitiesResponse::request() const
{
    Q_D(const BatchDetectEntitiesResponse);
    return static_cast<const BatchDetectEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend BatchDetectEntities \a response.
 */
void BatchDetectEntitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchDetectEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::BatchDetectEntitiesResponsePrivate
 * \brief The BatchDetectEntitiesResponsePrivate class provides private implementation for BatchDetectEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a BatchDetectEntitiesResponsePrivate object with public implementation \a q.
 */
BatchDetectEntitiesResponsePrivate::BatchDetectEntitiesResponsePrivate(
    BatchDetectEntitiesResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend BatchDetectEntities response element from \a xml.
 */
void BatchDetectEntitiesResponsePrivate::parseBatchDetectEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDetectEntitiesResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
