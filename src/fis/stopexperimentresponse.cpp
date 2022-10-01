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

#include "stopexperimentresponse.h"
#include "stopexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::StopExperimentResponse
 * \brief The StopExperimentResponse class provides an interace for Fis StopExperiment responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::stopExperiment
 */

/*!
 * Constructs a StopExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
StopExperimentResponse::StopExperimentResponse(
        const StopExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new StopExperimentResponsePrivate(this), parent)
{
    setRequest(new StopExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopExperimentRequest * StopExperimentResponse::request() const
{
    Q_D(const StopExperimentResponse);
    return static_cast<const StopExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis StopExperiment \a response.
 */
void StopExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::StopExperimentResponsePrivate
 * \brief The StopExperimentResponsePrivate class provides private implementation for StopExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a StopExperimentResponsePrivate object with public implementation \a q.
 */
StopExperimentResponsePrivate::StopExperimentResponsePrivate(
    StopExperimentResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis StopExperiment response element from \a xml.
 */
void StopExperimentResponsePrivate::parseStopExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
