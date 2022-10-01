// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerecoveryinstancesresponse.h"
#include "describerecoveryinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DescribeRecoveryInstancesResponse
 * \brief The DescribeRecoveryInstancesResponse class provides an interace for Drs DescribeRecoveryInstances responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::describeRecoveryInstances
 */

/*!
 * Constructs a DescribeRecoveryInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRecoveryInstancesResponse::DescribeRecoveryInstancesResponse(
        const DescribeRecoveryInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new DescribeRecoveryInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeRecoveryInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRecoveryInstancesRequest * DescribeRecoveryInstancesResponse::request() const
{
    Q_D(const DescribeRecoveryInstancesResponse);
    return static_cast<const DescribeRecoveryInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs DescribeRecoveryInstances \a response.
 */
void DescribeRecoveryInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRecoveryInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::DescribeRecoveryInstancesResponsePrivate
 * \brief The DescribeRecoveryInstancesResponsePrivate class provides private implementation for DescribeRecoveryInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DescribeRecoveryInstancesResponsePrivate object with public implementation \a q.
 */
DescribeRecoveryInstancesResponsePrivate::DescribeRecoveryInstancesResponsePrivate(
    DescribeRecoveryInstancesResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs DescribeRecoveryInstances response element from \a xml.
 */
void DescribeRecoveryInstancesResponsePrivate::parseDescribeRecoveryInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRecoveryInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
