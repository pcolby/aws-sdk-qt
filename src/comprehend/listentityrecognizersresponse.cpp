// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentityrecognizersresponse.h"
#include "listentityrecognizersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListEntityRecognizersResponse
 * \brief The ListEntityRecognizersResponse class provides an interace for Comprehend ListEntityRecognizers responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listEntityRecognizers
 */

/*!
 * Constructs a ListEntityRecognizersResponse object for \a reply to \a request, with parent \a parent.
 */
ListEntityRecognizersResponse::ListEntityRecognizersResponse(
        const ListEntityRecognizersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ListEntityRecognizersResponsePrivate(this), parent)
{
    setRequest(new ListEntityRecognizersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEntityRecognizersRequest * ListEntityRecognizersResponse::request() const
{
    Q_D(const ListEntityRecognizersResponse);
    return static_cast<const ListEntityRecognizersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ListEntityRecognizers \a response.
 */
void ListEntityRecognizersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEntityRecognizersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ListEntityRecognizersResponsePrivate
 * \brief The ListEntityRecognizersResponsePrivate class provides private implementation for ListEntityRecognizersResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListEntityRecognizersResponsePrivate object with public implementation \a q.
 */
ListEntityRecognizersResponsePrivate::ListEntityRecognizersResponsePrivate(
    ListEntityRecognizersResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ListEntityRecognizers response element from \a xml.
 */
void ListEntityRecognizersResponsePrivate::parseListEntityRecognizersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEntityRecognizersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
