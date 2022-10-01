// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcallanalyticsjobsresponse.h"
#include "listcallanalyticsjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::ListCallAnalyticsJobsResponse
 * \brief The ListCallAnalyticsJobsResponse class provides an interace for Transcribe ListCallAnalyticsJobs responses.
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
 * \sa TranscribeClient::listCallAnalyticsJobs
 */

/*!
 * Constructs a ListCallAnalyticsJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCallAnalyticsJobsResponse::ListCallAnalyticsJobsResponse(
        const ListCallAnalyticsJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new ListCallAnalyticsJobsResponsePrivate(this), parent)
{
    setRequest(new ListCallAnalyticsJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCallAnalyticsJobsRequest * ListCallAnalyticsJobsResponse::request() const
{
    Q_D(const ListCallAnalyticsJobsResponse);
    return static_cast<const ListCallAnalyticsJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe ListCallAnalyticsJobs \a response.
 */
void ListCallAnalyticsJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCallAnalyticsJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::ListCallAnalyticsJobsResponsePrivate
 * \brief The ListCallAnalyticsJobsResponsePrivate class provides private implementation for ListCallAnalyticsJobsResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a ListCallAnalyticsJobsResponsePrivate object with public implementation \a q.
 */
ListCallAnalyticsJobsResponsePrivate::ListCallAnalyticsJobsResponsePrivate(
    ListCallAnalyticsJobsResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe ListCallAnalyticsJobs response element from \a xml.
 */
void ListCallAnalyticsJobsResponsePrivate::parseListCallAnalyticsJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCallAnalyticsJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
