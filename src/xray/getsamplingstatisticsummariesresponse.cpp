// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsamplingstatisticsummariesresponse.h"
#include "getsamplingstatisticsummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetSamplingStatisticSummariesResponse
 * \brief The GetSamplingStatisticSummariesResponse class provides an interace for XRay GetSamplingStatisticSummaries responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getSamplingStatisticSummaries
 */

/*!
 * Constructs a GetSamplingStatisticSummariesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSamplingStatisticSummariesResponse::GetSamplingStatisticSummariesResponse(
        const GetSamplingStatisticSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetSamplingStatisticSummariesResponsePrivate(this), parent)
{
    setRequest(new GetSamplingStatisticSummariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSamplingStatisticSummariesRequest * GetSamplingStatisticSummariesResponse::request() const
{
    Q_D(const GetSamplingStatisticSummariesResponse);
    return static_cast<const GetSamplingStatisticSummariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetSamplingStatisticSummaries \a response.
 */
void GetSamplingStatisticSummariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSamplingStatisticSummariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetSamplingStatisticSummariesResponsePrivate
 * \brief The GetSamplingStatisticSummariesResponsePrivate class provides private implementation for GetSamplingStatisticSummariesResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetSamplingStatisticSummariesResponsePrivate object with public implementation \a q.
 */
GetSamplingStatisticSummariesResponsePrivate::GetSamplingStatisticSummariesResponsePrivate(
    GetSamplingStatisticSummariesResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetSamplingStatisticSummaries response element from \a xml.
 */
void GetSamplingStatisticSummariesResponsePrivate::parseGetSamplingStatisticSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSamplingStatisticSummariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
