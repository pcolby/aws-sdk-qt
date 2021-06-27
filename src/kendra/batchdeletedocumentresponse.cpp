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

#include "batchdeletedocumentresponse.h"
#include "batchdeletedocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::BatchDeleteDocumentResponse
 * \brief The BatchDeleteDocumentResponse class provides an interace for kendra BatchDeleteDocument responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::batchDeleteDocument
 */

/*!
 * Constructs a BatchDeleteDocumentResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteDocumentResponse::BatchDeleteDocumentResponse(
        const BatchDeleteDocumentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new BatchDeleteDocumentResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteDocumentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteDocumentRequest * BatchDeleteDocumentResponse::request() const
{
    return static_cast<const BatchDeleteDocumentRequest *>(kendraResponse::request());
}

/*!
 * \reimp
 * Parses a successful kendra BatchDeleteDocument \a response.
 */
void BatchDeleteDocumentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteDocumentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::BatchDeleteDocumentResponsePrivate
 * \brief The BatchDeleteDocumentResponsePrivate class provides private implementation for BatchDeleteDocumentResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a BatchDeleteDocumentResponsePrivate object with public implementation \a q.
 */
BatchDeleteDocumentResponsePrivate::BatchDeleteDocumentResponsePrivate(
    BatchDeleteDocumentResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra BatchDeleteDocument response element from \a xml.
 */
void BatchDeleteDocumentResponsePrivate::parseBatchDeleteDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteDocumentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
