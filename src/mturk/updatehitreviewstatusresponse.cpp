// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatehitreviewstatusresponse.h"
#include "updatehitreviewstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateHITReviewStatusResponse
 * \brief The UpdateHITReviewStatusResponse class provides an interace for MTurk UpdateHITReviewStatus responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateHITReviewStatus
 */

/*!
 * Constructs a UpdateHITReviewStatusResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateHITReviewStatusResponse::UpdateHITReviewStatusResponse(
        const UpdateHITReviewStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new UpdateHITReviewStatusResponsePrivate(this), parent)
{
    setRequest(new UpdateHITReviewStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateHITReviewStatusRequest * UpdateHITReviewStatusResponse::request() const
{
    Q_D(const UpdateHITReviewStatusResponse);
    return static_cast<const UpdateHITReviewStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk UpdateHITReviewStatus \a response.
 */
void UpdateHITReviewStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateHITReviewStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::UpdateHITReviewStatusResponsePrivate
 * \brief The UpdateHITReviewStatusResponsePrivate class provides private implementation for UpdateHITReviewStatusResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a UpdateHITReviewStatusResponsePrivate object with public implementation \a q.
 */
UpdateHITReviewStatusResponsePrivate::UpdateHITReviewStatusResponsePrivate(
    UpdateHITReviewStatusResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk UpdateHITReviewStatus response element from \a xml.
 */
void UpdateHITReviewStatusResponsePrivate::parseUpdateHITReviewStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateHITReviewStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
