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

#include "getkeygroupresponse.h"
#include "getkeygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetKeyGroupResponse
 * \brief The GetKeyGroupResponse class provides an interace for CloudFront GetKeyGroup responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getKeyGroup
 */

/*!
 * Constructs a GetKeyGroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetKeyGroupResponse::GetKeyGroupResponse(
        const GetKeyGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetKeyGroupResponsePrivate(this), parent)
{
    setRequest(new GetKeyGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetKeyGroupRequest * GetKeyGroupResponse::request() const
{
    Q_D(const GetKeyGroupResponse);
    return static_cast<const GetKeyGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetKeyGroup \a response.
 */
void GetKeyGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetKeyGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetKeyGroupResponsePrivate
 * \brief The GetKeyGroupResponsePrivate class provides private implementation for GetKeyGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetKeyGroupResponsePrivate object with public implementation \a q.
 */
GetKeyGroupResponsePrivate::GetKeyGroupResponsePrivate(
    GetKeyGroupResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetKeyGroup response element from \a xml.
 */
void GetKeyGroupResponsePrivate::parseGetKeyGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetKeyGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
