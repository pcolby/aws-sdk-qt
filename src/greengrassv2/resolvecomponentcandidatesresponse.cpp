// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resolvecomponentcandidatesresponse.h"
#include "resolvecomponentcandidatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::ResolveComponentCandidatesResponse
 * \brief The ResolveComponentCandidatesResponse class provides an interace for GreengrassV2 ResolveComponentCandidates responses.
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
 * \sa GreengrassV2Client::resolveComponentCandidates
 */

/*!
 * Constructs a ResolveComponentCandidatesResponse object for \a reply to \a request, with parent \a parent.
 */
ResolveComponentCandidatesResponse::ResolveComponentCandidatesResponse(
        const ResolveComponentCandidatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassV2Response(new ResolveComponentCandidatesResponsePrivate(this), parent)
{
    setRequest(new ResolveComponentCandidatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResolveComponentCandidatesRequest * ResolveComponentCandidatesResponse::request() const
{
    Q_D(const ResolveComponentCandidatesResponse);
    return static_cast<const ResolveComponentCandidatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GreengrassV2 ResolveComponentCandidates \a response.
 */
void ResolveComponentCandidatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResolveComponentCandidatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GreengrassV2::ResolveComponentCandidatesResponsePrivate
 * \brief The ResolveComponentCandidatesResponsePrivate class provides private implementation for ResolveComponentCandidatesResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a ResolveComponentCandidatesResponsePrivate object with public implementation \a q.
 */
ResolveComponentCandidatesResponsePrivate::ResolveComponentCandidatesResponsePrivate(
    ResolveComponentCandidatesResponse * const q) : GreengrassV2ResponsePrivate(q)
{

}

/*!
 * Parses a GreengrassV2 ResolveComponentCandidates response element from \a xml.
 */
void ResolveComponentCandidatesResponsePrivate::parseResolveComponentCandidatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResolveComponentCandidatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GreengrassV2
} // namespace QtAws
