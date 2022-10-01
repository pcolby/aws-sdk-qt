// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DescribeDataRepositoryTasksResponse);
    return static_cast<const DescribeDataRepositoryTasksRequest *>(d->request);
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
