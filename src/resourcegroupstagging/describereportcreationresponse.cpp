// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereportcreationresponse.h"
#include "describereportcreationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::DescribeReportCreationResponse
 * \brief The DescribeReportCreationResponse class provides an interace for ResourceGroupsTagging DescribeReportCreation responses.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::describeReportCreation
 */

/*!
 * Constructs a DescribeReportCreationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReportCreationResponse::DescribeReportCreationResponse(
        const DescribeReportCreationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingResponse(new DescribeReportCreationResponsePrivate(this), parent)
{
    setRequest(new DescribeReportCreationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReportCreationRequest * DescribeReportCreationResponse::request() const
{
    Q_D(const DescribeReportCreationResponse);
    return static_cast<const DescribeReportCreationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroupsTagging DescribeReportCreation \a response.
 */
void DescribeReportCreationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReportCreationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTagging::DescribeReportCreationResponsePrivate
 * \brief The DescribeReportCreationResponsePrivate class provides private implementation for DescribeReportCreationResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a DescribeReportCreationResponsePrivate object with public implementation \a q.
 */
DescribeReportCreationResponsePrivate::DescribeReportCreationResponsePrivate(
    DescribeReportCreationResponse * const q) : ResourceGroupsTaggingResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTagging DescribeReportCreation response element from \a xml.
 */
void DescribeReportCreationResponsePrivate::parseDescribeReportCreationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReportCreationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTagging
} // namespace QtAws
