// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopbulkdeploymentresponse.h"
#include "stopbulkdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::StopBulkDeploymentResponse
 * \brief The StopBulkDeploymentResponse class provides an interace for Greengrass StopBulkDeployment responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::stopBulkDeployment
 */

/*!
 * Constructs a StopBulkDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
StopBulkDeploymentResponse::StopBulkDeploymentResponse(
        const StopBulkDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new StopBulkDeploymentResponsePrivate(this), parent)
{
    setRequest(new StopBulkDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopBulkDeploymentRequest * StopBulkDeploymentResponse::request() const
{
    Q_D(const StopBulkDeploymentResponse);
    return static_cast<const StopBulkDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass StopBulkDeployment \a response.
 */
void StopBulkDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopBulkDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::StopBulkDeploymentResponsePrivate
 * \brief The StopBulkDeploymentResponsePrivate class provides private implementation for StopBulkDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a StopBulkDeploymentResponsePrivate object with public implementation \a q.
 */
StopBulkDeploymentResponsePrivate::StopBulkDeploymentResponsePrivate(
    StopBulkDeploymentResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass StopBulkDeployment response element from \a xml.
 */
void StopBulkDeploymentResponsePrivate::parseStopBulkDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopBulkDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
