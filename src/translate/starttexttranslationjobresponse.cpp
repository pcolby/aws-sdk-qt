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

#include "starttexttranslationjobresponse.h"
#include "starttexttranslationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::StartTextTranslationJobResponse
 * \brief The StartTextTranslationJobResponse class provides an interace for Translate StartTextTranslationJob responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::startTextTranslationJob
 */

/*!
 * Constructs a StartTextTranslationJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartTextTranslationJobResponse::StartTextTranslationJobResponse(
        const StartTextTranslationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new StartTextTranslationJobResponsePrivate(this), parent)
{
    setRequest(new StartTextTranslationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTextTranslationJobRequest * StartTextTranslationJobResponse::request() const
{
    Q_D(const StartTextTranslationJobResponse);
    return static_cast<const StartTextTranslationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate StartTextTranslationJob \a response.
 */
void StartTextTranslationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartTextTranslationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::StartTextTranslationJobResponsePrivate
 * \brief The StartTextTranslationJobResponsePrivate class provides private implementation for StartTextTranslationJobResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a StartTextTranslationJobResponsePrivate object with public implementation \a q.
 */
StartTextTranslationJobResponsePrivate::StartTextTranslationJobResponsePrivate(
    StartTextTranslationJobResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate StartTextTranslationJob response element from \a xml.
 */
void StartTextTranslationJobResponsePrivate::parseStartTextTranslationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTextTranslationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
