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

#include "batchputdocumentresponse.h"
#include "batchputdocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::BatchPutDocumentResponse
 * \brief The BatchPutDocumentResponse class provides an interace for kendra BatchPutDocument responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::batchPutDocument
 */

/*!
 * Constructs a BatchPutDocumentResponse object for \a reply to \a request, with parent \a parent.
 */
BatchPutDocumentResponse::BatchPutDocumentResponse(
        const BatchPutDocumentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new BatchPutDocumentResponsePrivate(this), parent)
{
    setRequest(new BatchPutDocumentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchPutDocumentRequest * BatchPutDocumentResponse::request() const
{
    return static_cast<const BatchPutDocumentRequest *>(kendraResponse::request());
}

/*!
 * \reimp
 * Parses a successful kendra BatchPutDocument \a response.
 */
void BatchPutDocumentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchPutDocumentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::BatchPutDocumentResponsePrivate
 * \brief The BatchPutDocumentResponsePrivate class provides private implementation for BatchPutDocumentResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a BatchPutDocumentResponsePrivate object with public implementation \a q.
 */
BatchPutDocumentResponsePrivate::BatchPutDocumentResponsePrivate(
    BatchPutDocumentResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra BatchPutDocument response element from \a xml.
 */
void BatchPutDocumentResponsePrivate::parseBatchPutDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchPutDocumentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
