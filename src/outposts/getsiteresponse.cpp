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

#include "getsiteresponse.h"
#include "getsiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::GetSiteResponse
 * \brief The GetSiteResponse class provides an interace for Outposts GetSite responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::getSite
 */

/*!
 * Constructs a GetSiteResponse object for \a reply to \a request, with parent \a parent.
 */
GetSiteResponse::GetSiteResponse(
        const GetSiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new GetSiteResponsePrivate(this), parent)
{
    setRequest(new GetSiteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSiteRequest * GetSiteResponse::request() const
{
    Q_D(const GetSiteResponse);
    return static_cast<const GetSiteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts GetSite \a response.
 */
void GetSiteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSiteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::GetSiteResponsePrivate
 * \brief The GetSiteResponsePrivate class provides private implementation for GetSiteResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a GetSiteResponsePrivate object with public implementation \a q.
 */
GetSiteResponsePrivate::GetSiteResponsePrivate(
    GetSiteResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts GetSite response element from \a xml.
 */
void GetSiteResponsePrivate::parseGetSiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSiteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
