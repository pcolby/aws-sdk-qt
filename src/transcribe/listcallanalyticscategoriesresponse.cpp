// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
