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
    return static_cast<const StopTextTranslationJobRequest *>(TranslateResponse::request());
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
