/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  AWS IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge
 *  devices. This enables devices to collect and analyze data closer to the source of information, react autonomously to
 *  local events, and communicate securely with each other on local networks. Local devices can also communicate securely
 *  with AWS IoT Core and export IoT data to the AWS Cloud. AWS IoT Greengrass developers can use AWS Lambda functions and
 *  components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  AWS IoT Greengrass Version 2 provides a new major version of the AWS IoT Greengrass Core software, new APIs, and a new
 *  console. Use this API reference to learn how to use the AWS IoT Greengrass V2 API operations to manage components,
 *  manage deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is AWS IoT
 *  Greengrass?</a> in the <i>AWS IoT Greengrass V2 Developer
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
