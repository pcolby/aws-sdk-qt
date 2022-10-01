// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcallanalyticsjobresponse.h"
#include "getcallanalyticsjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::GetCallAnalyticsJobResponse
 * \brief The GetCallAnalyticsJobResponse class provides an interace for Transcribe GetCallAnalyticsJob responses.
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
 * \sa TranscribeClient::getCallAnalyticsJob
 */

/*!
 * Constructs a GetCallAnalyticsJobResponse object for \a reply to \a request, with parent \a parent.
 */
GetCallAnalyticsJobResponse::GetCallAnalyticsJobResponse(
        const GetCallAnalyticsJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new GetCallAnalyticsJobResponsePrivate(this), parent)
{
    setRequest(new GetCallAnalyticsJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCallAnalyticsJobRequest * GetCallAnalyticsJobResponse::request() const
{
    Q_D(const GetCallAnalyticsJobResponse);
    return static_cast<const GetCallAnalyticsJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe GetCallAnalyticsJob \a response.
 */
void GetCallAnalyticsJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCallAnalyticsJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::GetCallAnalyticsJobResponsePrivate
 * \brief The GetCallAnalyticsJobResponsePrivate class provides private implementation for GetCallAnalyticsJobResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a GetCallAnalyticsJobResponsePrivate object with public implementation \a q.
 */
GetCallAnalyticsJobResponsePrivate::GetCallAnalyticsJobResponsePrivate(
    GetCallAnalyticsJobResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe GetCallAnalyticsJob response element from \a xml.
 */
void GetCallAnalyticsJobResponsePrivate::parseGetCallAnalyticsJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCallAnalyticsJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
