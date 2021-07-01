/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getresourcelftagsresponse.h"
#include "getresourcelftagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetResourceLFTagsResponse
 * \brief The GetResourceLFTagsResponse class provides an interace for LakeFormation GetResourceLFTags responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::getResourceLFTags
 */

/*!
 * Constructs a GetResourceLFTagsResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceLFTagsResponse::GetResourceLFTagsResponse(
        const GetResourceLFTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new GetResourceLFTagsResponsePrivate(this), parent)
{
    setRequest(new GetResourceLFTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceLFTagsRequest * GetResourceLFTagsResponse::request() const
{
    Q_D(const GetResourceLFTagsResponse);
    return static_cast<const GetResourceLFTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation GetResourceLFTags \a response.
 */
void GetResourceLFTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceLFTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::GetResourceLFTagsResponsePrivate
 * \brief The GetResourceLFTagsResponsePrivate class provides private implementation for GetResourceLFTagsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetResourceLFTagsResponsePrivate object with public implementation \a q.
 */
GetResourceLFTagsResponsePrivate::GetResourceLFTagsResponsePrivate(
    GetResourceLFTagsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation GetResourceLFTags response element from \a xml.
 */
void GetResourceLFTagsResponsePrivate::parseGetResourceLFTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceLFTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
