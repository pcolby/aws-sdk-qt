// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enablesharingwithawsorganizationresponse.h"
#include "enablesharingwithawsorganizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::EnableSharingWithAwsOrganizationResponse
 * \brief The EnableSharingWithAwsOrganizationResponse class provides an interace for Ram EnableSharingWithAwsOrganization responses.
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
 * \sa RamClient::enableSharingWithAwsOrganization
 */

/*!
 * Constructs a EnableSharingWithAwsOrganizationResponse object for \a reply to \a request, with parent \a parent.
 */
EnableSharingWithAwsOrganizationResponse::EnableSharingWithAwsOrganizationResponse(
        const EnableSharingWithAwsOrganizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new EnableSharingWithAwsOrganizationResponsePrivate(this), parent)
{
    setRequest(new EnableSharingWithAwsOrganizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableSharingWithAwsOrganizationRequest * EnableSharingWithAwsOrganizationResponse::request() const
{
    Q_D(const EnableSharingWithAwsOrganizationResponse);
    return static_cast<const EnableSharingWithAwsOrganizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram EnableSharingWithAwsOrganization \a response.
 */
void EnableSharingWithAwsOrganizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableSharingWithAwsOrganizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::EnableSharingWithAwsOrganizationResponsePrivate
 * \brief The EnableSharingWithAwsOrganizationResponsePrivate class provides private implementation for EnableSharingWithAwsOrganizationResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a EnableSharingWithAwsOrganizationResponsePrivate object with public implementation \a q.
 */
EnableSharingWithAwsOrganizationResponsePrivate::EnableSharingWithAwsOrganizationResponsePrivate(
    EnableSharingWithAwsOrganizationResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram EnableSharingWithAwsOrganization response element from \a xml.
 */
void EnableSharingWithAwsOrganizationResponsePrivate::parseEnableSharingWithAwsOrganizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableSharingWithAwsOrganizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
