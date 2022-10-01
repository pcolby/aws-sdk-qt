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

#include "gettagkeysresponse.h"
#include "gettagkeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::GetTagKeysResponse
 * \brief The GetTagKeysResponse class provides an interace for ResourceGroupsTagging GetTagKeys responses.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::getTagKeys
 */

/*!
 * Constructs a GetTagKeysResponse object for \a reply to \a request, with parent \a parent.
 */
GetTagKeysResponse::GetTagKeysResponse(
        const GetTagKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingResponse(new GetTagKeysResponsePrivate(this), parent)
{
    setRequest(new GetTagKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTagKeysRequest * GetTagKeysResponse::request() const
{
    Q_D(const GetTagKeysResponse);
    return static_cast<const GetTagKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroupsTagging GetTagKeys \a response.
 */
void GetTagKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTagKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTagging::GetTagKeysResponsePrivate
 * \brief The GetTagKeysResponsePrivate class provides private implementation for GetTagKeysResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a GetTagKeysResponsePrivate object with public implementation \a q.
 */
GetTagKeysResponsePrivate::GetTagKeysResponsePrivate(
    GetTagKeysResponse * const q) : ResourceGroupsTaggingResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTagging GetTagKeys response element from \a xml.
 */
void GetTagKeysResponsePrivate::parseGetTagKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTagKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTagging
} // namespace QtAws
