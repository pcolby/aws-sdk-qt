// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsamplingtargetsresponse.h"
#include "getsamplingtargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetSamplingTargetsResponse
 * \brief The GetSamplingTargetsResponse class provides an interace for XRay GetSamplingTargets responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getSamplingTargets
 */

/*!
 * Constructs a GetSamplingTargetsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSamplingTargetsResponse::GetSamplingTargetsResponse(
        const GetSamplingTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetSamplingTargetsResponsePrivate(this), parent)
{
    setRequest(new GetSamplingTargetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSamplingTargetsRequest * GetSamplingTargetsResponse::request() const
{
    Q_D(const GetSamplingTargetsResponse);
    return static_cast<const GetSamplingTargetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetSamplingTargets \a response.
 */
void GetSamplingTargetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSamplingTargetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetSamplingTargetsResponsePrivate
 * \brief The GetSamplingTargetsResponsePrivate class provides private implementation for GetSamplingTargetsResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetSamplingTargetsResponsePrivate object with public implementation \a q.
 */
GetSamplingTargetsResponsePrivate::GetSamplingTargetsResponsePrivate(
    GetSamplingTargetsResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetSamplingTargets response element from \a xml.
 */
void GetSamplingTargetsResponsePrivate::parseGetSamplingTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSamplingTargetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
