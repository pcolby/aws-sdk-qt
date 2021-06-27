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

#include "getoutpostresponse.h"
#include "getoutpostresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::GetOutpostResponse
 * \brief The GetOutpostResponse class provides an interace for Outposts GetOutpost responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  AWS Outposts is a fully managed service that extends AWS infrastructure, APIs, and tools to customer premises. By
 *  providing local access to AWS managed infrastructure, AWS Outposts enables customers to build and run applications on
 *  premises using the same programming interfaces as in AWS Regions, while using local compute and storage resources for
 *  lower latency and local data processing
 *
 * \sa OutpostsClient::getOutpost
 */

/*!
 * Constructs a GetOutpostResponse object for \a reply to \a request, with parent \a parent.
 */
GetOutpostResponse::GetOutpostResponse(
        const GetOutpostRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new GetOutpostResponsePrivate(this), parent)
{
    setRequest(new GetOutpostRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOutpostRequest * GetOutpostResponse::request() const
{
    return static_cast<const GetOutpostRequest *>(OutpostsResponse::request());
}

/*!
 * \reimp
 * Parses a successful Outposts GetOutpost \a response.
 */
void GetOutpostResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOutpostResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::GetOutpostResponsePrivate
 * \brief The GetOutpostResponsePrivate class provides private implementation for GetOutpostResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a GetOutpostResponsePrivate object with public implementation \a q.
 */
GetOutpostResponsePrivate::GetOutpostResponsePrivate(
    GetOutpostResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts GetOutpost response element from \a xml.
 */
void GetOutpostResponsePrivate::parseGetOutpostResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOutpostResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
