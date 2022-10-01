// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "recognizeutteranceresponse.h"
#include "recognizeutteranceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::RecognizeUtteranceResponse
 * \brief The RecognizeUtteranceResponse class provides an interace for LexRuntimeV2 RecognizeUtterance responses.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::recognizeUtterance
 */

/*!
 * Constructs a RecognizeUtteranceResponse object for \a reply to \a request, with parent \a parent.
 */
RecognizeUtteranceResponse::RecognizeUtteranceResponse(
        const RecognizeUtteranceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeV2Response(new RecognizeUtteranceResponsePrivate(this), parent)
{
    setRequest(new RecognizeUtteranceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RecognizeUtteranceRequest * RecognizeUtteranceResponse::request() const
{
    Q_D(const RecognizeUtteranceResponse);
    return static_cast<const RecognizeUtteranceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexRuntimeV2 RecognizeUtterance \a response.
 */
void RecognizeUtteranceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RecognizeUtteranceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntimeV2::RecognizeUtteranceResponsePrivate
 * \brief The RecognizeUtteranceResponsePrivate class provides private implementation for RecognizeUtteranceResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a RecognizeUtteranceResponsePrivate object with public implementation \a q.
 */
RecognizeUtteranceResponsePrivate::RecognizeUtteranceResponsePrivate(
    RecognizeUtteranceResponse * const q) : LexRuntimeV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntimeV2 RecognizeUtterance response element from \a xml.
 */
void RecognizeUtteranceResponsePrivate::parseRecognizeUtteranceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RecognizeUtteranceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntimeV2
} // namespace QtAws
