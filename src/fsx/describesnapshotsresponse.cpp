// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesnapshotsresponse.h"
#include "describesnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeSnapshotsResponse
 * \brief The DescribeSnapshotsResponse class provides an interace for FSx DescribeSnapshots responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeSnapshots
 */

/*!
 * Constructs a DescribeSnapshotsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSnapshotsResponse::DescribeSnapshotsResponse(
        const DescribeSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DescribeSnapshotsResponsePrivate(this), parent)
{
    setRequest(new DescribeSnapshotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSnapshotsRequest * DescribeSnapshotsResponse::request() const
{
    Q_D(const DescribeSnapshotsResponse);
    return static_cast<const DescribeSnapshotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DescribeSnapshots \a response.
 */
void DescribeSnapshotsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSnapshotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DescribeSnapshotsResponsePrivate
 * \brief The DescribeSnapshotsResponsePrivate class provides private implementation for DescribeSnapshotsResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeSnapshotsResponsePrivate object with public implementation \a q.
 */
DescribeSnapshotsResponsePrivate::DescribeSnapshotsResponsePrivate(
    DescribeSnapshotsResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DescribeSnapshots response element from \a xml.
 */
void DescribeSnapshotsResponsePrivate::parseDescribeSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSnapshotsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
