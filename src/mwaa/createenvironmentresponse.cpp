// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createenvironmentresponse.h"
#include "createenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mwaa {

/*!
 * \class QtAws::Mwaa::CreateEnvironmentResponse
 * \brief The CreateEnvironmentResponse class provides an interace for Mwaa CreateEnvironment responses.
 *
 * \inmodule QtAwsMwaa
 *
 *  <fullname>Amazon Managed Workflows for Apache Airflow</fullname>
 * 
 *  This section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API reference documentation. For more
 *  information, see <a href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What Is Amazon
 * 
 *  MWAA?</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p <ul> <li>
 * 
 *  <code>api.airflow.{region}.amazonaws.com</code> - This endpoint is used for environment
 * 
 *  management> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateEnvironment.html">CreateEnvironment</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_DeleteEnvironment.html">DeleteEnvironment</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_GetEnvironment.html">GetEnvironment</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_ListEnvironments.html">ListEnvironments</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_ListTagsForResource.html">ListTagsForResource</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_TagResource.html">TagResource</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_UntagResource.html">UntagResource</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_UpdateEnvironment.html">UpdateEnvironment</a>
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <code>env.airflow.{region}.amazonaws.com</code> - This endpoint is used to operate the Airflow
 * 
 *  environment> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateCliToken.html ">CreateCliToken</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateWebLoginToken.html">CreateWebLoginToken</a>
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <code>ops.airflow.{region}.amazonaws.com</code> - This endpoint is used to push environment metrics that track
 *  environment
 * 
 *  health> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/mwaa/latest/API/API_PublishMetrics.html ">PublishMetrics</a>
 * 
 *  </p </li> </ul> </li> </ul>
 * 
 *  <b>Regions</b>
 * 
 *  </p
 * 
 *  For a list of regions that Amazon MWAA supports, see <a
 *  href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html#regions-mwaa">Region availability</a> in the
 *  <i>Amazon MWAA User
 *
 * \sa MwaaClient::createEnvironment
 */

/*!
 * Constructs a CreateEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEnvironmentResponse::CreateEnvironmentResponse(
        const CreateEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MwaaResponse(new CreateEnvironmentResponsePrivate(this), parent)
{
    setRequest(new CreateEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEnvironmentRequest * CreateEnvironmentResponse::request() const
{
    Q_D(const CreateEnvironmentResponse);
    return static_cast<const CreateEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mwaa CreateEnvironment \a response.
 */
void CreateEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mwaa::CreateEnvironmentResponsePrivate
 * \brief The CreateEnvironmentResponsePrivate class provides private implementation for CreateEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsMwaa
 */

/*!
 * Constructs a CreateEnvironmentResponsePrivate object with public implementation \a q.
 */
CreateEnvironmentResponsePrivate::CreateEnvironmentResponsePrivate(
    CreateEnvironmentResponse * const q) : MwaaResponsePrivate(q)
{

}

/*!
 * Parses a Mwaa CreateEnvironment response element from \a xml.
 */
void CreateEnvironmentResponsePrivate::parseCreateEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mwaa
} // namespace QtAws
