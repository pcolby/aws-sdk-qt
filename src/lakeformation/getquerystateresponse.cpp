// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getquerystateresponse.h"
#include "getquerystateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetQueryStateResponse
 * \brief The GetQueryStateResponse class provides an interace for LakeFormation GetQueryState responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getQueryState
 */

/*!
 * Constructs a GetQueryStateResponse object for \a reply to \a request, with parent \a parent.
 */
GetQueryStateResponse::GetQueryStateResponse(
        const GetQueryStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetQueryStateResponsePrivate(this), parent)
{
    setRequest(new GetQueryStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQueryStateRequest * GetQueryStateResponse::request() const
{
    Q_D(const GetQueryStateResponse);
    return static_cast<const GetQueryStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetQueryState \a response.
 */
void GetQueryStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQueryStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetQueryStateResponsePrivate
 * \brief The GetQueryStateResponsePrivate class provides private implementation for GetQueryStateResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetQueryStateResponsePrivate object with public implementation \a q.
 */
GetQueryStateResponsePrivate::GetQueryStateResponsePrivate(
    GetQueryStateResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetQueryState response element from \a xml.
 */
void GetQueryStateResponsePrivate::parseGetQueryStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueryStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
