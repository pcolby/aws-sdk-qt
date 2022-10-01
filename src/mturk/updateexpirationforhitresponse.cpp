// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateexpirationforhitresponse.h"
#include "updateexpirationforhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateExpirationForHITResponse
 * \brief The UpdateExpirationForHITResponse class provides an interace for MTurk UpdateExpirationForHIT responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateExpirationForHIT
 */

/*!
 * Constructs a UpdateExpirationForHITResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateExpirationForHITResponse::UpdateExpirationForHITResponse(
        const UpdateExpirationForHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new UpdateExpirationForHITResponsePrivate(this), parent)
{
    setRequest(new UpdateExpirationForHITRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateExpirationForHITRequest * UpdateExpirationForHITResponse::request() const
{
    Q_D(const UpdateExpirationForHITResponse);
    return static_cast<const UpdateExpirationForHITRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk UpdateExpirationForHIT \a response.
 */
void UpdateExpirationForHITResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateExpirationForHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::UpdateExpirationForHITResponsePrivate
 * \brief The UpdateExpirationForHITResponsePrivate class provides private implementation for UpdateExpirationForHITResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a UpdateExpirationForHITResponsePrivate object with public implementation \a q.
 */
UpdateExpirationForHITResponsePrivate::UpdateExpirationForHITResponsePrivate(
    UpdateExpirationForHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk UpdateExpirationForHIT response element from \a xml.
 */
void UpdateExpirationForHITResponsePrivate::parseUpdateExpirationForHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateExpirationForHITResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
