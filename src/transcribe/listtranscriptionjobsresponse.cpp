// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtranscriptionjobsresponse.h"
#include "listtranscriptionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::ListTranscriptionJobsResponse
 * \brief The ListTranscriptionJobsResponse class provides an interace for Transcribe ListTranscriptionJobs responses.
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
 * \sa TranscribeClient::listTranscriptionJobs
 */

/*!
 * Constructs a ListTranscriptionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTranscriptionJobsResponse::ListTranscriptionJobsResponse(
        const ListTranscriptionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new ListTranscriptionJobsResponsePrivate(this), parent)
{
    setRequest(new ListTranscriptionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTranscriptionJobsRequest * ListTranscriptionJobsResponse::request() const
{
    Q_D(const ListTranscriptionJobsResponse);
    return static_cast<const ListTranscriptionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe ListTranscriptionJobs \a response.
 */
void ListTranscriptionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTranscriptionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::ListTranscriptionJobsResponsePrivate
 * \brief The ListTranscriptionJobsResponsePrivate class provides private implementation for ListTranscriptionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a ListTranscriptionJobsResponsePrivate object with public implementation \a q.
 */
ListTranscriptionJobsResponsePrivate::ListTranscriptionJobsResponsePrivate(
    ListTranscriptionJobsResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe ListTranscriptionJobs response element from \a xml.
 */
void ListTranscriptionJobsResponsePrivate::parseListTranscriptionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTranscriptionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
