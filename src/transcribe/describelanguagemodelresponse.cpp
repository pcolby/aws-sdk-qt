// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelanguagemodelresponse.h"
#include "describelanguagemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::DescribeLanguageModelResponse
 * \brief The DescribeLanguageModelResponse class provides an interace for Transcribe DescribeLanguageModel responses.
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
 * \sa TranscribeClient::describeLanguageModel
 */

/*!
 * Constructs a DescribeLanguageModelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLanguageModelResponse::DescribeLanguageModelResponse(
        const DescribeLanguageModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeResponse(new DescribeLanguageModelResponsePrivate(this), parent)
{
    setRequest(new DescribeLanguageModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLanguageModelRequest * DescribeLanguageModelResponse::request() const
{
    Q_D(const DescribeLanguageModelResponse);
    return static_cast<const DescribeLanguageModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transcribe DescribeLanguageModel \a response.
 */
void DescribeLanguageModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLanguageModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transcribe::DescribeLanguageModelResponsePrivate
 * \brief The DescribeLanguageModelResponsePrivate class provides private implementation for DescribeLanguageModelResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a DescribeLanguageModelResponsePrivate object with public implementation \a q.
 */
DescribeLanguageModelResponsePrivate::DescribeLanguageModelResponsePrivate(
    DescribeLanguageModelResponse * const q) : TranscribeResponsePrivate(q)
{

}

/*!
 * Parses a Transcribe DescribeLanguageModel response element from \a xml.
 */
void DescribeLanguageModelResponsePrivate::parseDescribeLanguageModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLanguageModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transcribe
} // namespace QtAws
