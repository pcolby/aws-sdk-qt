// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
