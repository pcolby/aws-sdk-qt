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

#include "getoutpostinstancetypesresponse.h"
#include "getoutpostinstancetypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::GetOutpostInstanceTypesResponse
 * \brief The GetOutpostInstanceTypesResponse class provides an interace for Outposts GetOutpostInstanceTypes responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  AWS Outposts is a fully managed service that extends AWS infrastructure, APIs, and tools to customer premises. By
 *  providing local access to AWS managed infrastructure, AWS Outposts enables customers to build and run applications on
 *  premises using the same programming interfaces as in AWS Regions, while using local compute and storage resources for
 *  lower latency and local data processing
 *
 * \sa OutpostsClient::getOutpostInstanceTypes
 */

/*!
 * Constructs a GetOutpostInstanceTypesResponse object for \a reply to \a request, with parent \a parent.
 */
GetOutpostInstanceTypesResponse::GetOutpostInstanceTypesResponse(
        const GetOutpostInstanceTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new GetOutpostInstanceTypesResponsePrivate(this), parent)
{
    setRequest(new GetOutpostInstanceTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOutpostInstanceTypesRequest * GetOutpostInstanceTypesResponse::request() const
{
    Q_D(const GetOutpostInstanceTypesResponse);
    return static_cast<const GetOutpostInstanceTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts GetOutpostInstanceTypes \a response.
 */
void GetOutpostInstanceTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOutpostInstanceTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::GetOutpostInstanceTypesResponsePrivate
 * \brief The GetOutpostInstanceTypesResponsePrivate class provides private implementation for GetOutpostInstanceTypesResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a GetOutpostInstanceTypesResponsePrivate object with public implementation \a q.
 */
GetOutpostInstanceTypesResponsePrivate::GetOutpostInstanceTypesResponsePrivate(
    GetOutpostInstanceTypesResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts GetOutpostInstanceTypes response element from \a xml.
 */
void GetOutpostInstanceTypesResponsePrivate::parseGetOutpostInstanceTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOutpostInstanceTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
