// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesamplingruleresponse.h"
#include "updatesamplingruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::UpdateSamplingRuleResponse
 * \brief The UpdateSamplingRuleResponse class provides an interace for XRay UpdateSamplingRule responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::updateSamplingRule
 */

/*!
 * Constructs a UpdateSamplingRuleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSamplingRuleResponse::UpdateSamplingRuleResponse(
        const UpdateSamplingRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new UpdateSamplingRuleResponsePrivate(this), parent)
{
    setRequest(new UpdateSamplingRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSamplingRuleRequest * UpdateSamplingRuleResponse::request() const
{
    Q_D(const UpdateSamplingRuleResponse);
    return static_cast<const UpdateSamplingRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay UpdateSamplingRule \a response.
 */
void UpdateSamplingRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSamplingRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::UpdateSamplingRuleResponsePrivate
 * \brief The UpdateSamplingRuleResponsePrivate class provides private implementation for UpdateSamplingRuleResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a UpdateSamplingRuleResponsePrivate object with public implementation \a q.
 */
UpdateSamplingRuleResponsePrivate::UpdateSamplingRuleResponsePrivate(
    UpdateSamplingRuleResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay UpdateSamplingRule response element from \a xml.
 */
void UpdateSamplingRuleResponsePrivate::parseUpdateSamplingRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSamplingRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
