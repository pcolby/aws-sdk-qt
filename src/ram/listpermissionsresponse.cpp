// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpermissionsresponse.h"
#include "listpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::ListPermissionsResponse
 * \brief The ListPermissionsResponse class provides an interace for Ram ListPermissions responses.
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
 * \sa RamClient::listPermissions
 */

/*!
 * Constructs a ListPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPermissionsResponse::ListPermissionsResponse(
        const ListPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new ListPermissionsResponsePrivate(this), parent)
{
    setRequest(new ListPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPermissionsRequest * ListPermissionsResponse::request() const
{
    Q_D(const ListPermissionsResponse);
    return static_cast<const ListPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram ListPermissions \a response.
 */
void ListPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::ListPermissionsResponsePrivate
 * \brief The ListPermissionsResponsePrivate class provides private implementation for ListPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a ListPermissionsResponsePrivate object with public implementation \a q.
 */
ListPermissionsResponsePrivate::ListPermissionsResponsePrivate(
    ListPermissionsResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram ListPermissions response element from \a xml.
 */
void ListPermissionsResponsePrivate::parseListPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
