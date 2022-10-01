// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourceshareinvitationsresponse.h"
#include "getresourceshareinvitationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::GetResourceShareInvitationsResponse
 * \brief The GetResourceShareInvitationsResponse class provides an interace for Ram GetResourceShareInvitations responses.
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
 * \sa RamClient::getResourceShareInvitations
 */

/*!
 * Constructs a GetResourceShareInvitationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceShareInvitationsResponse::GetResourceShareInvitationsResponse(
        const GetResourceShareInvitationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new GetResourceShareInvitationsResponsePrivate(this), parent)
{
    setRequest(new GetResourceShareInvitationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceShareInvitationsRequest * GetResourceShareInvitationsResponse::request() const
{
    Q_D(const GetResourceShareInvitationsResponse);
    return static_cast<const GetResourceShareInvitationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram GetResourceShareInvitations \a response.
 */
void GetResourceShareInvitationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceShareInvitationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::GetResourceShareInvitationsResponsePrivate
 * \brief The GetResourceShareInvitationsResponsePrivate class provides private implementation for GetResourceShareInvitationsResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a GetResourceShareInvitationsResponsePrivate object with public implementation \a q.
 */
GetResourceShareInvitationsResponsePrivate::GetResourceShareInvitationsResponsePrivate(
    GetResourceShareInvitationsResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram GetResourceShareInvitations response element from \a xml.
 */
void GetResourceShareInvitationsResponsePrivate::parseGetResourceShareInvitationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceShareInvitationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
