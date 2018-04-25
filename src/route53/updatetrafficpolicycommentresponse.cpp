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

#include "updatetrafficpolicycommentresponse.h"
#include "updatetrafficpolicycommentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::UpdateTrafficPolicyCommentResponse
 * \brief The UpdateTrafficPolicyCommentResponse class provides an interace for Route53 UpdateTrafficPolicyComment responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::updateTrafficPolicyComment
 */

/*!
 * Constructs a UpdateTrafficPolicyCommentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTrafficPolicyCommentResponse::UpdateTrafficPolicyCommentResponse(
        const UpdateTrafficPolicyCommentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new UpdateTrafficPolicyCommentResponsePrivate(this), parent)
{
    setRequest(new UpdateTrafficPolicyCommentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTrafficPolicyCommentRequest * UpdateTrafficPolicyCommentResponse::request() const
{
    Q_D(const UpdateTrafficPolicyCommentResponse);
    return static_cast<const UpdateTrafficPolicyCommentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 UpdateTrafficPolicyComment \a response.
 */
void UpdateTrafficPolicyCommentResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateTrafficPolicyCommentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::UpdateTrafficPolicyCommentResponsePrivate
 * \brief The UpdateTrafficPolicyCommentResponsePrivate class provides private implementation for UpdateTrafficPolicyCommentResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a UpdateTrafficPolicyCommentResponsePrivate object with public implementation \a q.
 */
UpdateTrafficPolicyCommentResponsePrivate::UpdateTrafficPolicyCommentResponsePrivate(
    UpdateTrafficPolicyCommentResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 UpdateTrafficPolicyComment response element from \a xml.
 */
void UpdateTrafficPolicyCommentResponsePrivate::parseUpdateTrafficPolicyCommentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTrafficPolicyCommentResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
