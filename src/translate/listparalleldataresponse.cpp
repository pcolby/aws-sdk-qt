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

#include "listparalleldataresponse.h"
#include "listparalleldataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ListParallelDataResponse
 * \brief The ListParallelDataResponse class provides an interace for Translate ListParallelData responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::listParallelData
 */

/*!
 * Constructs a ListParallelDataResponse object for \a reply to \a request, with parent \a parent.
 */
ListParallelDataResponse::ListParallelDataResponse(
        const ListParallelDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new ListParallelDataResponsePrivate(this), parent)
{
    setRequest(new ListParallelDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListParallelDataRequest * ListParallelDataResponse::request() const
{
    return static_cast<const ListParallelDataRequest *>(TranslateResponse::request());
}

/*!
 * \reimp
 * Parses a successful Translate ListParallelData \a response.
 */
void ListParallelDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListParallelDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::ListParallelDataResponsePrivate
 * \brief The ListParallelDataResponsePrivate class provides private implementation for ListParallelDataResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ListParallelDataResponsePrivate object with public implementation \a q.
 */
ListParallelDataResponsePrivate::ListParallelDataResponsePrivate(
    ListParallelDataResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate ListParallelData response element from \a xml.
 */
void ListParallelDataResponsePrivate::parseListParallelDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListParallelDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
