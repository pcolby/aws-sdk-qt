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

#include "listlftagsresponse.h"
#include "listlftagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListLFTagsResponse
 * \brief The ListLFTagsResponse class provides an interace for LakeFormation ListLFTags responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::listLFTags
 */

/*!
 * Constructs a ListLFTagsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLFTagsResponse::ListLFTagsResponse(
        const ListLFTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new ListLFTagsResponsePrivate(this), parent)
{
    setRequest(new ListLFTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLFTagsRequest * ListLFTagsResponse::request() const
{
    return static_cast<const ListLFTagsRequest *>(LakeFormationResponse::request());
}

/*!
 * \reimp
 * Parses a successful LakeFormation ListLFTags \a response.
 */
void ListLFTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLFTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::ListLFTagsResponsePrivate
 * \brief The ListLFTagsResponsePrivate class provides private implementation for ListLFTagsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListLFTagsResponsePrivate object with public implementation \a q.
 */
ListLFTagsResponsePrivate::ListLFTagsResponsePrivate(
    ListLFTagsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation ListLFTags response element from \a xml.
 */
void ListLFTagsResponsePrivate::parseListLFTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLFTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
