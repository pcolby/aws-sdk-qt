// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
