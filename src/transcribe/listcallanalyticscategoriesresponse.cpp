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

#include "listcallanalyticscategoriesresponse.h"
#include "listcallanalyticscategoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::ListCallAnalyticsCategoriesResponse
 * \brief The ListCallAnalyticsCategoriesResponse class provides an interace for Transcribe ListCallAnalyticsCategories responses.
 *
 * \inmodule QtAwsTranscribe
 *
 *  Amazon Transcribe offers three main types of batch transcription: <b>Standard</b>, <b>Medical</b>, and <b>Call
 * 
 *  Analytics</b>> <ul> <li>
 * 
 *  <b>Standard transcriptions</b> are the most common option. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Medical transcriptions</b> are tailored to medical professionals and incorporate medical terms. A common use case for
 *  this service is transcribing doctor-patient dialogue into after-visit notes. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Call Analytics transcriptions</b> are designed for use with call center audio on two different channels; if you're
 *  looking for insight into customer service calls, use this option. Refer to for
 *
 * \sa TranscribeClient::listCallAnalyticsCategories
 */

/*!
 * Constructs a ListCallAnalyticsCategoriesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCallAnalyticsCategoriesResponse::ListCallAnalyticsCategoriesResponse(
        const ListCallAnalyticsCategoriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new ListCallAnalyticsCategoriesResponsePrivate(this), parent)
{
    setRequest(new ListCallAnalyticsCategoriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCallAnalyticsCategoriesRequest * ListCallAnalyticsCategoriesResponse::request() const
{
    Q_D(const ListCallAnalyticsCategoriesResponse);
    return static_cast<const ListCallAnalyticsCategoriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe ListCallAnalyticsCategories \a response.
 */
void ListCallAnalyticsCategoriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCallAnalyticsCategoriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::ListCallAnalyticsCategoriesResponsePrivate
 * \brief The ListCallAnalyticsCategoriesResponsePrivate class provides private implementation for ListCallAnalyticsCategoriesResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a ListCallAnalyticsCategoriesResponsePrivate object with public implementation \a q.
 */
ListCallAnalyticsCategoriesResponsePrivate::ListCallAnalyticsCategoriesResponsePrivate(
    ListCallAnalyticsCategoriesResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe ListCallAnalyticsCategories response element from \a xml.
 */
void ListCallAnalyticsCategoriesResponsePrivate::parseListCallAnalyticsCategoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCallAnalyticsCategoriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
