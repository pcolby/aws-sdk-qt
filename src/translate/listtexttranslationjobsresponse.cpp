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

#include "listtexttranslationjobsresponse.h"
#include "listtexttranslationjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ListTextTranslationJobsResponse
 * \brief The ListTextTranslationJobsResponse class provides an interace for Translate ListTextTranslationJobs responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::listTextTranslationJobs
 */

/*!
 * Constructs a ListTextTranslationJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTextTranslationJobsResponse::ListTextTranslationJobsResponse(
        const ListTextTranslationJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new ListTextTranslationJobsResponsePrivate(this), parent)
{
    setRequest(new ListTextTranslationJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTextTranslationJobsRequest * ListTextTranslationJobsResponse::request() const
{
    return static_cast<const ListTextTranslationJobsRequest *>(TranslateResponse::request());
}

/*!
 * \reimp
 * Parses a successful Translate ListTextTranslationJobs \a response.
 */
void ListTextTranslationJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTextTranslationJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::ListTextTranslationJobsResponsePrivate
 * \brief The ListTextTranslationJobsResponsePrivate class provides private implementation for ListTextTranslationJobsResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ListTextTranslationJobsResponsePrivate object with public implementation \a q.
 */
ListTextTranslationJobsResponsePrivate::ListTextTranslationJobsResponsePrivate(
    ListTextTranslationJobsResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate ListTextTranslationJobs response element from \a xml.
 */
void ListTextTranslationJobsResponsePrivate::parseListTextTranslationJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTextTranslationJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
