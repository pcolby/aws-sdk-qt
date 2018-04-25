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

#include "acceptinvitationresponse.h"
#include "acceptinvitationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::AcceptInvitationResponse
 * \brief The AcceptInvitationResponse class provides an interace for GuardDuty AcceptInvitation responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::acceptInvitation
 */

/*!
 * Constructs a AcceptInvitationResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptInvitationResponse::AcceptInvitationResponse(
        const AcceptInvitationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new AcceptInvitationResponsePrivate(this), parent)
{
    setRequest(new AcceptInvitationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptInvitationRequest * AcceptInvitationResponse::request() const
{
    Q_D(const AcceptInvitationResponse);
    return static_cast<const AcceptInvitationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty AcceptInvitation \a response.
 */
void AcceptInvitationResponse::parseSuccess(QIODevice &response)
{
    Q_D(AcceptInvitationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::AcceptInvitationResponsePrivate
 * \brief The AcceptInvitationResponsePrivate class provides private implementation for AcceptInvitationResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a AcceptInvitationResponsePrivate object with public implementation \a q.
 */
AcceptInvitationResponsePrivate::AcceptInvitationResponsePrivate(
    AcceptInvitationResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty AcceptInvitation response element from \a xml.
 */
void AcceptInvitationResponsePrivate::parseAcceptInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptInvitationResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
