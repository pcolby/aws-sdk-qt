// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdeploymentresponse.h"
#include "createdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateDeploymentResponse
 * \brief The CreateDeploymentResponse class provides an interace for Greengrass CreateDeployment responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createDeployment
 */

/*!
 * Constructs a CreateDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeploymentResponse::CreateDeploymentResponse(
        const CreateDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateDeploymentResponsePrivate(this), parent)
{
    setRequest(new CreateDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeploymentRequest * CreateDeploymentResponse::request() const
{
    Q_D(const CreateDeploymentResponse);
    return static_cast<const CreateDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateDeployment \a response.
 */
void CreateDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateDeploymentResponsePrivate
 * \brief The CreateDeploymentResponsePrivate class provides private implementation for CreateDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateDeploymentResponsePrivate object with public implementation \a q.
 */
CreateDeploymentResponsePrivate::CreateDeploymentResponsePrivate(
    CreateDeploymentResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateDeployment response element from \a xml.
 */
void CreateDeploymentResponsePrivate::parseCreateDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
