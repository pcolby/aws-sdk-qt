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

#include "batchgetdocumentstatusresponse.h"
#include "batchgetdocumentstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::BatchGetDocumentStatusResponse
 * \brief The BatchGetDocumentStatusResponse class provides an interace for kendra BatchGetDocumentStatus responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::batchGetDocumentStatus
 */

/*!
 * Constructs a BatchGetDocumentStatusResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetDocumentStatusResponse::BatchGetDocumentStatusResponse(
        const BatchGetDocumentStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new BatchGetDocumentStatusResponsePrivate(this), parent)
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
 * Parses a successful kendra BatchGetDocumentStatus \a response.
 */
void BatchGetDocumentStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetDocumentStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::BatchGetDocumentStatusResponsePrivate
 * \brief The BatchGetDocumentStatusResponsePrivate class provides private implementation for BatchGetDocumentStatusResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a BatchGetDocumentStatusResponsePrivate object with public implementation \a q.
 */
BatchGetDocumentStatusResponsePrivate::BatchGetDocumentStatusResponsePrivate(
    BatchGetDocumentStatusResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra BatchGetDocumentStatus response element from \a xml.
 */
void BatchGetDocumentStatusResponsePrivate::parseBatchGetDocumentStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetDocumentStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
