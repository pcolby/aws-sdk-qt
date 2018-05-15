/*
    Copyright 2013-2018 Paul Colby

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

#include "translatetextresponse.h"
#include "translatetextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::TranslateTextResponse
 * \brief The TranslateTextResponse class provides an interace for Translate TranslateText responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between English and one of six languages, or between one of the six languages and
 *
 * \sa TranslateClient::translateText
 */

/*!
 * Constructs a TranslateTextResponse object for \a reply to \a request, with parent \a parent.
 */
TranslateTextResponse::TranslateTextResponse(
        const TranslateTextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new TranslateTextResponsePrivate(this), parent)
{
    setRequest(new TranslateTextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TranslateTextRequest * TranslateTextResponse::request() const
{
    Q_D(const TranslateTextResponse);
    return static_cast<const TranslateTextRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate TranslateText \a response.
 */
void TranslateTextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TranslateTextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::TranslateTextResponsePrivate
 * \brief The TranslateTextResponsePrivate class provides private implementation for TranslateTextResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a TranslateTextResponsePrivate object with public implementation \a q.
 */
TranslateTextResponsePrivate::TranslateTextResponsePrivate(
    TranslateTextResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate TranslateText response element from \a xml.
 */
void TranslateTextResponsePrivate::parseTranslateTextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TranslateTextResponse"));
    /// @todo
}

} // namespace Translate
} // namespace QtAws
