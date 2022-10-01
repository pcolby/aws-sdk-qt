// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetdocumentstatusresponse.h"
#include "batchgetdocumentstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::BatchGetDocumentStatusResponse
 * \brief The BatchGetDocumentStatusResponse class provides an interace for Kendra BatchGetDocumentStatus responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::batchGetDocumentStatus
 */

/*!
 * Constructs a BatchGetDocumentStatusResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetDocumentStatusResponse::BatchGetDocumentStatusResponse(
        const BatchGetDocumentStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new BatchGetDocumentStatusResponsePrivate(this), parent)
{
    setRequest(new BatchGetDocumentStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetDocumentStatusRequest * BatchGetDocumentStatusResponse::request() const
{
    Q_D(const BatchGetDocumentStatusResponse);
    return static_cast<const BatchGetDocumentStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra BatchGetDocumentStatus \a response.
 */
void BatchGetDocumentStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetDocumentStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::BatchGetDocumentStatusResponsePrivate
 * \brief The BatchGetDocumentStatusResponsePrivate class provides private implementation for BatchGetDocumentStatusResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a BatchGetDocumentStatusResponsePrivate object with public implementation \a q.
 */
BatchGetDocumentStatusResponsePrivate::BatchGetDocumentStatusResponsePrivate(
    BatchGetDocumentStatusResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra BatchGetDocumentStatus response element from \a xml.
 */
void BatchGetDocumentStatusResponsePrivate::parseBatchGetDocumentStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetDocumentStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
