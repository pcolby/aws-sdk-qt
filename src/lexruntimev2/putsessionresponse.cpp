// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putsessionresponse.h"
#include "putsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::PutSessionResponse
 * \brief The PutSessionResponse class provides an interace for LexRuntimeV2 PutSession responses.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::putSession
 */

/*!
 * Constructs a PutSessionResponse object for \a reply to \a request, with parent \a parent.
 */
PutSessionResponse::PutSessionResponse(
        const PutSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeV2Response(new PutSessionResponsePrivate(this), parent)
{
    setRequest(new PutSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutSessionRequest * PutSessionResponse::request() const
{
    Q_D(const PutSessionResponse);
    return static_cast<const PutSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexRuntimeV2 PutSession \a response.
 */
void PutSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntimeV2::PutSessionResponsePrivate
 * \brief The PutSessionResponsePrivate class provides private implementation for PutSessionResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a PutSessionResponsePrivate object with public implementation \a q.
 */
PutSessionResponsePrivate::PutSessionResponsePrivate(
    PutSessionResponse * const q) : LexRuntimeV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntimeV2 PutSession response element from \a xml.
 */
void PutSessionResponsePrivate::parsePutSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntimeV2
} // namespace QtAws
