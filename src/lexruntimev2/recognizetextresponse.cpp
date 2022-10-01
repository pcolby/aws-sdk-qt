// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "recognizetextresponse.h"
#include "recognizetextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::RecognizeTextResponse
 * \brief The RecognizeTextResponse class provides an interace for LexRuntimeV2 RecognizeText responses.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::recognizeText
 */

/*!
 * Constructs a RecognizeTextResponse object for \a reply to \a request, with parent \a parent.
 */
RecognizeTextResponse::RecognizeTextResponse(
        const RecognizeTextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeV2Response(new RecognizeTextResponsePrivate(this), parent)
{
    setRequest(new RecognizeTextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RecognizeTextRequest * RecognizeTextResponse::request() const
{
    Q_D(const RecognizeTextResponse);
    return static_cast<const RecognizeTextRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexRuntimeV2 RecognizeText \a response.
 */
void RecognizeTextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RecognizeTextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntimeV2::RecognizeTextResponsePrivate
 * \brief The RecognizeTextResponsePrivate class provides private implementation for RecognizeTextResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a RecognizeTextResponsePrivate object with public implementation \a q.
 */
RecognizeTextResponsePrivate::RecognizeTextResponsePrivate(
    RecognizeTextResponse * const q) : LexRuntimeV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntimeV2 RecognizeText response element from \a xml.
 */
void RecognizeTextResponsePrivate::parseRecognizeTextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RecognizeTextResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntimeV2
} // namespace QtAws
