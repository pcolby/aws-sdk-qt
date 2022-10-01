// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlftagresponse.h"
#include "getlftagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetLFTagResponse
 * \brief The GetLFTagResponse class provides an interace for LakeFormation GetLFTag responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getLFTag
 */

/*!
 * Constructs a GetLFTagResponse object for \a reply to \a request, with parent \a parent.
 */
GetLFTagResponse::GetLFTagResponse(
        const GetLFTagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetLFTagResponsePrivate(this), parent)
{
    setRequest(new GetLFTagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLFTagRequest * GetLFTagResponse::request() const
{
    Q_D(const GetLFTagResponse);
    return static_cast<const GetLFTagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetLFTag \a response.
 */
void GetLFTagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLFTagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetLFTagResponsePrivate
 * \brief The GetLFTagResponsePrivate class provides private implementation for GetLFTagResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetLFTagResponsePrivate object with public implementation \a q.
 */
GetLFTagResponsePrivate::GetLFTagResponsePrivate(
    GetLFTagResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetLFTag response element from \a xml.
 */
void GetLFTagResponsePrivate::parseGetLFTagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLFTagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
