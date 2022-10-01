// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexperimentresponse.h"
#include "getexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::GetExperimentResponse
 * \brief The GetExperimentResponse class provides an interace for Fis GetExperiment responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
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
 * Parses a successful Fis GetExperiment \a response.
 */
void GetExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::GetExperimentResponsePrivate
 * \brief The GetExperimentResponsePrivate class provides private implementation for GetExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a GetExperimentResponsePrivate object with public implementation \a q.
 */
GetExperimentResponsePrivate::GetExperimentResponsePrivate(
    GetExperimentResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis GetExperiment response element from \a xml.
 */
void GetExperimentResponsePrivate::parseGetExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
