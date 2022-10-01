// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
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
