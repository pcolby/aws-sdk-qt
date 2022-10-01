// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startbulkdeploymentresponse.h"
#include "startbulkdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::StartBulkDeploymentResponse
 * \brief The StartBulkDeploymentResponse class provides an interace for Greengrass StartBulkDeployment responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::startBulkDeployment
 */

/*!
 * Constructs a StartBulkDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
StartBulkDeploymentResponse::StartBulkDeploymentResponse(
        const StartBulkDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new StartBulkDeploymentResponsePrivate(this), parent)
{
    setRequest(new StartBulkDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartBulkDeploymentRequest * StartBulkDeploymentResponse::request() const
{
    Q_D(const StartBulkDeploymentResponse);
    return static_cast<const StartBulkDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass StartBulkDeployment \a response.
 */
void StartBulkDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartBulkDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::StartBulkDeploymentResponsePrivate
 * \brief The StartBulkDeploymentResponsePrivate class provides private implementation for StartBulkDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a StartBulkDeploymentResponsePrivate object with public implementation \a q.
 */
StartBulkDeploymentResponsePrivate::StartBulkDeploymentResponsePrivate(
    StartBulkDeploymentResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass StartBulkDeployment response element from \a xml.
 */
void StartBulkDeploymentResponsePrivate::parseStartBulkDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartBulkDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
