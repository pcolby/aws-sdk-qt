// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinsightsummariesresponse.h"
#include "getinsightsummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetInsightSummariesResponse
 * \brief The GetInsightSummariesResponse class provides an interace for XRay GetInsightSummaries responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getInsightSummaries
 */

/*!
 * Constructs a GetInsightSummariesResponse object for \a reply to \a request, with parent \a parent.
 */
GetInsightSummariesResponse::GetInsightSummariesResponse(
        const GetInsightSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetInsightSummariesResponsePrivate(this), parent)
{
    setRequest(new GetInsightSummariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInsightSummariesRequest * GetInsightSummariesResponse::request() const
{
    Q_D(const GetInsightSummariesResponse);
    return static_cast<const GetInsightSummariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetInsightSummaries \a response.
 */
void GetInsightSummariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInsightSummariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetInsightSummariesResponsePrivate
 * \brief The GetInsightSummariesResponsePrivate class provides private implementation for GetInsightSummariesResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetInsightSummariesResponsePrivate object with public implementation \a q.
 */
GetInsightSummariesResponsePrivate::GetInsightSummariesResponsePrivate(
    GetInsightSummariesResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetInsightSummaries response element from \a xml.
 */
void GetInsightSummariesResponsePrivate::parseGetInsightSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInsightSummariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
