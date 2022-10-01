// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletedocumentresponse.h"
#include "batchdeletedocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::BatchDeleteDocumentResponse
 * \brief The BatchDeleteDocumentResponse class provides an interace for Kendra BatchDeleteDocument responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::batchDeleteDocument
 */

/*!
 * Constructs a BatchDeleteDocumentResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteDocumentResponse::BatchDeleteDocumentResponse(
        const BatchDeleteDocumentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new BatchDeleteDocumentResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteDocumentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteDocumentRequest * BatchDeleteDocumentResponse::request() const
{
    Q_D(const BatchDeleteDocumentResponse);
    return static_cast<const BatchDeleteDocumentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra BatchDeleteDocument \a response.
 */
void BatchDeleteDocumentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteDocumentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::BatchDeleteDocumentResponsePrivate
 * \brief The BatchDeleteDocumentResponsePrivate class provides private implementation for BatchDeleteDocumentResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a BatchDeleteDocumentResponsePrivate object with public implementation \a q.
 */
BatchDeleteDocumentResponsePrivate::BatchDeleteDocumentResponsePrivate(
    BatchDeleteDocumentResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra BatchDeleteDocument response element from \a xml.
 */
void BatchDeleteDocumentResponsePrivate::parseBatchDeleteDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteDocumentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
