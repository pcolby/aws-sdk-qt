// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsessionresponse.h"
#include "getsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::GetSessionResponse
 * \brief The GetSessionResponse class provides an interace for LexRuntimeV2 GetSession responses.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::getSession
 */

/*!
 * Constructs a GetSessionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSessionResponse::GetSessionResponse(
        const GetSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeV2Response(new GetSessionResponsePrivate(this), parent)
{
    setRequest(new GetSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSessionRequest * GetSessionResponse::request() const
{
    Q_D(const GetSessionResponse);
    return static_cast<const GetSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexRuntimeV2 GetSession \a response.
 */
void GetSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexRuntimeV2::GetSessionResponsePrivate
 * \brief The GetSessionResponsePrivate class provides private implementation for GetSessionResponse.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a GetSessionResponsePrivate object with public implementation \a q.
 */
GetSessionResponsePrivate::GetSessionResponsePrivate(
    GetSessionResponse * const q) : LexRuntimeV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexRuntimeV2 GetSession response element from \a xml.
 */
void GetSessionResponsePrivate::parseGetSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexRuntimeV2
} // namespace QtAws
