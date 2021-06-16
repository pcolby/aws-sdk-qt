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

#include "getexperimentresponse.h"
#include "getexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FIS {

/*!
 * \class QtAws::FIS::GetExperimentResponse
 * \brief The GetExperimentResponse class provides an interace for FIS GetExperiment responses.
 *
 * \inmodule QtAwsFIS
 *
 *  AWS Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your AWS
 *  workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault Injection
 *  Simulator User
 *
 * \sa FisClient::getExperiment
 */

/*!
 * Constructs a GetExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
GetExperimentResponse::GetExperimentResponse(
        const GetExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new GetExperimentResponsePrivate(this), parent)
{
    setRequest(new GetExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExperimentRequest * GetExperimentResponse::request() const
{
    Q_D(const GetExperimentResponse);
    return static_cast<const GetExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FIS GetExperiment \a response.
 */
void GetExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FIS::GetExperimentResponsePrivate
 * \brief The GetExperimentResponsePrivate class provides private implementation for GetExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsFIS
 */

/*!
 * Constructs a GetExperimentResponsePrivate object with public implementation \a q.
 */
GetExperimentResponsePrivate::GetExperimentResponsePrivate(
    GetExperimentResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a FIS GetExperiment response element from \a xml.
 */
void GetExperimentResponsePrivate::parseGetExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FIS
} // namespace QtAws
