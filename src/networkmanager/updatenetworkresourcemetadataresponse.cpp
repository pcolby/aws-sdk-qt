// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenetworkresourcemetadataresponse.h"
#include "updatenetworkresourcemetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateNetworkResourceMetadataResponse
 * \brief The UpdateNetworkResourceMetadataResponse class provides an interace for NetworkManager UpdateNetworkResourceMetadata responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateNetworkResourceMetadata
 */

/*!
 * Constructs a UpdateNetworkResourceMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNetworkResourceMetadataResponse::UpdateNetworkResourceMetadataResponse(
        const UpdateNetworkResourceMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new UpdateNetworkResourceMetadataResponsePrivate(this), parent)
{
    setRequest(new UpdateNetworkResourceMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNetworkResourceMetadataRequest * UpdateNetworkResourceMetadataResponse::request() const
{
    Q_D(const UpdateNetworkResourceMetadataResponse);
    return static_cast<const UpdateNetworkResourceMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager UpdateNetworkResourceMetadata \a response.
 */
void UpdateNetworkResourceMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNetworkResourceMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::UpdateNetworkResourceMetadataResponsePrivate
 * \brief The UpdateNetworkResourceMetadataResponsePrivate class provides private implementation for UpdateNetworkResourceMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateNetworkResourceMetadataResponsePrivate object with public implementation \a q.
 */
UpdateNetworkResourceMetadataResponsePrivate::UpdateNetworkResourceMetadataResponsePrivate(
    UpdateNetworkResourceMetadataResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager UpdateNetworkResourceMetadata response element from \a xml.
 */
void UpdateNetworkResourceMetadataResponsePrivate::parseUpdateNetworkResourceMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNetworkResourceMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
