// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettableobjectsresponse.h"
#include "gettableobjectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetTableObjectsResponse
 * \brief The GetTableObjectsResponse class provides an interace for LakeFormation GetTableObjects responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getTableObjects
 */

/*!
 * Constructs a GetTableObjectsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTableObjectsResponse::GetTableObjectsResponse(
        const GetTableObjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetTableObjectsResponsePrivate(this), parent)
{
    setRequest(new GetTableObjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTableObjectsRequest * GetTableObjectsResponse::request() const
{
    Q_D(const GetTableObjectsResponse);
    return static_cast<const GetTableObjectsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetTableObjects \a response.
 */
void GetTableObjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTableObjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetTableObjectsResponsePrivate
 * \brief The GetTableObjectsResponsePrivate class provides private implementation for GetTableObjectsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetTableObjectsResponsePrivate object with public implementation \a q.
 */
GetTableObjectsResponsePrivate::GetTableObjectsResponsePrivate(
    GetTableObjectsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetTableObjects response element from \a xml.
 */
void GetTableObjectsResponsePrivate::parseGetTableObjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTableObjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
