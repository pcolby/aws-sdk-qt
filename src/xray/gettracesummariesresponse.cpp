// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettracesummariesresponse.h"
#include "gettracesummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetTraceSummariesResponse
 * \brief The GetTraceSummariesResponse class provides an interace for XRay GetTraceSummaries responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getTraceSummaries
 */

/*!
 * Constructs a GetTraceSummariesResponse object for \a reply to \a request, with parent \a parent.
 */
GetTraceSummariesResponse::GetTraceSummariesResponse(
        const GetTraceSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetTraceSummariesResponsePrivate(this), parent)
{
    setRequest(new GetTraceSummariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTraceSummariesRequest * GetTraceSummariesResponse::request() const
{
    Q_D(const GetTraceSummariesResponse);
    return static_cast<const GetTraceSummariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetTraceSummaries \a response.
 */
void GetTraceSummariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTraceSummariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetTraceSummariesResponsePrivate
 * \brief The GetTraceSummariesResponsePrivate class provides private implementation for GetTraceSummariesResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetTraceSummariesResponsePrivate object with public implementation \a q.
 */
GetTraceSummariesResponsePrivate::GetTraceSummariesResponsePrivate(
    GetTraceSummariesResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetTraceSummaries response element from \a xml.
 */
void GetTraceSummariesResponsePrivate::parseGetTraceSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTraceSummariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
