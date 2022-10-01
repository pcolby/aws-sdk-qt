// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpermissionsresponse.h"
#include "listpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListPermissionsResponse
 * \brief The ListPermissionsResponse class provides an interace for LakeFormation ListPermissions responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listPermissions
 */

/*!
 * Constructs a ListPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPermissionsResponse::ListPermissionsResponse(
        const ListPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new ListPermissionsResponsePrivate(this), parent)
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
 * Parses a successful LakeFormation ListPermissions \a response.
 */
void ListPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::ListPermissionsResponsePrivate
 * \brief The ListPermissionsResponsePrivate class provides private implementation for ListPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListPermissionsResponsePrivate object with public implementation \a q.
 */
ListPermissionsResponsePrivate::ListPermissionsResponsePrivate(
    ListPermissionsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation ListPermissions response element from \a xml.
 */
void ListPermissionsResponsePrivate::parseListPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
