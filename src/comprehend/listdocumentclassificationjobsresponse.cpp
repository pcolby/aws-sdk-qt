// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
