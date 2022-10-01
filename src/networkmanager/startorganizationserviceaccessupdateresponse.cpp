// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startorganizationserviceaccessupdateresponse.h"
#include "startorganizationserviceaccessupdateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::StartOrganizationServiceAccessUpdateResponse
 * \brief The StartOrganizationServiceAccessUpdateResponse class provides an interace for NetworkManager StartOrganizationServiceAccessUpdate responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::startOrganizationServiceAccessUpdate
 */

/*!
 * Constructs a StartOrganizationServiceAccessUpdateResponse object for \a reply to \a request, with parent \a parent.
 */
StartOrganizationServiceAccessUpdateResponse::StartOrganizationServiceAccessUpdateResponse(
        const StartOrganizationServiceAccessUpdateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new StartOrganizationServiceAccessUpdateResponsePrivate(this), parent)
{
    setRequest(new StartOrganizationServiceAccessUpdateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartOrganizationServiceAccessUpdateRequest * StartOrganizationServiceAccessUpdateResponse::request() const
{
    Q_D(const StartOrganizationServiceAccessUpdateResponse);
    return static_cast<const StartOrganizationServiceAccessUpdateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager StartOrganizationServiceAccessUpdate \a response.
 */
void StartOrganizationServiceAccessUpdateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartOrganizationServiceAccessUpdateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::StartOrganizationServiceAccessUpdateResponsePrivate
 * \brief The StartOrganizationServiceAccessUpdateResponsePrivate class provides private implementation for StartOrganizationServiceAccessUpdateResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a StartOrganizationServiceAccessUpdateResponsePrivate object with public implementation \a q.
 */
StartOrganizationServiceAccessUpdateResponsePrivate::StartOrganizationServiceAccessUpdateResponsePrivate(
    StartOrganizationServiceAccessUpdateResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager StartOrganizationServiceAccessUpdate response element from \a xml.
 */
void StartOrganizationServiceAccessUpdateResponsePrivate::parseStartOrganizationServiceAccessUpdateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartOrganizationServiceAccessUpdateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
