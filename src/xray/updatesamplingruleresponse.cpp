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
