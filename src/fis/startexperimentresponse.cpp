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

#include "startexperimentresponse.h"
#include "startexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::StartExperimentResponse
 * \brief The StartExperimentResponse class provides an interace for Fis StartExperiment responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::startExperiment
 */

/*!
 * Constructs a StartExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
StartExperimentResponse::StartExperimentResponse(
        const StartExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new StartExperimentResponsePrivate(this), parent)
{
    setRequest(new StartExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartExperimentRequest * StartExperimentResponse::request() const
{
    Q_D(const StartExperimentResponse);
    return static_cast<const StartExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis StartExperiment \a response.
 */
void StartExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::StartExperimentResponsePrivate
 * \brief The StartExperimentResponsePrivate class provides private implementation for StartExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a StartExperimentResponsePrivate object with public implementation \a q.
 */
StartExperimentResponsePrivate::StartExperimentResponsePrivate(
    StartExperimentResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis StartExperiment response element from \a xml.
 */
void StartExperimentResponsePrivate::parseStartExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
