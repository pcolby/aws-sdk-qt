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

#include "listlanguagesresponse.h"
#include "listlanguagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ListLanguagesResponse
 * \brief The ListLanguagesResponse class provides an interace for Translate ListLanguages responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::listLanguages
 */

/*!
 * Constructs a ListLanguagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListLanguagesResponse::ListLanguagesResponse(
        const ListLanguagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new ListLanguagesResponsePrivate(this), parent)
{
    setRequest(new ListLanguagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLanguagesRequest * ListLanguagesResponse::request() const
{
    Q_D(const ListLanguagesResponse);
    return static_cast<const ListLanguagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate ListLanguages \a response.
 */
void ListLanguagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLanguagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::ListLanguagesResponsePrivate
 * \brief The ListLanguagesResponsePrivate class provides private implementation for ListLanguagesResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ListLanguagesResponsePrivate object with public implementation \a q.
 */
ListLanguagesResponsePrivate::ListLanguagesResponsePrivate(
    ListLanguagesResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate ListLanguages response element from \a xml.
 */
void ListLanguagesResponsePrivate::parseListLanguagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLanguagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
