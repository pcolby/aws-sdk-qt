// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecallanalyticsjobresponse.h"
#include "deletecallanalyticsjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::DeleteCallAnalyticsJobResponse
 * \brief The DeleteCallAnalyticsJobResponse class provides an interace for Transcribe DeleteCallAnalyticsJob responses.
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
 * \sa TranscribeClient::deleteCallAnalyticsJob
 */

/*!
 * Constructs a DeleteCallAnalyticsJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCallAnalyticsJobResponse::DeleteCallAnalyticsJobResponse(
        const DeleteCallAnalyticsJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new DeleteCallAnalyticsJobResponsePrivate(this), parent)
{
    setRequest(new DeleteCallAnalyticsJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCallAnalyticsJobRequest * DeleteCallAnalyticsJobResponse::request() const
{
    Q_D(const DeleteCallAnalyticsJobResponse);
    return static_cast<const DeleteCallAnalyticsJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe DeleteCallAnalyticsJob \a response.
 */
void DeleteCallAnalyticsJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCallAnalyticsJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::DeleteCallAnalyticsJobResponsePrivate
 * \brief The DeleteCallAnalyticsJobResponsePrivate class provides private implementation for DeleteCallAnalyticsJobResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a DeleteCallAnalyticsJobResponsePrivate object with public implementation \a q.
 */
DeleteCallAnalyticsJobResponsePrivate::DeleteCallAnalyticsJobResponsePrivate(
    DeleteCallAnalyticsJobResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe DeleteCallAnalyticsJob response element from \a xml.
 */
void DeleteCallAnalyticsJobResponsePrivate::parseDeleteCallAnalyticsJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCallAnalyticsJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
