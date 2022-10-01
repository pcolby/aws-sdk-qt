// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetdeploymentsresponse.h"
#include "resetdeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ResetDeploymentsResponse
 * \brief The ResetDeploymentsResponse class provides an interace for Greengrass ResetDeployments responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::resetDeployments
 */

/*!
 * Constructs a ResetDeploymentsResponse object for \a reply to \a request, with parent \a parent.
 */
ResetDeploymentsResponse::ResetDeploymentsResponse(
        const ResetDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ResetDeploymentsResponsePrivate(this), parent)
{
    setRequest(new ResetDeploymentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetDeploymentsRequest * ResetDeploymentsResponse::request() const
{
    Q_D(const ResetDeploymentsResponse);
    return static_cast<const ResetDeploymentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ResetDeployments \a response.
 */
void ResetDeploymentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetDeploymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ResetDeploymentsResponsePrivate
 * \brief The ResetDeploymentsResponsePrivate class provides private implementation for ResetDeploymentsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ResetDeploymentsResponsePrivate object with public implementation \a q.
 */
ResetDeploymentsResponsePrivate::ResetDeploymentsResponsePrivate(
    ResetDeploymentsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ResetDeployments response element from \a xml.
 */
void ResetDeploymentsResponsePrivate::parseResetDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetDeploymentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
