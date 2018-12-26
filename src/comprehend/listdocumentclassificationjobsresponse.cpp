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

#include "listdocumentclassificationjobsresponse.h"
#include "listdocumentclassificationjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListDocumentClassificationJobsResponse
 * \brief The ListDocumentClassificationJobsResponse class provides an interace for Comprehend ListDocumentClassificationJobs responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listDocumentClassificationJobs
 */

/*!
 * Constructs a ListDocumentClassificationJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDocumentClassificationJobsResponse::ListDocumentClassificationJobsResponse(
        const ListDocumentClassificationJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListDocumentClassificationJobsResponsePrivate(this), parent)
{
    setRequest(new ListDocumentClassificationJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDocumentClassificationJobsRequest * ListDocumentClassificationJobsResponse::request() const
{
    Q_D(const ListDocumentClassificationJobsResponse);
    return static_cast<const ListDocumentClassificationJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListDocumentClassificationJobs \a response.
 */
void ListDocumentClassificationJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDocumentClassificationJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListDocumentClassificationJobsResponsePrivate
 * \brief The ListDocumentClassificationJobsResponsePrivate class provides private implementation for ListDocumentClassificationJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListDocumentClassificationJobsResponsePrivate object with public implementation \a q.
 */
ListDocumentClassificationJobsResponsePrivate::ListDocumentClassificationJobsResponsePrivate(
    ListDocumentClassificationJobsResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListDocumentClassificationJobs response element from \a xml.
 */
void ListDocumentClassificationJobsResponsePrivate::parseListDocumentClassificationJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDocumentClassificationJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
