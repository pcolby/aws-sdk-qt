// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptresourceshareinvitationresponse.h"
#include "acceptresourceshareinvitationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::AcceptResourceShareInvitationResponse
 * \brief The AcceptResourceShareInvitationResponse class provides an interace for Ram AcceptResourceShareInvitation responses.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::acceptResourceShareInvitation
 */

/*!
 * Constructs a AcceptResourceShareInvitationResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptResourceShareInvitationResponse::AcceptResourceShareInvitationResponse(
        const AcceptResourceShareInvitationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new AcceptResourceShareInvitationResponsePrivate(this), parent)
{
    setRequest(new AcceptResourceShareInvitationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptResourceShareInvitationRequest * AcceptResourceShareInvitationResponse::request() const
{
    Q_D(const AcceptResourceShareInvitationResponse);
    return static_cast<const AcceptResourceShareInvitationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram AcceptResourceShareInvitation \a response.
 */
void AcceptResourceShareInvitationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptResourceShareInvitationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::AcceptResourceShareInvitationResponsePrivate
 * \brief The AcceptResourceShareInvitationResponsePrivate class provides private implementation for AcceptResourceShareInvitationResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a AcceptResourceShareInvitationResponsePrivate object with public implementation \a q.
 */
AcceptResourceShareInvitationResponsePrivate::AcceptResourceShareInvitationResponsePrivate(
    AcceptResourceShareInvitationResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram AcceptResourceShareInvitation response element from \a xml.
 */
void AcceptResourceShareInvitationResponsePrivate::parseAcceptResourceShareInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptResourceShareInvitationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
