/*
    Copyright 2013-2019 Paul Colby

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

#include "listdocumentclassifiersresponse.h"
#include "listdocumentclassifiersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListDocumentClassifiersResponse
 * \brief The ListDocumentClassifiersResponse class provides an interace for Comprehend ListDocumentClassifiers responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listDocumentClassifiers
 */

/*!
 * Constructs a ListDocumentClassifiersResponse object for \a reply to \a request, with parent \a parent.
 */
ListDocumentClassifiersResponse::ListDocumentClassifiersResponse(
        const ListDocumentClassifiersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListDocumentClassifiersResponsePrivate(this), parent)
{
    setRequest(new ListDocumentClassifiersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDocumentClassifiersRequest * ListDocumentClassifiersResponse::request() const
{
    Q_D(const ListDocumentClassifiersResponse);
    return static_cast<const ListDocumentClassifiersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListDocumentClassifiers \a response.
 */
void ListDocumentClassifiersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDocumentClassifiersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListDocumentClassifiersResponsePrivate
 * \brief The ListDocumentClassifiersResponsePrivate class provides private implementation for ListDocumentClassifiersResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListDocumentClassifiersResponsePrivate object with public implementation \a q.
 */
ListDocumentClassifiersResponsePrivate::ListDocumentClassifiersResponsePrivate(
    ListDocumentClassifiersResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListDocumentClassifiers response element from \a xml.
 */
void ListDocumentClassifiersResponsePrivate::parseListDocumentClassifiersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDocumentClassifiersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
