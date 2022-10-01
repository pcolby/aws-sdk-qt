// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
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
    Q_D(const UpdateShareInvitationResponse);
    return static_cast<const UpdateShareInvitationRequest *>(d->request);
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
