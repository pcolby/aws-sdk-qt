// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecorenetworkpolicyversionresponse.h"
#include "deletecorenetworkpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkPolicyVersionResponse
 * \brief The DeleteCoreNetworkPolicyVersionResponse class provides an interace for NetworkManager DeleteCoreNetworkPolicyVersion responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteCoreNetworkPolicyVersion
 */

/*!
 * Constructs a DeleteCoreNetworkPolicyVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCoreNetworkPolicyVersionResponse::DeleteCoreNetworkPolicyVersionResponse(
        const DeleteCoreNetworkPolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteCoreNetworkPolicyVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteCoreNetworkPolicyVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCoreNetworkPolicyVersionRequest * DeleteCoreNetworkPolicyVersionResponse::request() const
{
    Q_D(const DeleteCoreNetworkPolicyVersionResponse);
    return static_cast<const DeleteCoreNetworkPolicyVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteCoreNetworkPolicyVersion \a response.
 */
void DeleteCoreNetworkPolicyVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCoreNetworkPolicyVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteCoreNetworkPolicyVersionResponsePrivate
 * \brief The DeleteCoreNetworkPolicyVersionResponsePrivate class provides private implementation for DeleteCoreNetworkPolicyVersionResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteCoreNetworkPolicyVersionResponsePrivate object with public implementation \a q.
 */
DeleteCoreNetworkPolicyVersionResponsePrivate::DeleteCoreNetworkPolicyVersionResponsePrivate(
    DeleteCoreNetworkPolicyVersionResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteCoreNetworkPolicyVersion response element from \a xml.
 */
void DeleteCoreNetworkPolicyVersionResponsePrivate::parseDeleteCoreNetworkPolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCoreNetworkPolicyVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
