// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getqualificationscoreresponse.h"
#include "getqualificationscoreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetQualificationScoreResponse
 * \brief The GetQualificationScoreResponse class provides an interace for MTurk GetQualificationScore responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getQualificationScore
 */

/*!
 * Constructs a GetQualificationScoreResponse object for \a reply to \a request, with parent \a parent.
 */
GetQualificationScoreResponse::GetQualificationScoreResponse(
        const GetQualificationScoreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetQualificationScoreResponsePrivate(this), parent)
{
    setRequest(new GetQualificationScoreRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQualificationScoreRequest * GetQualificationScoreResponse::request() const
{
    Q_D(const GetQualificationScoreResponse);
    return static_cast<const GetQualificationScoreRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk GetQualificationScore \a response.
 */
void GetQualificationScoreResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQualificationScoreResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::GetQualificationScoreResponsePrivate
 * \brief The GetQualificationScoreResponsePrivate class provides private implementation for GetQualificationScoreResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetQualificationScoreResponsePrivate object with public implementation \a q.
 */
GetQualificationScoreResponsePrivate::GetQualificationScoreResponsePrivate(
    GetQualificationScoreResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk GetQualificationScore response element from \a xml.
 */
void GetQualificationScoreResponsePrivate::parseGetQualificationScoreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQualificationScoreResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
