// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchputdocumentresponse.h"
#include "batchputdocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::BatchPutDocumentResponse
 * \brief The BatchPutDocumentResponse class provides an interace for Kendra BatchPutDocument responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::batchPutDocument
 */

/*!
 * Constructs a BatchPutDocumentResponse object for \a reply to \a request, with parent \a parent.
 */
BatchPutDocumentResponse::BatchPutDocumentResponse(
        const BatchPutDocumentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new BatchPutDocumentResponsePrivate(this), parent)
{
    setRequest(new BatchPutDocumentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchPutDocumentRequest * BatchPutDocumentResponse::request() const
{
    Q_D(const BatchPutDocumentResponse);
    return static_cast<const BatchPutDocumentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra BatchPutDocument \a response.
 */
void BatchPutDocumentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchPutDocumentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::BatchPutDocumentResponsePrivate
 * \brief The BatchPutDocumentResponsePrivate class provides private implementation for BatchPutDocumentResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a BatchPutDocumentResponsePrivate object with public implementation \a q.
 */
BatchPutDocumentResponsePrivate::BatchPutDocumentResponsePrivate(
    BatchPutDocumentResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra BatchPutDocument response element from \a xml.
 */
void BatchPutDocumentResponsePrivate::parseBatchPutDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchPutDocumentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
