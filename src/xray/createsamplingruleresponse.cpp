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

#include "createsamplingruleresponse.h"
#include "createsamplingruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::CreateSamplingRuleResponse
 * \brief The CreateSamplingRuleResponse class provides an interace for XRay CreateSamplingRule responses.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::createSamplingRule
 */

/*!
 * Constructs a CreateSamplingRuleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSamplingRuleResponse::CreateSamplingRuleResponse(
        const CreateSamplingRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new CreateSamplingRuleResponsePrivate(this), parent)
{
    setRequest(new CreateSamplingRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSamplingRuleRequest * CreateSamplingRuleResponse::request() const
{
    Q_D(const CreateSamplingRuleResponse);
    return static_cast<const CreateSamplingRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay CreateSamplingRule \a response.
 */
void CreateSamplingRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSamplingRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::CreateSamplingRuleResponsePrivate
 * \brief The CreateSamplingRuleResponsePrivate class provides private implementation for CreateSamplingRuleResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a CreateSamplingRuleResponsePrivate object with public implementation \a q.
 */
CreateSamplingRuleResponsePrivate::CreateSamplingRuleResponsePrivate(
    CreateSamplingRuleResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay CreateSamplingRule response element from \a xml.
 */
void CreateSamplingRuleResponsePrivate::parseCreateSamplingRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSamplingRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
