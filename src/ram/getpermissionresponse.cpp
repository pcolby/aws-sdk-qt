// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpermissionresponse.h"
#include "getpermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::GetPermissionResponse
 * \brief The GetPermissionResponse class provides an interace for Ram GetPermission responses.
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
 * \sa RamClient::getPermission
 */

/*!
 * Constructs a GetPermissionResponse object for \a reply to \a request, with parent \a parent.
 */
GetPermissionResponse::GetPermissionResponse(
        const GetPermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new GetPermissionResponsePrivate(this), parent)
{
    setRequest(new GetPermissionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPermissionRequest * GetPermissionResponse::request() const
{
    Q_D(const GetPermissionResponse);
    return static_cast<const GetPermissionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram GetPermission \a response.
 */
void GetPermissionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::GetPermissionResponsePrivate
 * \brief The GetPermissionResponsePrivate class provides private implementation for GetPermissionResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a GetPermissionResponsePrivate object with public implementation \a q.
 */
GetPermissionResponsePrivate::GetPermissionResponsePrivate(
    GetPermissionResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram GetPermission response element from \a xml.
 */
void GetPermissionResponsePrivate::parseGetPermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPermissionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
