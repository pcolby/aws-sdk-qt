// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethitresponse.h"
#include "gethitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetHITResponse
 * \brief The GetHITResponse class provides an interace for MTurk GetHIT responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getHIT
 */

/*!
 * Constructs a GetHITResponse object for \a reply to \a request, with parent \a parent.
 */
GetHITResponse::GetHITResponse(
        const GetHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetHITResponsePrivate(this), parent)
{
    setRequest(new GetHITRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHITRequest * GetHITResponse::request() const
{
    Q_D(const GetHITResponse);
    return static_cast<const GetHITRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk GetHIT \a response.
 */
void GetHITResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::GetHITResponsePrivate
 * \brief The GetHITResponsePrivate class provides private implementation for GetHITResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetHITResponsePrivate object with public implementation \a q.
 */
GetHITResponsePrivate::GetHITResponsePrivate(
    GetHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk GetHIT response element from \a xml.
 */
void GetHITResponsePrivate::parseGetHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHITResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
