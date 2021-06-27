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

#include "describedatarepositorytasksresponse.h"
#include "describedatarepositorytasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeDataRepositoryTasksResponse
 * \brief The DescribeDataRepositoryTasksResponse class provides an interace for FSx DescribeDataRepositoryTasks responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeDataRepositoryTasks
 */

/*!
 * Constructs a DescribeDataRepositoryTasksResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDataRepositoryTasksResponse::DescribeDataRepositoryTasksResponse(
        const DescribeDataRepositoryTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DescribeDataRepositoryTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeDataRepositoryTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDataRepositoryTasksRequest * DescribeDataRepositoryTasksResponse::request() const
{
    return static_cast<const DescribeDataRepositoryTasksRequest *>(FSxResponse::request());
}

/*!
 * \reimp
 * Parses a successful FSx DescribeDataRepositoryTasks \a response.
 */
void DescribeDataRepositoryTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDataRepositoryTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DescribeDataRepositoryTasksResponsePrivate
 * \brief The DescribeDataRepositoryTasksResponsePrivate class provides private implementation for DescribeDataRepositoryTasksResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeDataRepositoryTasksResponsePrivate object with public implementation \a q.
 */
DescribeDataRepositoryTasksResponsePrivate::DescribeDataRepositoryTasksResponsePrivate(
    DescribeDataRepositoryTasksResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DescribeDataRepositoryTasks response element from \a xml.
 */
void DescribeDataRepositoryTasksResponsePrivate::parseDescribeDataRepositoryTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDataRepositoryTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
