// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprofilesresponse.h"
#include "listprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RolesAnywhere {

/*!
 * \class QtAws::RolesAnywhere::ListProfilesResponse
 * \brief The ListProfilesResponse class provides an interace for RolesAnywhere ListProfiles responses.
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
 * \sa RolesAnywhereClient::listProfiles
 */

/*!
 * Constructs a ListProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListProfilesResponse::ListProfilesResponse(
        const ListProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RolesAnywhereResponse(new ListProfilesResponsePrivate(this), parent)
{
    setRequest(new ListProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProfilesRequest * ListProfilesResponse::request() const
{
    Q_D(const ListProfilesResponse);
    return static_cast<const ListProfilesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RolesAnywhere ListProfiles \a response.
 */
void ListProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RolesAnywhere::ListProfilesResponsePrivate
 * \brief The ListProfilesResponsePrivate class provides private implementation for ListProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsRolesAnywhere
 */

/*!
 * Constructs a ListProfilesResponsePrivate object with public implementation \a q.
 */
ListProfilesResponsePrivate::ListProfilesResponsePrivate(
    ListProfilesResponse * const q) : RolesAnywhereResponsePrivate(q)
{

}

/*!
 * Parses a RolesAnywhere ListProfiles response element from \a xml.
 */
void ListProfilesResponsePrivate::parseListProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RolesAnywhere
} // namespace QtAws
