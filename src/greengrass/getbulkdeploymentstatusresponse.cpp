// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbulkdeploymentstatusresponse.h"
#include "getbulkdeploymentstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetBulkDeploymentStatusResponse
 * \brief The GetBulkDeploymentStatusResponse class provides an interace for Greengrass GetBulkDeploymentStatus responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getBulkDeploymentStatus
 */

/*!
 * Constructs a GetBulkDeploymentStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetBulkDeploymentStatusResponse::GetBulkDeploymentStatusResponse(
        const GetBulkDeploymentStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetBulkDeploymentStatusResponsePrivate(this), parent)
{
    setRequest(new GetBulkDeploymentStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBulkDeploymentStatusRequest * GetBulkDeploymentStatusResponse::request() const
{
    Q_D(const GetBulkDeploymentStatusResponse);
    return static_cast<const GetBulkDeploymentStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetBulkDeploymentStatus \a response.
 */
void GetBulkDeploymentStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBulkDeploymentStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetBulkDeploymentStatusResponsePrivate
 * \brief The GetBulkDeploymentStatusResponsePrivate class provides private implementation for GetBulkDeploymentStatusResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetBulkDeploymentStatusResponsePrivate object with public implementation \a q.
 */
GetBulkDeploymentStatusResponsePrivate::GetBulkDeploymentStatusResponsePrivate(
    GetBulkDeploymentStatusResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetBulkDeploymentStatus response element from \a xml.
 */
void GetBulkDeploymentStatusResponsePrivate::parseGetBulkDeploymentStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBulkDeploymentStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
