// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinsightresponse.h"
#include "getinsightresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetInsightResponse
 * \brief The GetInsightResponse class provides an interace for XRay GetInsight responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getInsight
 */

/*!
 * Constructs a GetInsightResponse object for \a reply to \a request, with parent \a parent.
 */
GetInsightResponse::GetInsightResponse(
        const GetInsightRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetInsightResponsePrivate(this), parent)
{
    setRequest(new GetInsightRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInsightRequest * GetInsightResponse::request() const
{
    Q_D(const GetInsightResponse);
    return static_cast<const GetInsightRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetInsight \a response.
 */
void GetInsightResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInsightResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetInsightResponsePrivate
 * \brief The GetInsightResponsePrivate class provides private implementation for GetInsightResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetInsightResponsePrivate object with public implementation \a q.
 */
GetInsightResponsePrivate::GetInsightResponsePrivate(
    GetInsightResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetInsight response element from \a xml.
 */
void GetInsightResponsePrivate::parseGetInsightResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInsightResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
