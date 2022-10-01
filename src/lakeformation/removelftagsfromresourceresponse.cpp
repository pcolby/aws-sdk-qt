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

#include "removelftagsfromresourceresponse.h"
#include "removelftagsfromresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::RemoveLFTagsFromResourceResponse
 * \brief The RemoveLFTagsFromResourceResponse class provides an interace for LakeFormation RemoveLFTagsFromResource responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::removeLFTagsFromResource
 */

/*!
 * Constructs a RemoveLFTagsFromResourceResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveLFTagsFromResourceResponse::RemoveLFTagsFromResourceResponse(
        const RemoveLFTagsFromResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new RemoveLFTagsFromResourceResponsePrivate(this), parent)
{
    setRequest(new RemoveLFTagsFromResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveLFTagsFromResourceRequest * RemoveLFTagsFromResourceResponse::request() const
{
    Q_D(const RemoveLFTagsFromResourceResponse);
    return static_cast<const RemoveLFTagsFromResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation RemoveLFTagsFromResource \a response.
 */
void RemoveLFTagsFromResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveLFTagsFromResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::RemoveLFTagsFromResourceResponsePrivate
 * \brief The RemoveLFTagsFromResourceResponsePrivate class provides private implementation for RemoveLFTagsFromResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a RemoveLFTagsFromResourceResponsePrivate object with public implementation \a q.
 */
RemoveLFTagsFromResourceResponsePrivate::RemoveLFTagsFromResourceResponsePrivate(
    RemoveLFTagsFromResourceResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation RemoveLFTagsFromResource response element from \a xml.
 */
void RemoveLFTagsFromResourceResponsePrivate::parseRemoveLFTagsFromResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveLFTagsFromResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
