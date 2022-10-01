// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlinkassociationsresponse.h"
#include "getlinkassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetLinkAssociationsResponse
 * \brief The GetLinkAssociationsResponse class provides an interace for NetworkManager GetLinkAssociations responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getLinkAssociations
 */

/*!
 * Constructs a GetLinkAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetLinkAssociationsResponse::GetLinkAssociationsResponse(
        const GetLinkAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetLinkAssociationsResponsePrivate(this), parent)
{
    setRequest(new GetLinkAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLinkAssociationsRequest * GetLinkAssociationsResponse::request() const
{
    Q_D(const GetLinkAssociationsResponse);
    return static_cast<const GetLinkAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetLinkAssociations \a response.
 */
void GetLinkAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLinkAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetLinkAssociationsResponsePrivate
 * \brief The GetLinkAssociationsResponsePrivate class provides private implementation for GetLinkAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetLinkAssociationsResponsePrivate object with public implementation \a q.
 */
GetLinkAssociationsResponsePrivate::GetLinkAssociationsResponsePrivate(
    GetLinkAssociationsResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetLinkAssociations response element from \a xml.
 */
void GetLinkAssociationsResponsePrivate::parseGetLinkAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLinkAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
