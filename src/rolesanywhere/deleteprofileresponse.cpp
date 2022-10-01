// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprofileresponse.h"
#include "deleteprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RolesAnywhere {

/*!
 * \class QtAws::RolesAnywhere::DeleteProfileResponse
 * \brief The DeleteProfileResponse class provides an interace for RolesAnywhere DeleteProfile responses.
 *
 * \inmodule QtAwsRolesAnywhere
 *
 *  AWS Identity and Access Management Roles Anywhere provides a secure way for your workloads such as servers, containers,
 *  and applications running outside of AWS to obtain Temporary AWS credentials. Your workloads can use the same IAM
 *  policies and roles that you have configured with native AWS applications to access AWS resources. Using IAM Roles
 *  Anywhere will eliminate the need to manage long term credentials for workloads running outside of
 * 
 *  AWS>
 * 
 *  To use IAM Roles Anywhere customer workloads will need to use X.509 certificates issued by their Certificate Authority
 *  (CA) . The Certificate Authority (CA) needs to be registered with IAM Roles Anywhere as a trust anchor to establish
 *  trust between customer PKI and IAM Roles Anywhere. Customers who do not manage their own PKI system can use AWS
 *  Certificate Manager Private Certificate Authority (ACM PCA) to create a Certificate Authority and use that to establish
 *  trust with IAM Roles
 * 
 *  Anywher>
 * 
 *  This guide describes the IAM rolesanywhere operations that you can call programmatically. For general information about
 *  IAM Roles Anywhere see <a href="https://docs.aws.amazon.com/">https://docs.aws.amazon.com/</a>
 *
 * \sa RolesAnywhereClient::deleteProfile
 */

/*!
 * Constructs a DeleteProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProfileResponse::DeleteProfileResponse(
        const DeleteProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RolesAnywhereResponse(new DeleteProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProfileRequest * DeleteProfileResponse::request() const
{
    Q_D(const DeleteProfileResponse);
    return static_cast<const DeleteProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RolesAnywhere DeleteProfile \a response.
 */
void DeleteProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RolesAnywhere::DeleteProfileResponsePrivate
 * \brief The DeleteProfileResponsePrivate class provides private implementation for DeleteProfileResponse.
 * \internal
 *
 * \inmodule QtAwsRolesAnywhere
 */

/*!
 * Constructs a DeleteProfileResponsePrivate object with public implementation \a q.
 */
DeleteProfileResponsePrivate::DeleteProfileResponsePrivate(
    DeleteProfileResponse * const q) : RolesAnywhereResponsePrivate(q)
{

}

/*!
 * Parses a RolesAnywhere DeleteProfile response element from \a xml.
 */
void DeleteProfileResponsePrivate::parseDeleteProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RolesAnywhere
} // namespace QtAws
