/*
    Copyright 2013-2021 Paul Colby

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

#include "updateshareinvitationresponse.h"
#include "updateshareinvitationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpdateShareInvitationResponse
 * \brief The UpdateShareInvitationResponse class provides an interace for WellArchitected UpdateShareInvitation responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>AWS Well-Architected Tool</fullname>
 * 
 *  This is the <i>AWS Well-Architected Tool API Reference</i>. The AWS Well-Architected Tool API provides programmatic
 *  access to the <a href="http://aws.amazon.com/well-architected-tool">AWS Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">AWS Management Console</a>. For information about the AWS
 *  Well-Architected Tool, see the <a href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">AWS
 *  Well-Architected Tool User
 *
 * \sa WellArchitectedClient::updateShareInvitation
 */

/*!
 * Constructs a UpdateShareInvitationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateShareInvitationResponse::UpdateShareInvitationResponse(
        const UpdateShareInvitationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new UpdateShareInvitationResponsePrivate(this), parent)
{
    setRequest(new UpdateShareInvitationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateShareInvitationRequest * UpdateShareInvitationResponse::request() const
{
    return static_cast<const UpdateShareInvitationRequest *>(WellArchitectedResponse::request());
}

/*!
 * \reimp
 * Parses a successful WellArchitected UpdateShareInvitation \a response.
 */
void UpdateShareInvitationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateShareInvitationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::UpdateShareInvitationResponsePrivate
 * \brief The UpdateShareInvitationResponsePrivate class provides private implementation for UpdateShareInvitationResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpdateShareInvitationResponsePrivate object with public implementation \a q.
 */
UpdateShareInvitationResponsePrivate::UpdateShareInvitationResponsePrivate(
    UpdateShareInvitationResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected UpdateShareInvitation response element from \a xml.
 */
void UpdateShareInvitationResponsePrivate::parseUpdateShareInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateShareInvitationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
