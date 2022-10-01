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

#include "deletesamplingruleresponse.h"
#include "deletesamplingruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::DeleteSamplingRuleResponse
 * \brief The DeleteSamplingRuleResponse class provides an interace for XRay DeleteSamplingRule responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::deleteSamplingRule
 */

/*!
 * Constructs a DeleteSamplingRuleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSamplingRuleResponse::DeleteSamplingRuleResponse(
        const DeleteSamplingRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new DeleteSamplingRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteSamplingRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSamplingRuleRequest * DeleteSamplingRuleResponse::request() const
{
    Q_D(const DeleteSamplingRuleResponse);
    return static_cast<const DeleteSamplingRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay DeleteSamplingRule \a response.
 */
void DeleteSamplingRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSamplingRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::DeleteSamplingRuleResponsePrivate
 * \brief The DeleteSamplingRuleResponsePrivate class provides private implementation for DeleteSamplingRuleResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a DeleteSamplingRuleResponsePrivate object with public implementation \a q.
 */
DeleteSamplingRuleResponsePrivate::DeleteSamplingRuleResponsePrivate(
    DeleteSamplingRuleResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay DeleteSamplingRule response element from \a xml.
 */
void DeleteSamplingRuleResponsePrivate::parseDeleteSamplingRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSamplingRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
