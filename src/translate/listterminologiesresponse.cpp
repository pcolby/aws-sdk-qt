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

#include "listterminologiesresponse.h"
#include "listterminologiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ListTerminologiesResponse
 * \brief The ListTerminologiesResponse class provides an interace for Translate ListTerminologies responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::listTerminologies
 */

/*!
 * Constructs a ListTerminologiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTerminologiesResponse::ListTerminologiesResponse(
        const ListTerminologiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new ListTerminologiesResponsePrivate(this), parent)
{
    setRequest(new ListTerminologiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTerminologiesRequest * ListTerminologiesResponse::request() const
{
    Q_D(const ListTerminologiesResponse);
    return static_cast<const ListTerminologiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate ListTerminologies \a response.
 */
void ListTerminologiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTerminologiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::ListTerminologiesResponsePrivate
 * \brief The ListTerminologiesResponsePrivate class provides private implementation for ListTerminologiesResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ListTerminologiesResponsePrivate object with public implementation \a q.
 */
ListTerminologiesResponsePrivate::ListTerminologiesResponsePrivate(
    ListTerminologiesResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate ListTerminologies response element from \a xml.
 */
void ListTerminologiesResponsePrivate::parseListTerminologiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTerminologiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
