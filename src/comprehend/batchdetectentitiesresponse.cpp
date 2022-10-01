// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(BatchDetectEntitiesResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
