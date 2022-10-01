// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerecoverysnapshotsresponse.h"
#include "describerecoverysnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DescribeRecoverySnapshotsResponse
 * \brief The DescribeRecoverySnapshotsResponse class provides an interace for Drs DescribeRecoverySnapshots responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::describeRecoverySnapshots
 */

/*!
 * Constructs a DescribeRecoverySnapshotsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRecoverySnapshotsResponse::DescribeRecoverySnapshotsResponse(
        const DescribeRecoverySnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new DescribeRecoverySnapshotsResponsePrivate(this), parent)
{
    setRequest(new DescribeRecoverySnapshotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRecoverySnapshotsRequest * DescribeRecoverySnapshotsResponse::request() const
{
    Q_D(const DescribeRecoverySnapshotsResponse);
    return static_cast<const DescribeRecoverySnapshotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs DescribeRecoverySnapshots \a response.
 */
void DescribeRecoverySnapshotsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRecoverySnapshotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::DescribeRecoverySnapshotsResponsePrivate
 * \brief The DescribeRecoverySnapshotsResponsePrivate class provides private implementation for DescribeRecoverySnapshotsResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DescribeRecoverySnapshotsResponsePrivate object with public implementation \a q.
 */
DescribeRecoverySnapshotsResponsePrivate::DescribeRecoverySnapshotsResponsePrivate(
    DescribeRecoverySnapshotsResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs DescribeRecoverySnapshots response element from \a xml.
 */
void DescribeRecoverySnapshotsResponsePrivate::parseDescribeRecoverySnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRecoverySnapshotsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
