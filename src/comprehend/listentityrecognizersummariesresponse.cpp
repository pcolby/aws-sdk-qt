// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentityrecognizersummariesresponse.h"
#include "listentityrecognizersummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListEntityRecognizerSummariesResponse
 * \brief The ListEntityRecognizerSummariesResponse class provides an interace for Comprehend ListEntityRecognizerSummaries responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listEntityRecognizerSummaries
 */

/*!
 * Constructs a ListEntityRecognizerSummariesResponse object for \a reply to \a request, with parent \a parent.
 */
ListEntityRecognizerSummariesResponse::ListEntityRecognizerSummariesResponse(
        const ListEntityRecognizerSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListEntityRecognizerSummariesResponsePrivate(this), parent)
{
    setRequest(new ListEntityRecognizerSummariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEntityRecognizerSummariesRequest * ListEntityRecognizerSummariesResponse::request() const
{
    Q_D(const ListEntityRecognizerSummariesResponse);
    return static_cast<const ListEntityRecognizerSummariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListEntityRecognizerSummaries \a response.
 */
void ListEntityRecognizerSummariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEntityRecognizerSummariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListEntityRecognizerSummariesResponsePrivate
 * \brief The ListEntityRecognizerSummariesResponsePrivate class provides private implementation for ListEntityRecognizerSummariesResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListEntityRecognizerSummariesResponsePrivate object with public implementation \a q.
 */
ListEntityRecognizerSummariesResponsePrivate::ListEntityRecognizerSummariesResponsePrivate(
    ListEntityRecognizerSummariesResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListEntityRecognizerSummaries response element from \a xml.
 */
void ListEntityRecognizerSummariesResponsePrivate::parseListEntityRecognizerSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEntityRecognizerSummariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
