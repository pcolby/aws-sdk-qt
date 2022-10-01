// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
