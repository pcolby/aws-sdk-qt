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

#include "listoutpostsresponse.h"
#include "listoutpostsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::ListOutpostsResponse
 * \brief The ListOutpostsResponse class provides an interace for Outposts ListOutposts responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  AWS Outposts is a fully managed service that extends AWS infrastructure, APIs, and tools to customer premises. By
 *  providing local access to AWS managed infrastructure, AWS Outposts enables customers to build and run applications on
 *  premises using the same programming interfaces as in AWS Regions, while using local compute and storage resources for
 *  lower latency and local data processing
 *
 * \sa OutpostsClient::listOutposts
 */

/*!
 * Constructs a ListOutpostsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOutpostsResponse::ListOutpostsResponse(
        const ListOutpostsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new ListOutpostsResponsePrivate(this), parent)
{
    setRequest(new ListOutpostsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOutpostsRequest * ListOutpostsResponse::request() const
{
    return static_cast<const ListOutpostsRequest *>(OutpostsResponse::request());
}

/*!
 * \reimp
 * Parses a successful Outposts ListOutposts \a response.
 */
void ListOutpostsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOutpostsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::ListOutpostsResponsePrivate
 * \brief The ListOutpostsResponsePrivate class provides private implementation for ListOutpostsResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a ListOutpostsResponsePrivate object with public implementation \a q.
 */
ListOutpostsResponsePrivate::ListOutpostsResponsePrivate(
    ListOutpostsResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts ListOutposts response element from \a xml.
 */
void ListOutpostsResponsePrivate::parseListOutpostsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOutpostsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
