// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcompliancesummaryresponse.h"
#include "getcompliancesummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::GetComplianceSummaryResponse
 * \brief The GetComplianceSummaryResponse class provides an interace for ResourceGroupsTagging GetComplianceSummary responses.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::getComplianceSummary
 */

/*!
 * Constructs a GetComplianceSummaryResponse object for \a reply to \a request, with parent \a parent.
 */
GetComplianceSummaryResponse::GetComplianceSummaryResponse(
        const GetComplianceSummaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingResponse(new GetComplianceSummaryResponsePrivate(this), parent)
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
 * Parses a successful ResourceGroupsTagging GetComplianceSummary \a response.
 */
void GetComplianceSummaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetComplianceSummaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTagging::GetComplianceSummaryResponsePrivate
 * \brief The GetComplianceSummaryResponsePrivate class provides private implementation for GetComplianceSummaryResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a GetComplianceSummaryResponsePrivate object with public implementation \a q.
 */
GetComplianceSummaryResponsePrivate::GetComplianceSummaryResponsePrivate(
    GetComplianceSummaryResponse * const q) : ResourceGroupsTaggingResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTagging GetComplianceSummary response element from \a xml.
 */
void GetComplianceSummaryResponsePrivate::parseGetComplianceSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetComplianceSummaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTagging
} // namespace QtAws
