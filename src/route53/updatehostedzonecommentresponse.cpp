// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatehostedzonecommentresponse.h"
#include "updatehostedzonecommentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::UpdateHostedZoneCommentResponse
 * \brief The UpdateHostedZoneCommentResponse class provides an interace for Route53 UpdateHostedZoneComment responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::updateHostedZoneComment
 */

/*!
 * Constructs a UpdateHostedZoneCommentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateHostedZoneCommentResponse::UpdateHostedZoneCommentResponse(
        const UpdateHostedZoneCommentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new UpdateHostedZoneCommentResponsePrivate(this), parent)
{
    setRequest(new UpdateHostedZoneCommentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateHostedZoneCommentRequest * UpdateHostedZoneCommentResponse::request() const
{
    Q_D(const UpdateHostedZoneCommentResponse);
    return static_cast<const UpdateHostedZoneCommentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 UpdateHostedZoneComment \a response.
 */
void UpdateHostedZoneCommentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateHostedZoneCommentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::UpdateHostedZoneCommentResponsePrivate
 * \brief The UpdateHostedZoneCommentResponsePrivate class provides private implementation for UpdateHostedZoneCommentResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a UpdateHostedZoneCommentResponsePrivate object with public implementation \a q.
 */
UpdateHostedZoneCommentResponsePrivate::UpdateHostedZoneCommentResponsePrivate(
    UpdateHostedZoneCommentResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 UpdateHostedZoneComment response element from \a xml.
 */
void UpdateHostedZoneCommentResponsePrivate::parseUpdateHostedZoneCommentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateHostedZoneCommentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
