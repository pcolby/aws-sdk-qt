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

#include "getcompliancesummaryresponse.h"
#include "getcompliancesummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetComplianceSummaryResponse
 * \brief The GetComplianceSummaryResponse class provides an interace for ResourceGroupsTaggingAPI GetComplianceSummary responses.
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 *
 * \sa ResourceGroupsTaggingAPIClient::getComplianceSummary
 */

/*!
 * Constructs a GetComplianceSummaryResponse object for \a reply to \a request, with parent \a parent.
 */
GetComplianceSummaryResponse::GetComplianceSummaryResponse(
        const GetComplianceSummaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingAPIResponse(new GetComplianceSummaryResponsePrivate(this), parent)
{
    setRequest(new GetComplianceSummaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetComplianceSummaryRequest * GetComplianceSummaryResponse::request() const
{
    Q_D(const GetComplianceSummaryResponse);
    return static_cast<const GetComplianceSummaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroupsTaggingAPI GetComplianceSummary \a response.
 */
void GetComplianceSummaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetComplianceSummaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetComplianceSummaryResponsePrivate
 * \brief The GetComplianceSummaryResponsePrivate class provides private implementation for GetComplianceSummaryResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a GetComplianceSummaryResponsePrivate object with public implementation \a q.
 */
GetComplianceSummaryResponsePrivate::GetComplianceSummaryResponsePrivate(
    GetComplianceSummaryResponse * const q) : ResourceGroupsTaggingAPIResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTaggingAPI GetComplianceSummary response element from \a xml.
 */
void GetComplianceSummaryResponsePrivate::parseGetComplianceSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetComplianceSummaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
