// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Provides translation between one source language and another of the same set of
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
