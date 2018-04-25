/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    Q_D(UpdateHostedZoneCommentResponse);
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
    /// @todo
}

} // namespace Route53
} // namespace QtAws
