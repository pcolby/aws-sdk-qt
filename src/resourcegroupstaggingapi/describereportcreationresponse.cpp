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

#include "describereportcreationresponse.h"
#include "describereportcreationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::DescribeReportCreationResponse
 * \brief The DescribeReportCreationResponse class provides an interace for ResourceGroupsTaggingAPI DescribeReportCreation responses.
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 *
 * \sa ResourceGroupsTaggingAPIClient::describeReportCreation
 */

/*!
 * Constructs a DescribeReportCreationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReportCreationResponse::DescribeReportCreationResponse(
        const DescribeReportCreationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingAPIResponse(new DescribeReportCreationResponsePrivate(this), parent)
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
 * Parses a successful ResourceGroupsTaggingAPI DescribeReportCreation \a response.
 */
void DescribeReportCreationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReportCreationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::DescribeReportCreationResponsePrivate
 * \brief The DescribeReportCreationResponsePrivate class provides private implementation for DescribeReportCreationResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a DescribeReportCreationResponsePrivate object with public implementation \a q.
 */
DescribeReportCreationResponsePrivate::DescribeReportCreationResponsePrivate(
    DescribeReportCreationResponse * const q) : ResourceGroupsTaggingAPIResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTaggingAPI DescribeReportCreation response element from \a xml.
 */
void DescribeReportCreationResponsePrivate::parseDescribeReportCreationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReportCreationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
