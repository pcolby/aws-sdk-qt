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

#include "listdocumentclassifiersummariesresponse.h"
#include "listdocumentclassifiersummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListDocumentClassifierSummariesResponse
 * \brief The ListDocumentClassifierSummariesResponse class provides an interace for Comprehend ListDocumentClassifierSummaries responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listDocumentClassifierSummaries
 */

/*!
 * Constructs a ListDocumentClassifierSummariesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDocumentClassifierSummariesResponse::ListDocumentClassifierSummariesResponse(
        const ListDocumentClassifierSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListDocumentClassifierSummariesResponsePrivate(this), parent)
{
    setRequest(new ListDocumentClassifierSummariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDocumentClassifierSummariesRequest * ListDocumentClassifierSummariesResponse::request() const
{
    Q_D(const ListDocumentClassifierSummariesResponse);
    return static_cast<const ListDocumentClassifierSummariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListDocumentClassifierSummaries \a response.
 */
void ListDocumentClassifierSummariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDocumentClassifierSummariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListDocumentClassifierSummariesResponsePrivate
 * \brief The ListDocumentClassifierSummariesResponsePrivate class provides private implementation for ListDocumentClassifierSummariesResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListDocumentClassifierSummariesResponsePrivate object with public implementation \a q.
 */
ListDocumentClassifierSummariesResponsePrivate::ListDocumentClassifierSummariesResponsePrivate(
    ListDocumentClassifierSummariesResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListDocumentClassifierSummaries response element from \a xml.
 */
void ListDocumentClassifierSummariesResponsePrivate::parseListDocumentClassifierSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDocumentClassifierSummariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
