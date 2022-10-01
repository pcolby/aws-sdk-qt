// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoptexttranslationjobresponse.h"
#include "stoptexttranslationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::StopTextTranslationJobResponse
 * \brief The StopTextTranslationJobResponse class provides an interace for Translate StopTextTranslationJob responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::stopTextTranslationJob
 */

/*!
 * Constructs a StopTextTranslationJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopTextTranslationJobResponse::StopTextTranslationJobResponse(
        const StopTextTranslationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new StopTextTranslationJobResponsePrivate(this), parent)
{
    setRequest(new StopTextTranslationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopTextTranslationJobRequest * StopTextTranslationJobResponse::request() const
{
    Q_D(const StopTextTranslationJobResponse);
    return static_cast<const StopTextTranslationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate StopTextTranslationJob \a response.
 */
void StopTextTranslationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopTextTranslationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::StopTextTranslationJobResponsePrivate
 * \brief The StopTextTranslationJobResponsePrivate class provides private implementation for StopTextTranslationJobResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a StopTextTranslationJobResponsePrivate object with public implementation \a q.
 */
StopTextTranslationJobResponsePrivate::StopTextTranslationJobResponsePrivate(
    StopTextTranslationJobResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate StopTextTranslationJob response element from \a xml.
 */
void StopTextTranslationJobResponsePrivate::parseStopTextTranslationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopTextTranslationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
