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
