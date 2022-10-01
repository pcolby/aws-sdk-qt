// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeploymentresponse.h"
#include "getdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::GetDeploymentResponse
 * \brief The GetDeploymentResponse class provides an interace for GreengrassV2 GetDeployment responses.
 *
 * \inmodule QtAwsGreengrassV2
 *
 *  IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge devices.
 *  This enables devices to collect and analyze data closer to the source of information, react autonomously to local
 *  events, and communicate securely with each other on local networks. Local devices can also communicate securely with
 *  Amazon Web Services IoT Core and export IoT data to the Amazon Web Services Cloud. IoT Greengrass developers can use
 *  Lambda functions and components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  IoT Greengrass Version 2 provides a new major version of the IoT Greengrass Core software, new APIs, and a new console.
 *  Use this API reference to learn how to use the IoT Greengrass V2 API operations to manage components, manage
 *  deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is IoT Greengrass?</a>
 *  in the <i>IoT Greengrass V2 Developer
 *
 * \sa GreengrassV2Client::getDeployment
 */

/*!
 * Constructs a GetDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeploymentResponse::GetDeploymentResponse(
        const GetDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassV2Response(new GetDeploymentResponsePrivate(this), parent)
{
    setRequest(new GetDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeploymentRequest * GetDeploymentResponse::request() const
{
    Q_D(const GetDeploymentResponse);
    return static_cast<const GetDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GreengrassV2 GetDeployment \a response.
 */
void GetDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GreengrassV2::GetDeploymentResponsePrivate
 * \brief The GetDeploymentResponsePrivate class provides private implementation for GetDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a GetDeploymentResponsePrivate object with public implementation \a q.
 */
GetDeploymentResponsePrivate::GetDeploymentResponsePrivate(
    GetDeploymentResponse * const q) : GreengrassV2ResponsePrivate(q)
{

}

/*!
 * Parses a GreengrassV2 GetDeployment response element from \a xml.
 */
void GetDeploymentResponsePrivate::parseGetDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GreengrassV2
} // namespace QtAws
