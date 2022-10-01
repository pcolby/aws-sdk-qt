// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsamplingrulesresponse.h"
#include "getsamplingrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetSamplingRulesResponse
 * \brief The GetSamplingRulesResponse class provides an interace for XRay GetSamplingRules responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getSamplingRules
 */

/*!
 * Constructs a GetSamplingRulesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSamplingRulesResponse::GetSamplingRulesResponse(
        const GetSamplingRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetSamplingRulesResponsePrivate(this), parent)
{
    setRequest(new GetSamplingRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSamplingRulesRequest * GetSamplingRulesResponse::request() const
{
    Q_D(const GetSamplingRulesResponse);
    return static_cast<const GetSamplingRulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetSamplingRules \a response.
 */
void GetSamplingRulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSamplingRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetSamplingRulesResponsePrivate
 * \brief The GetSamplingRulesResponsePrivate class provides private implementation for GetSamplingRulesResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetSamplingRulesResponsePrivate object with public implementation \a q.
 */
GetSamplingRulesResponsePrivate::GetSamplingRulesResponsePrivate(
    GetSamplingRulesResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetSamplingRules response element from \a xml.
 */
void GetSamplingRulesResponsePrivate::parseGetSamplingRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSamplingRulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
